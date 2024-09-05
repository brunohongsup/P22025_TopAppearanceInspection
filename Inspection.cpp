#include "stdafx.h"
#include "Inspection.h"




#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CInspection::CInspection()
{
}

CInspection::~CInspection()
{
}

bool CInspection::InspectionDefect(int nChannel, SInspectionInfo * pII, CImageCameraView* pImageView)
{
	bool bReturn = false;



	if(!pII)
		return false;


// 	CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView((long)nChannel));
 	if(!pImageView)
 		return false;


	CEventHandlerMain* pEHEV = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));

	if(!pEHEV)
		return false;


	SdefaultModelParam sParam = pEHEV->GetModelParameters();

	LoadInspectionParameter(nChannel, sParam);


	CPerformanceCounter pc;
	pc.Start();

	double dblAccuracy = pImageView->GetAccuracyX();
		
	CUtil util;
	//pImageView->ClearLayerDrawingObject();

	do
	{
		if(!m_nDefectUse[eDefectColor_Black] && !m_nDefectUse[eDefectColor_White])
		{
			CLogManager::Write(0, _T("[Inspection] Defect inspect is excluded"));
			break;
		}

		std::vector<CRavidImage*> vctImg;
		CRavidImage* pImageCheckEmpty = nullptr;

		for(auto& iter : pII->vctImg)
		{
			vctImg.push_back(iter->pImage);
			pImageCheckEmpty = iter->pImage;
		}

		if(!pImageCheckEmpty)
		{
			pII->cResult.SetStatus(CInspectionResult::EResultType_UnknownError, CInspectionResult::EStatus_NG);
			CLogManager::Write(0, _T("[Inspection] Inspect Image does not exist "));
			break;
		}

// 		if(pII->bAlignMode)
// 			CLogManager::Write(0, _T("[Inspection] Inspect Align Start"));


		//////////////////////////////////////////////////////////////////////////////////////////////
		// 제품 없음 확인.

// 		if(IsEmpty(pImageCheckEmpty, sParam.dblCellEmptyRegion[nChannel], sParam.cCellEmptyGV[nChannel], sParam.dblCellEmptyMinimumArea[nChannel]))
// 		{
// 			pII->cResult.SetStatus(CInspectionResult::EResultType_Empty, CInspectionResult::EStatus_NG);
// 			break;
// 		}
// 		

		int nImageSizeX = (int)pImageCheckEmpty->GetSizeX();
		int nImageSizeY = (int)pImageCheckEmpty->GetSizeY();


		/////////////////////////////////////////////////////////////////////////////////////////////////////
		// Find Cell

		CRavidQuadrangle<double> rqFindArea;

		RECT rImageArea;
		rImageArea.left = 1;
		rImageArea.top = 1;
		rImageArea.right = (LONG)nImageSizeX - 1;
		rImageArea.bottom = (LONG)nImageSizeY - 1;
		rqFindArea.SetQuadrangle(rImageArea);

		if(!vctImg.size())
			break;

// 		if(!FindCellArea(vctImg[0], nChannel, pImageView, rqCellArea))
// 		{
// 			CLogManager::Write(0, _T("[Inspection] Not Found Cell"));
// 			pII->cResult.SetStatus(CInspectionResult::EResultType_Align, CInspectionResult::EStatus_NG);
// 			break;
// 		}

		CRavidImage* pImg = vctImg.at(0);
		if(!pImg)
			break;

		CRavidImage riColor;
		CRavidImage riMono;
		riMono.CreateImageBuffer(pImg->GetSizeX(), pImg->GetSizeY(), 0, CRavidImage::EValueFormat_1C_U8);

		std::vector<SFindAreaInfo> vctNonTaperAreas;

		

		if(pImg->IsColor())
		{
			vctNonTaperAreas = FindCellAreasNoTaper(pImg, nChannel, pImageView);
	
			riMono.CreateImageBuffer(pImg->GetSizeX(), pImg->GetSizeY(), 0, CRavidImage::EValueFormat_3C_U8);
			riColor.Copy(pImg);
			//riColor.Save(_T("C:\\Ravid\\Test0111.bmp"));
			CInspection i;
			i.GetColorConversion(pImg, &riMono);
			//pImg->ConvertRGBToGray();
			//riMono.Save(_T("C:\\Ravid\\TestColor1.bmp"));
			//pImg->Save(_T("C:\\Ravid\\TestColor2.bmp"));
		}
		else
		{
			riMono.Copy(pImg);
			vctNonTaperAreas = FindCellAreasNoTaper(pImg, nChannel, pImageView);

		}
	

		if(vctNonTaperAreas.empty())
		{
			CLogManager::Write(0, _T("[Inspection] Not Found Cell"));
			pII->cResult.SetStatus(CInspectionResult::EResultType_Align, CInspectionResult::EStatus_NG);
			break;
		}

		if(vctNonTaperAreas.size() != 6)
		{
			CLogManager::Write(0, _T("[Inspection] Cell Area Count NG (6)"));
			pII->cResult.SetStatus(CInspectionResult::EResultType_Align, CInspectionResult::EStatus_NG);

			break;
		}

		CRavidPoint<double> rpImageCenter;
		rpImageCenter = rqFindArea.GetCenter();


		CLogManager::Write(0, _T("[Inspection] Inspect elapsed time(1:FindCellArea) : %0.3lf ms"), pc.GetElapsedTime());
		/////////////////////////////////////////////////////////////////////////////////////////////////////
		// Find Defect 
		//[적정 스레드 개수 공식]
		//스레드 개수 = (프로세스 개수 X 2) + 1
		//CLogManager::Write(0, _T("[Inspection] hardware_concurrency : %d"), std::thread::hardware_concurrency());

		bool bCheckAreaOut = true;

// 
// 			std::vector<std::thread> my_threads;
// 			my_threads.resize(m_nThread);
// 			for(int i = 0; i < m_nThread; i++)
// 			{
// 				CInspection Ins;
// 				std::thread t(&CInspection::ThreadfucFindDefect, &Ins, a, pImg, vctRqd[i]);
// 				my_threads.push_back(t);
// 			}
// 
// 			for(int i = 0; i < m_nThread; i++)
// 				my_threads[i].join();

		for(int a = 0; a < eDefectColor_count; a++)
		{
			if(!m_nDefectUse[a])
				break;

			std::vector<SDefectInfo*> vct;
			m_vctDefectAll[a] = vct;
			m_vctDefectCluster[a] = vct;

			//double dblRegionOffset = R2P(rrAreaOffset.left, dblAccuracy);
			CRavidRect<double> rrAreaOffset;
			util.ConvertRectStringToRectStructure(m_strDefectRegionOffset[a], &rrAreaOffset);

			if(!rrAreaOffset.left && !rrAreaOffset.top && !rrAreaOffset.right && !rrAreaOffset.bottom)
			{
				CLogManager::Write(0, _T("[Inspection] Problem Occurred Area Offset Parameter "));
				pII->cResult.SetStatus(CInspectionResult::EResultType_UnknownError, CInspectionResult::EStatus_NG);
				break;
			}

			std::vector<CRavidPolygon> vctRpg;

			int nOffsetSettingType[3][4] = {{1,1,1,0},{1,0,1,0},{1,0,1,1}};

			for(int i = 0; i < vctNonTaperAreas.size(); i ++)
			{
				CRavidRect<double> rrOffset(rrAreaOffset);

				if(i == 0)
					rrOffset.left  = -2.1;

				if(i == 5)
					rrOffset.right = -2.1;


				CRavidQuadrangle<double> rqdTemp[3];
				for(int j = 0; j < 3; j++)
				{
					CRavidQuadrangle<double> rqdROI = vctNonTaperAreas[i].rqdDiv[j];
					CRavidQuadrangle<double> rqd = InflateQuadrangle(rqdROI,
																	 R2P(rrOffset.left, dblAccuracy) * nOffsetSettingType[j][0],
																	 R2P(rrOffset.top, dblAccuracy) * nOffsetSettingType[j][1],
																	 R2P(rrOffset.right, dblAccuracy) * nOffsetSettingType[j][2],
																	 R2P(rrOffset.bottom, dblAccuracy) * nOffsetSettingType[j][3]);

			

					rqdTemp[j] = rqd;

					if(j == 0)
					{
						vctNonTaperAreas[i].rqdAll.rpPoints[0] = rqd.rpPoints[0];
						vctNonTaperAreas[i].rqdAll.rpPoints[1] = rqd.rpPoints[1];
					}
					if(j == 2)
					{
						vctNonTaperAreas[i].rqdAll.rpPoints[2] = rqd.rpPoints[2];
						vctNonTaperAreas[i].rqdAll.rpPoints[3] = rqd.rpPoints[3];
					}
		


				}

				CRavidPolygon rpgContour;

				rqdTemp[0].Inflate(0, 0, 0, 10);
				rqdTemp[0].GetUnionRegion(rqdTemp[1], &rpgContour);
				//pImageView->DrawShape(ELayer_Operator, &rpgContour, ORANGE, 5);
				rqdTemp[2].Inflate(0, 10, 0, 0);

				if(!rpgContour.GetCount())
				{
					bCheckAreaOut = false;
					break;
				}

				CRavidGeometry* pRG = rpgContour.GetAt((int)0);
				if(!pRG)
				{
					bCheckAreaOut = false;
					break;
				}

				//0,3번 합친거 = rpgcontourTemp
				CRavidPolygon rpgContourTemp;
				pRG->GetUnionRegion(&rqdTemp[2], &rpgContourTemp);
				//pImageView->DrawShape(ELayer_Operator, &rpgContourFinal, BLUE, 10);

				if(!rpgContourTemp.GetCount())
				{
					bCheckAreaOut = false;
					break;
				}

				CRavidGeometry* pRGFinal = rpgContourTemp.GetAt((int)0);
				if(!pRGFinal)
				{
					bCheckAreaOut = false;
					break;
				}

				CRavidPolygon* pRPG = dynamic_cast<CRavidPolygon*>(pRGFinal);
				if(!pRPG)
				{
					bCheckAreaOut = false;
					break;
				}

				CRavidPolygon rpgContourFinal = *pRPG;
				vctRpg.push_back(rpgContourFinal);


				for(int j = 0; j < 4; j++)
				{
					if(!PointInCheck(vctNonTaperAreas[i].rqdAll.rpPoints[j], rImageArea))
					{
						pImageView->DrawShape(ELayer_Operator, &vctNonTaperAreas[i].rqdAll.rpPoints[j].MakeCrossHair(10, true), LIGHTRED, 20);
						CLogManager::Write(0, _T("[Inspection] Cell Area problem occurred"));
						pII->cResult.SetStatus(CInspectionResult::EResultType_Align, CInspectionResult::EStatus_NG);
						//goto gtAreaproblem;
						bCheckAreaOut = false;
					}
				}

				if(!bCheckAreaOut)
					break;

			}

			if(vctNonTaperAreas.size() != vctRpg.size())
				bCheckAreaOut = false;

			if(!bCheckAreaOut)
			{
				pII->cResult.SetStatus(CInspectionResult::EResultType_Align, CInspectionResult::EStatus_NG);
				break;
			}

			const int nThread = vctRpg.size();

			for(int i = 0; i < vctRpg.size(); i++)
			{
				vctNonTaperAreas[i].rqg = vctRpg[i];
				pImageView->DrawShape(ELayer_Operator, &vctNonTaperAreas[i].rqg, WHITE, 1);
				//pImageView->DrawShape(ELayer_Operator, &rpg.GetRect(), LIME, 2);
			}

//			const int nThread = vctRqdIns.size();
// 			for(CRavidQuadrangle<double> rqd : vctRqdIns)
// 				pImageView->DrawShape(ELayer_Administrator, &rqd, WHITE, 1);
			CLogManager::Write(0, _T("[Inspection] Inspect elapsed time(1-2:InflateQuadrangle) : %0.3lf ms"), pc.GetElapsedTime());

#pragma omp parallel for schedule(guided)
			for(int i = 0; i < nThread; i++)
			{	
				//ThreadfucFindDefect(a, &riMono, vctRqdIns[i]);
				ThreadfucFindDefect(nChannel, i, a, &riMono, vctNonTaperAreas[i], &riColor);

			}
		}

		if(!bCheckAreaOut)
		{
			pII->cResult.SetStatus(CInspectionResult::EResultType_Align, CInspectionResult::EStatus_NG);
			break;
		}


//gtAreaproblem:

		CLogManager::Write(0, _T("[Inspection] Inspect elapsed time(2:Find Defect) : %0.3lf ms"), pc.GetElapsedTime());

		/////////////////////////////////////////////////////////////////////////////////////////////////////
		// Erase 작은것 , 겹치는거 지우기
// 		for(int i = 0; i < eDefectColor_count; i++)
// 		{
// 			//for(int j = 0; j < ELightType_Count; j++)
// 			{
// 				EraseSmallDefect(vctDefect[i % eDefectColor_count], vctDefect[(i + 1) % eDefectColor_count]);
// 			}
// 		}
// 
// 		for(int i = 0; i < eDefectColor_count; i++)
// 		{
// 			//for(int j = 0; j < ELightType_Count; j++)
// 			{
// 				EraseOverlapDefect(vctDefect[i % eDefectColor_count], vctDefect[(i + 1) % eDefectColor_count]);
// 			}
// 		}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Cluster 가까이 있는 것 합치고 , 하나의 벡터에 모으기

// 		if(m_nClusterUse)
// 		{
// 			for(int i = 0; i < eDefectColor_count; i++)
// 				ClusterDefect(m_vctDefectCluster[i], R2P(m_dblClusterCandidateSize, dblAccuracy), R2P(m_dblClusterInflateOffset, dblAccuracy));
// 		}

		std::vector<SDefectInfo*> vctDefectAllOne;
		for(int i = 0; i < eDefectColor_count; i++)
		{
			std::copy(m_vctDefectAll[i].begin(), m_vctDefectAll[i].end(), std::back_inserter(vctDefectAllOne));
			std::copy(m_vctDefectCluster[i].begin(), m_vctDefectCluster[i].end(), std::back_inserter(vctDefectAllOne));
		}

		
		if(m_nClusterUse)
			ClusterDefect(vctDefectAllOne, R2P(m_dblClusterCandidateSize, dblAccuracy), R2P(m_dblClusterInflateOffset, dblAccuracy));

		CLogManager::Write(0, _T("[Inspection] Inspect elapsed time(3:add Defect vector) : %0.3lf ms"), pc.GetElapsedTime());

		//AllDefectOverlapCheck(vctDefectAllOne);

		/////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Electrode exposure NG , Real Defect Check....

		std::vector<SDefectInfo*> vctElectrode;
		std::vector<SDefectInfo*> vctOverKill;

		int nIter = 0;

//		pImg->Save(_T("C:\\Ravid\\Test0111.bmp"));
		// 3차 Filtering_Defect

		CRavidRect<double> rrDfOptionGV;
		//Left , Top 사용중.. 필요 시 Right, bottom 도 사용 가능.
		util.ConvertRectStringToRectStructure(m_strFDOptionGV, &rrDfOptionGV);

		if(!rrDfOptionGV.left && !rrDfOptionGV.top && !rrDfOptionGV.right && !rrDfOptionGV.bottom)
		{
			CLogManager::Write(0, _T("[Inspection] Problem Occurred Filtering Defect Parameter "));
			pII->cResult.SetStatus(CInspectionResult::EResultType_UnknownError, CInspectionResult::EStatus_NG);

			break;
		}



		for(auto iter = vctDefectAllOne.begin(); iter != vctDefectAllOne.end(); iter = vctDefectAllOne.begin() + nIter)
		{
		
			SDefectInfo* pDI = *iter;
			if(!pDI)
				continue;

			pDI->bElectorode = true;
			bool bOutArea = false;
			bool bRealDecfect = true;

			do
			{

				CMultipleVariable mv;

				CString strMsg1;

// 				double dblGV_B_sum = 0.f;
// 				double dblGV_G_sum = 0.f;
// 				double dblGV_R_sum = 0.f;
// 
// 				int nSumCount = 0;
// 				if(pDI->rrBoundary.left == 9193)
// 				{
// 					int kkkk = 0;
// 				}
// 				for(ptrdiff_t x = pDI->rrBoundary.left; x < pDI->rrBoundary.right; x++)
// 				{
// 					for(ptrdiff_t y = pDI->rrBoundary.top; y < pDI->rrBoundary.bottom; y++)
// 					{
// 						CRavidPoint<double> rp(x, y);
// 
// 						if(PointInCheck(rp, pDI->rpgContour))
// 						{
// 							BYTE nGV[3] = {0,};
// 							riColor.GetValue(x, y, &nGV[eColorImageType_B], &nGV[eColorImageType_G], &nGV[eColorImageType_R]);
// 
// 							pImageView->DrawShape(ELayer_Operator, &rp, LIME, 3);
// 					
// 
// 							dblGV_B_sum += nGV[eColorImageType_B];
// 							dblGV_G_sum += nGV[eColorImageType_G];
// 							dblGV_R_sum += nGV[eColorImageType_R];
// 							 
// 							nSumCount++;
// 						}
// 					}
// 				}
// 		
// 
// 				if(!nSumCount)
// 				{
// 					bElectrode = false;
// 					break;
// 				}
				if(pImg->IsColor())
				{
					riColor.GetMin(mv, &pDI->rpgContour);

					CRavidPoint<int> rppos;
					CString str;
					rppos.x = pDI->rrBoundary.right;
					rppos.y = pDI->rrBoundary.bottom;

					BYTE nValueR = rrDfOptionGV.left;//200;
					BYTE nValueG = rrDfOptionGV.top;//100;


					if(mv.GetAt(2) > nValueR) //R 값이 높으면 바깥이다.
					{
						strMsg1.Format(_T("Remove due to high R value"));
						bOutArea = true;
						pDI->bElectorode = false;
						break;

					}

					if(mv.GetAt(1) > nValueG) // G 값이 너무 높으면 불량이 아님.
					{
						strMsg1.Format(_T("Remove due to high G value"));
						bRealDecfect = false;

					}
					
					str.Format(_T("(GVs : %.3f, %.3f, %.3f _ )"), mv.GetAt(0), mv.GetAt(1), mv.GetAt(2));
					str += strMsg1;

					pImageView->DrawText(ELayer_Common, &rppos, str, WHITE, BLACK, 15);

					if(mv.GetAt(0) < m_nElectrodeGV[0] &&
					   mv.GetAt(1) < m_nElectrodeGV[1] &&
					   mv.GetAt(2) < m_nElectrodeGV[2])
						break;
// 
	
// 					if( mvMean.GetAt(1) > 110)
// 						bRealDecfect = false;
				}
				else
				{
					riMono.GetMin(mv, &pDI->rpgContour);
				


					CRavidPoint<int> rppos;
					CString str;
					rppos.x = pDI->rrBoundary.right;
					rppos.y = pDI->rrBoundary.bottom;

					BYTE nValueLow = rrDfOptionGV.left;//9;
					BYTE nValueHigh = rrDfOptionGV.top;//100;

					if(mv.GetAt(0) < nValueLow) // 너무 어두면 바깥이다.
					//if(IsGVcount(&riMono, pDI, true, nValueLow, 5))
					{

						if(pDI->dblWidth < 80)
						{
							strMsg1.Format(_T("Remove due to low GV value"));
							bOutArea = true;
							pDI->bElectorode = false;
							break;
						}

					}

					if(mv.GetAt(0) > nValueHigh) // 너무 밝으면 디펙이 아니다.
					{
						strMsg1.Format(_T("Remove due to high GV value"));
						bRealDecfect = false;

					}
					
					str.Format(_T("(GV : %.3f) _ "), mv.GetAt(0));
					str += strMsg1;

					pImageView->DrawText(ELayer_Common, &rppos, str, WHITE, BLACK, 15);


					if(mv.GetAt(0) < m_nElectrodeGV[0])
						break;

				}

				pDI->bElectorode = false;
			}
			while(false);

			if(pDI->bElectorode)
			{
				vctElectrode.push_back(*iter);
				vctDefectAllOne.erase(iter);

			}
			else if(!bRealDecfect || bOutArea)
			{			
				vctOverKill.push_back(*iter);
				vctDefectAllOne.erase(iter);	
			}
			else
				++nIter;
		}

		ClearDefectInfo(vctOverKill);


		CLogManager::Write(0, _T("[Inspection] Inspect elapsed time(4:Electrode) : %0.3lf ms"), pc.GetElapsedTime());

		/////////////////////////////////////////////////////////////////////////////////////////////////////////



		// 결과

		{
			std::vector<SDefectInfo*> vctDefectResult1;
			std::vector<SDefectInfo*> vctDefectResult2;
			std::vector<SCommunityDefectInfo> vctDefectResult3;

			bool bTotalNG = true;
			bool bNG[3] = { false, false, false };

			if(m_nDefectCondition1Operation)
			{
				bNG[0] = !JudgeDefectCondition1(R2P(m_dblDefectCondition1Size, dblAccuracy), vctDefectAllOne, vctDefectResult1);
				bTotalNG &= bNG[0];
			}

			if(m_nDefectCondition2Operation)
			{
				bNG[1] = !JudgeDefectCondition2(R2P(m_dblDefectCondition2Size, dblAccuracy), m_nDefectCondition2Count, vctDefectAllOne, vctDefectResult2);
				bTotalNG &= bNG[1];
			}

			if(m_nDefectCondition3Operation)
			{
				bNG[2] = !JudgeDefectCondition3(R2P(m_dblDefectCondition3Size, dblAccuracy), m_nDefectCondition3Count, R2P(m_dblDefectCondition3Distance, dblAccuracy), vctDefectAllOne, vctDefectResult3);
				bTotalNG &= bNG[2];
			}

			if(m_nDefectCondition1Operation == 1)
				bTotalNG |= bNG[0];

			if(m_nDefectCondition2Operation == 1)
				bTotalNG |= bNG[1];

			if(m_nDefectCondition3Operation == 1)
				bTotalNG |= bNG[2];


			if(!bTotalNG)
			{

				for(auto& iter : vctDefectResult3)
				{
					pImageView->DrawShape(ELayer_Operator, &iter.rrCommunity, PALEVIOLETRED);
					DrawDefect(pImageView, iter.vctDefect, PALEVIOLETRED, dblAccuracy, pII->vctDefectResult);
				}

				DrawDefect(pImageView, vctDefectResult2, DARKRED, dblAccuracy, pII->vctDefectResult);
				DrawDefect(pImageView, vctDefectResult1, LIGHTRED, dblAccuracy, pII->vctDefectResult);

				if(vctDefectResult1.size() || vctDefectResult2.size() || vctDefectResult3.size())
				{
					pII->cResult.SetStatus(CInspectionResult::EResultType_Defect, CInspectionResult::EStatus_NG);
				}

			}


			std::vector<SDefectInfo*> vctElectrodeResult;
			JudgeDefectCondition1(R2P(m_dblElectroadSize, dblAccuracy), vctElectrode, vctElectrodeResult);

			DrawDefect(pImageView, vctElectrodeResult, ORANGE, dblAccuracy, pII->vctDefectResult);

			if(vctElectrodeResult.size())
			{
				pII->cResult.SetStatus(CInspectionResult::EResultType_Electrode, CInspectionResult::EStatus_NG);
			}

			// JSon
			if(true) 
			{		 
				CRavidPoint<double> rpPositionStart = vctNonTaperAreas[0].rqdAll.rpPoints[0];
				CRavidLine<double> rlPositionAngle(vctNonTaperAreas[0].rqdAll.rpPoints[0], vctNonTaperAreas[5].rqdAll.rpPoints[1]);


				double dblAngleMaster = rlPositionAngle.rpPoints[0].GetAngle(rlPositionAngle.rpPoints[1]);


				for(auto iter = pII->vctDefectResult.begin(); iter != pII->vctDefectResult.end(); iter++)
				{
					iter->rpCriteria = rpPositionStart;
					iter->dblRelative_R = iter->rqd.GetCenter().GetDistance(rpPositionStart);
					iter->dblRelative_Angle = fabs(dblAngleMaster - (rpPositionStart.GetAngle(iter->rqd.GetCenter())));

					if(iter->bOuntSidePos)
						iter->eDefectCode = ESPCDefectCode_FADF;
					else
						iter->eDefectCode = ESPCDefectCode_TADF;

					if(!iter->bElectrode)
						iter->eDefectCode = ESPCDefectCode_EADF;


					iter->strName = pII->cResult.GetResultName();
				}

			}


			ClearDefectInfo(vctDefectAllOne);
			ClearDefectInfo(vctElectrode);
		}

		if(pII->cResult.GetResultType() == CInspectionResult::EResultType_OK)
			pII->cResult.Reset();

		bReturn = true;

	}
	while(false);

	COLORREF clrResult = LIGHTGREEN;
	CString strResult = _T("O K");


	if(pII->cResult.GetResultType() == CInspectionResult::EResultType_OK)
	{
		clrResult = LIGHTGREEN;
		strResult.Format(_T("O K"));
	}
	else if(pII->cResult.GetResultType() == CInspectionResult::EResultType_Empty)
	{
		clrResult = pII->cResult.GetResultColor();
		strResult.Format(_T("Empty"));
	}
	else if(pII->cResult.GetResultType() == CInspectionResult::EResultType_Align)
	{
		clrResult = pII->cResult.GetResultColor();
		strResult.Format(_T("Align NG"));
	}
	// 	else if(pII->cResult.GetResultType() == CInspectionResult::EResultType_UnkwnError)
	// 	{
	// 		clrResult = pII->cResult.GetResultColor();
	// 		strResult.Format(_T("Error"));
	// 	}
	else
	{
		clrResult = LIGHTRED;
		strResult.Format(_T("N G [%s]"), pII->cResult.GetResultName());

// 		clrResult = LIGHTGREEN;
// 		strResult.Format(_T("-"));
	}

	if(sParam.nPassOtion_Defect)
	{
		clrResult = LIGHTGREEN;
		strResult.Format(_T("Pass mode on"));

		pII->cResult.Reset();
	}


	CRavidPoint<double> rpResult(12000, 100);

	pImageView->DrawText(ELayer_Operator, &rpResult, strResult, clrResult, BLACK, 30);
	pImageView->DrawingLayer();

	CLogManager::Write(0, _T("[Defect] %d- Inspect elapsed time : %0.3lf ms"), nChannel, pc.GetElapsedTime());

	//pImageView->DrawingLayer();

	return bReturn;
}

bool CInspection::InspectionMeasure(int nChannel, SInspectionInfo * pII, std::vector<SMeasurementKind> vct, CImageCameraView* pImageView)
{
	bool bReturn = false;

	if(!pII)
		return false;

//	CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView((long)nChannel));
	if(!pImageView)
		return false;

	CEventHandlerMain* pEHEV = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));

	if(!pEHEV)
		return false;


	SdefaultModelParam sParam = pEHEV->GetModelParameters();

	LoadInspectionParameter(nChannel, sParam);

	CPerformanceCounter pc;
	pc.Start();

	double dblAccuracy = pImageView->GetAccuracyX();

	//pImageView->ClearLayerDrawingObject();

	do 
	{
		std::vector<CRavidImage*> vctImg;

		for(auto& iter : pII->vctImg)
		{
			vctImg.push_back(iter->pImage);
		}

		if(!vctImg.size())
			break;


		CRavidImage* pImg = vctImg.at(0);
		if(!pImg)
			break;
		
		// initialize
		sCellAlignData ss;
		m_sAlignData = ss;

		CRavidQuadrangle<double> rqCellArea;

		if(!FindCellArea(pImg, nChannel, rqCellArea))
		{
			CLogManager::Write(0, _T("[Measurement] Not Found Cell"));
			pII->cResult.SetStatus(CInspectionResult::EResultType_Align, CInspectionResult::EStatus_NG);
			break;
		}
		//pImageView->DrawShape(ELayer_Developer, &rqCellArea, LIGHTCYAN);
		m_sAlignData.rpCenter = rqCellArea.GetCenter();
		m_sAlignData.bResult = true;
		m_sAlignData.ECameraType = (ECameraNum)nChannel;
		CRavidLine<double> rl(rqCellArea.rpPoints[0], rqCellArea.rpPoints[1]);
		m_sAlignData.dblAngle = rl.GetAngle();

	
		for(SMeasurementKind sData : vct)
		{
			if(!sData.bUse)
				continue;

			SMeasuredData sResult;

			sResult = GetMeasurement(pImg, pImageView, sData);



			if(!sResult.bResult)
				pII->cResult.SetStatus(CInspectionResult::EResultType_Measurement, CInspectionResult::EStatus_NG);

			pII->vctMeasureResult.push_back(sResult);
		}

		if(pII->cResult.GetResultType() == CInspectionResult::EResultType_OK)
			pII->cResult.Reset();


	} while (false);

	COLORREF clrResult = LIGHTGREEN;
	CString strResult = _T("O K");


	if(pII->cResult.GetResultType() == CInspectionResult::EResultType_OK)
	{
		clrResult = LIGHTGREEN;
		strResult.Format(_T("O K"));
	}
	else if(pII->cResult.GetResultType() == CInspectionResult::EResultType_Empty)
	{
		clrResult = pII->cResult.GetResultColor();
		strResult.Format(_T("Empty"));
	}
	else if(pII->cResult.GetResultType() == CInspectionResult::EResultType_Align)
	{
		clrResult = pII->cResult.GetResultColor();
		strResult.Format(_T("Align NG"));
	}
	else
	{
		clrResult = LIGHTRED;
		strResult.Format(_T("N G [%s]"), pII->cResult.GetResultName());

// 		clrResult = LIGHTGREEN;
// 		strResult.Format(_T("-"));
	}

	if(sParam.nPassOtion_measurement)
	{
		clrResult = LIGHTGREEN;
		strResult.Format(_T("Pass mode on"));

		pII->cResult.Reset();
	}



	CRavidPoint<double> rpResult(100, 100);

	pImageView->DrawText(ELayer_Operator, &rpResult, strResult, clrResult, BLACK, 30);
	pImageView->DrawingLayer();

	CLogManager::Write(0, _T("[Measurement] Inspect elapsed time : %0.3lf ms"), pc.GetElapsedTime());


	return bReturn;
}

void CInspection::ThreadfucFindDefect(int nIndex, CRavidImage * pImage, CRavidQuadrangle<double> rqdInsArea)
{
	CPerformanceCounter pcIn;
	pcIn.Start();
	CRavidQuadrangle<double> rqd = rqdInsArea;

	CRavidImage riThreshold(pImage);
	Threshold(&riThreshold, nIndex == eDefectColor_Black ? ELogicalCondition_Less : ELogicalCondition_Greater, m_cDefectAbsGV[nIndex], m_nDefectBlockSize[nIndex], m_nDefectConstant[nIndex], &rqd);

	std::vector<SDefectInfo*> vctDefectTemp;
	std::vector<SDefectInfo*> vctDefectTempCluster;

	DefectConnectedComponent(&riThreshold, pImage, 128, ELogicalCondition_GreaterEqual, 0, vctDefectTemp, vctDefectTempCluster, &rqd, 5.f, 5.f, true);

	m_cs.Lock();
	std::copy(vctDefectTemp.begin(), vctDefectTemp.end(), std::back_inserter(m_vctDefectAll[nIndex]));
	std::copy(vctDefectTempCluster.begin(), vctDefectTempCluster.end(), std::back_inserter(m_vctDefectCluster[nIndex]));
	m_cs.Unlock();
}

void CInspection::ThreadfucFindDefect(int nCh, int nThreadNum, int nColorNum, CRavidImage* pImage, SFindAreaInfo sAreaInfo, CRavidImage* pImageColor)
{
	CPerformanceCounter pcIn;
	pcIn.Start();

	CRavidImage riThreshold(pImage);
	Threshold(&riThreshold, nColorNum == eDefectColor_Black ? ELogicalCondition_Less : ELogicalCondition_Greater, m_cDefectAbsGV[nColorNum], m_nDefectBlockSize[nColorNum], m_nDefectConstant[nColorNum], &sAreaInfo.rqg);


	// 2차 Filtering_Defect
	Mask_Corner(nThreadNum,&riThreshold, sAreaInfo);


	std::vector<SDefectInfo*> vctDefectTemp;
	std::vector<SDefectInfo*> vctDefectTempCluster;

	if(nCh)
		DefectConnectedComponent(nThreadNum, &riThreshold, pImage, 128, ELogicalCondition_GreaterEqual, 0, vctDefectTemp, vctDefectTempCluster, sAreaInfo, 3, 3, true);
	else
		DefectConnectedComponent(nThreadNum, &riThreshold, pImageColor, 128, ELogicalCondition_GreaterEqual, 0, vctDefectTemp, vctDefectTempCluster, sAreaInfo, 3, 3, true);

	m_cs.Lock();
	std::copy(vctDefectTemp.begin(), vctDefectTemp.end(), std::back_inserter(m_vctDefectAll[nColorNum]));
	std::copy(vctDefectTempCluster.begin(), vctDefectTempCluster.end(), std::back_inserter(m_vctDefectCluster[nColorNum]));
	m_cs.Unlock();
}

void CInspection::LoadInspectionParameter(int nChannel, SdefaultModelParam sParam)
{
	if(nChannel == 0)
	{
		for(int i = 0; i < eDefectColor_count; i++)
		{
			m_nDefectUse[i] = sParam.nLeftUse[i];
			m_strDefectRegionOffset[i] = sParam.strLeftRegionOffset[i];
			m_cDefectAbsGV[i] = sParam.cLeftAbsGV[i];
			m_nDefectBlockSize[i] = sParam.nLeftBlockSize[i];
			m_nDefectConstant[i]= sParam.nLeftConstant[i];


		}

		m_nClusterUse = sParam.nLeftClusterUse;
		m_dblClusterCandidateSize = sParam.dblLeftClusterCandidateSize;
		m_dblClusterInflateOffset = sParam.dblLeftClusterInflateOffset;
		
		m_nDefectCondition1Operation = sParam.nLeftDefectCondition1Operation;
		m_dblDefectCondition1Size = sParam.dblLeftDefectCondition1Size;
		
		m_nDefectCondition2Operation = sParam.nLeftDefectCondition2Operation;
		m_dblDefectCondition2Size = sParam.dblLeftDefectCondition2Size;
		m_nDefectCondition2Count = sParam.nLeftDefectCondition2Count;
		
		m_nDefectCondition3Operation = sParam.nLeftDefectCondition3Operation;
		m_dblDefectCondition3Size = sParam.dblLeftDefectCondition3Size;
		m_nDefectCondition3Count = sParam.nLeftDefectCondition3Count;
		m_dblDefectCondition3Distance = sParam.dblLeftDefectCondition3Distance;
		
		m_nElectrodeGV[0] = sParam.dblLeftElectrodeGV[0];
		m_nElectrodeGV[1] = sParam.dblLeftElectrodeGV[1];
		m_nElectrodeGV[2] = sParam.dblLeftElectrodeGV[2];

		m_dblElectroadSize = sParam.dblLeftElectrodeSize;


		m_nSuburbAreaLimit = sParam.nUppSuburbAreaLimit;
		m_nSuburbAreaGV = sParam.nUppSuburbAreaGV;
		m_nCreaseAreaLimit = sParam.nUppCreaseAreaLimit;
		m_dblCreaseRatio = sParam.dblUppCreaseRatio;

		//Filtering_Defect Option
		m_strFDOptionGV = sParam.strUppFDOptionGV;
	
	}
	else
	{
		for(int i = 0; i < eDefectColor_count; i++)
		{
			m_nDefectUse[i] = sParam.nRightUse[i];
			m_strDefectRegionOffset[i] = sParam.strRightRegionOffset[i];
			m_cDefectAbsGV[i] = sParam.cRightAbsGV[i];
			m_nDefectBlockSize[i] = sParam.nRightBlockSize[i];
			m_nDefectConstant[i] = sParam.nRightConstant[i];
		}

		m_nClusterUse = sParam.nRightClusterUse;
		m_dblClusterCandidateSize = sParam.dblRightClusterCandidateSize;
		m_dblClusterInflateOffset = sParam.dblRightClusterInflateOffset;

		m_nDefectCondition1Operation = sParam.nRightDefectCondition1Operation;
		m_dblDefectCondition1Size = sParam.dblRightDefectCondition1Size;

		m_nDefectCondition2Operation = sParam.nRightDefectCondition2Operation;
		m_dblDefectCondition2Size = sParam.dblRightDefectCondition2Size;
		m_nDefectCondition2Count = sParam.nRightDefectCondition2Count;

		m_nDefectCondition3Operation = sParam.nRightDefectCondition3Operation;
		m_dblDefectCondition3Size = sParam.dblRightDefectCondition3Size;
		m_nDefectCondition3Count = sParam.nRightDefectCondition3Count;
		m_dblDefectCondition3Distance = sParam.dblRightDefectCondition3Distance;

		m_nElectrodeGV[0] = sParam.dblRightElectrodeGV;
		m_nElectrodeGV[1] = sParam.dblRightElectrodeGV;
		m_nElectrodeGV[2] = sParam.dblRightElectrodeGV;

		m_dblElectroadSize = sParam.dblRighElectrodeSize;

		m_nSuburbAreaLimit = sParam.nLowSuburbAreaLimit;
		m_nSuburbAreaGV = sParam.nLowSuburbAreaGV;
		m_nCreaseAreaLimit = sParam.nLowCreaseAreaLimit;
		m_dblCreaseRatio = sParam.dblLowCreaseRatio;

		//Filtering_Defect Option
		m_strFDOptionGV = sParam.strLowFDOptionGV;
	}

}


CRavidQuadrangle<double> CInspection::InflateQuadrangle(CRavidQuadrangle<double>& rqBase, double dblLeft, double dblTop, double dblRight, double dblBottom)
{
	CRavidQuadrangle<double> rqReturn(rqBase);

	CRavidPoint<double> rpUV = rqBase.rpPoints[0].GetUnitVector(rqBase.rpPoints[1]);

	rqReturn.rpPoints[0].x += rpUV.x * -dblLeft;
	rqReturn.rpPoints[0].y += rpUV.y * -dblLeft;

	rqReturn.rpPoints[1].x += rpUV.x * dblRight;
	rqReturn.rpPoints[1].y += rpUV.y * dblRight;

	rpUV = rqBase.rpPoints[1].GetUnitVector(rqBase.rpPoints[2]);

	rqReturn.rpPoints[1].x += rpUV.x * -dblTop;
	rqReturn.rpPoints[1].y += rpUV.y * -dblTop;

	rqReturn.rpPoints[2].x += rpUV.x * dblBottom;
	rqReturn.rpPoints[2].y += rpUV.y * dblBottom;

	rpUV = rqBase.rpPoints[3].GetUnitVector(rqBase.rpPoints[2]);

	rqReturn.rpPoints[3].x += rpUV.x * -dblLeft;
	rqReturn.rpPoints[3].y += rpUV.y * -dblLeft;

	rqReturn.rpPoints[2].x += rpUV.x * dblRight;
	rqReturn.rpPoints[2].y += rpUV.y * dblRight;

	rpUV = rqBase.rpPoints[0].GetUnitVector(rqBase.rpPoints[3]);

	rqReturn.rpPoints[0].x += rpUV.x * -dblTop;
	rqReturn.rpPoints[0].y += rpUV.y * -dblTop;

	rqReturn.rpPoints[3].x += rpUV.x * dblBottom;
	rqReturn.rpPoints[3].y += rpUV.y * dblBottom;

	return rqReturn;
}

CRavidQuadrangle<double> CInspection::MakeQuadrangle(CRavidLine<double>* pRL)
{
	CRavidQuadrangle<double> rqReturn;

	do 
	{
		if(!pRL)
			break;

		CRavidLine<double> rlInf[4];

		for(int i = 0; i < 4; ++i)
			rlInf[i] = pRL[i].GetInfiniteLine();

		for(int i = 0; i < 4; ++i)
		{
			int nNearstIdx = (i + 1) % 4;

			rqReturn.rpPoints[i] = rlInf[i].GetIntersection(rlInf[nNearstIdx]);
		}
	}
	while(false);

	return rqReturn;
}

bool CInspection::InflatePolygon(CRavidPolygon & rpg, double dblWidth, double dblHeight)
{
	bool bReturn = false;

	do 
	{
		if(!rpg.GetCount())
			break;

		bool bError = false;

		std::vector<CRavidPoint<double> > vctPoints;

		for(size_t i = 0; i < rpg.GetCount(); ++i)
		{
			CRavidPoint<double>* pRP = dynamic_cast<CRavidPoint<double>*>(rpg.GetAt((int)i));
			if(!pRP)
			{
				bError = true;
				break;
			}

			vctPoints.push_back(*pRP);
		}

		if(bError)
			break;

		std::vector<CRavidLine<double> > vctLines;

		CRavidPoint<double> rpNV;

		for(int i = 0; i < (int)vctPoints.size(); ++i)
		{
			int nNearstIdx = (i + 1) % (int)vctPoints.size();

			CRavidPoint<double> rp1 = vctPoints.at(i);
			CRavidPoint<double> rp2 = vctPoints.at(nNearstIdx);

			rpNV = rp1.GetNormalVector(rp2);

			CRavidLine<double> rl(rp1, rp2);

			rl.rpPoints[0].x += rpNV.x * dblWidth;
			rl.rpPoints[0].y += rpNV.y * dblHeight;

			rl.rpPoints[1].x += rpNV.x * dblWidth;
			rl.rpPoints[1].y += rpNV.y * dblHeight;

			vctLines.push_back(rl);
		}

		rpg.Clear();

		for(int i = 0; i < (int)vctLines.size(); ++i)
		{
			int nNearstIdx = (i + (int)vctLines.size() - 1) % (int)vctLines.size();

			CRavidLine<double> rl1 = vctLines.at(nNearstIdx).GetInfiniteLine();
			CRavidLine<double> rl2 = vctLines.at(i).GetInfiniteLine();

			rpg.Add(rl1.GetIntersection(rl2));
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

std::vector<CRavidQuadrangle<double>> CInspection::MakefourQuadrangle(CRavidQuadrangle<double>& rqBase)
{
	std::vector<CRavidQuadrangle<double>> vecReturn;

	// It makes four quadrangle
	do
	{
		if(!rqBase.IsShapeValid())
		{
			vecReturn.push_back(rqBase);
			break;
		}


		CRavidLine<double> rl;
		double dblDistance = rqBase.rpPoints[0].GetDistance(rqBase.rpPoints[1]);
		rl.SetLine(rqBase.rpPoints[0], rqBase.rpPoints[1]);
		CRavidPoint<double> rp0To1Center = rqBase.rpPoints[0] + rl.GetUnitVector() * (dblDistance / 2.f);


		dblDistance = rqBase.rpPoints[1].GetDistance(rqBase.rpPoints[2]);
		rl.SetLine(rqBase.rpPoints[1], rqBase.rpPoints[2]);
		CRavidPoint<double> rp1To2Center = rqBase.rpPoints[1] + rl.GetUnitVector() * (dblDistance / 2.f);


		dblDistance = rqBase.rpPoints[0].GetDistance(rqBase.rpPoints[3]);
		rl.SetLine(rqBase.rpPoints[0], rqBase.rpPoints[3]);
		CRavidPoint<double> rp0To3Center = rqBase.rpPoints[0] + rl.GetUnitVector() * (dblDistance / 2.f);

		dblDistance = rqBase.rpPoints[3].GetDistance(rqBase.rpPoints[2]);
		rl.SetLine(rqBase.rpPoints[3], rqBase.rpPoints[2]);
		CRavidPoint<double> rp3To2Center = rqBase.rpPoints[3] + rl.GetUnitVector() * (dblDistance / 2.f);

		CRavidLine<double> rl0312(rp0To3Center, rp1To2Center);
		CRavidLine<double> rl0132(rp0To1Center, rp3To2Center);

		CRavidPoint<double> rp0123Center = rl0312.GetIntersection(rl0132);

		CRavidQuadrangle<double> rqdTong;
		rqdTong.rpPoints[0] = rqBase.rpPoints[0];
		rqdTong.rpPoints[1] = rp0To1Center;
		rqdTong.rpPoints[2] = rp0123Center;
		rqdTong.rpPoints[3] = rp0To3Center;
		vecReturn.push_back(rqdTong);

		rqdTong.rpPoints[0] = rp0To1Center;
		rqdTong.rpPoints[1] = rqBase.rpPoints[1];
		rqdTong.rpPoints[2] = rp1To2Center;
		rqdTong.rpPoints[3] = rp0123Center;
		vecReturn.push_back(rqdTong);

		rqdTong.rpPoints[0] = rp0123Center;
		rqdTong.rpPoints[1] = rp1To2Center;
		rqdTong.rpPoints[2] = rqBase.rpPoints[2];
		rqdTong.rpPoints[3] = rp3To2Center;
		vecReturn.push_back(rqdTong);

		rqdTong.rpPoints[0] = rp0To3Center;
		rqdTong.rpPoints[1] = rp0123Center;
		rqdTong.rpPoints[2] = rp3To2Center;
		rqdTong.rpPoints[3] = rqBase.rpPoints[3];
		vecReturn.push_back(rqdTong);

	}
	while(false);

	return vecReturn;
}
bool CInspection::GetIntersectionRegion(CRavidGeometry * pRG1, CRavidGeometry * pRG2, CRavidPolygon* pRPGResult)
{
	bool bReturn = false;

	do 
	{
		if(!pRG1)
			break;

		if(!pRG2)
			break;

		if(!pRPGResult)
			break;

		CRavidGeometryArray rgaInter;
		pRG1->GetIntersectionRegion(pRG2, &rgaInter);
		if(!rgaInter.GetCount())
			break;

		for(size_t i = 0; i < rgaInter.GetCount(); ++i)
		{
			CRavidGeometry* pRG = rgaInter.GetAt((int)i);
			if(!pRG)
				continue;

			CRavidPolygon* pRPG = dynamic_cast<CRavidPolygon*>(pRG);
			if(!pRPG)
				break;

			*pRPGResult = *pRPG;
			bReturn = true;
			break;
		}
	}
	while(false);

	return bReturn;
}

bool CInspection::Threshold(CRavidImage* pImage, ELogicalCondition eLC, BYTE cGV, int nBlockSize, int nConstant, CRavidGeometry* pROI)
{
	bool bReturn = false;

	do 
	{
		if(!pImage)
			break;

		if(!pROI)
			break;

		CRavidImage riAdp(pImage);

		CRavidRect<int> rrROI;
		pROI->GetRect(&rrROI);
		rrROI.Inflate(1, 1, 1, 1); // 임의 확장 

		rrROI.left = __max(rrROI.left, 0);
		rrROI.top = __max(rrROI.top, 0);
		rrROI.right = __min(rrROI.right, (int)pImage->GetSizeX() - 1);
		rrROI.bottom = __min(rrROI.bottom, (int)pImage->GetSizeY() - 1);

// 		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView((long)0));
// 		if(!pImageView)
// 			return false;
// 
//  	pImageView->DrawShape(ELayer_Operator, &rrROI, GOLD, 1);


		if(!(nBlockSize % 2))
			nBlockSize++;

// 		CMultipleVariable mvMean;
// 		riAdp.GetMean(mvMean, pROI);
// 
// 		if(mvMean.GetSize() < 1)
// 			break;


		CRavidImage::EAdaptiveThresholdType eType = CRavidImage::EAdaptiveThresholdType_Binary_Inv;
		if(nConstant < 0)
			eType = CRavidImage::EAdaptiveThresholdType_Binary;

		CRavidImage::EAdaptiveThresholdMethod eMethod = CRavidImage::EAdaptiveThresholdMethod_Mean;
		CMultipleVariable rmvMaxValue = 255;
		CMultipleVariable rmvConstant = nConstant;

		CPerformanceCounter pcIn;
		pcIn.Start();
		//riAdp
		// Otsu Threshold 를 이용하여, 박스영역마다 Threshold 값을 뽑아보면?
		riAdp.AdaptiveThreshold(eType, eMethod, rmvMaxValue, nBlockSize, rmvConstant, &rrROI);



//		CLogManager::Write(0, _T(" AdaptiveThreshold  : %0.3lf ms"), pcIn.GetElapsedTime());
//		riAdp.Save(_T("C:\\Ravid\\Adp1.bmp"));

		CMultipleVariable mvThreshold;
		CMultipleCondition mcCondition;
		CMultipleVariable mvRangeFillValue;
		CMultipleVariable mvOutOfRangeFillValue;

		mvThreshold.AddValue(cGV);
		mcCondition.AddValue(eLC);
		mvRangeFillValue.AddValue(255.000);
		mvOutOfRangeFillValue.AddValue(0.000);

// 파라미터의 GV 값으로 Threshold 하여 AdaptiveThreshold 한 이미지와 OR 시켜 준다. 
    	pImage->SingleThreshold(mvThreshold, mcCondition, mvRangeFillValue, mvOutOfRangeFillValue, &rrROI);

//		CLogManager::Write(0, _T(" SingleThreshold  : %0.3lf ms"), pcIn.GetElapsedTime());
//		pImage->Save(_T("C:\\Ravid\\SingleThreshold.bmp"));

		CImageOperationInfo ioi;
		ioi.SetDataType(CImageOperationInfo::EDataType_Image);
		ioi.SetOperationType(CImageOperationInfo::EOperationType_LogicalOR);
		ioi.SetImage(&riAdp);

		pImage->Operation(&ioi);

//		CLogManager::Write(0, _T(" Operation All End : %0.3lf ms"), pcIn.GetElapsedTime());
//		pImage->Save(_T("C:\\Ravid\\Operation.bmp"));


		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::DefectConnectedComponent(CRavidImage * pImage, CRavidImage * pImageOrg, BYTE cGV, ELogicalCondition eLC, int nIndex, std::vector<SDefectInfo*>& vctResult, _In_ _Out_ std::vector<SDefectInfo*>& vctClusterREsult, CRavidQuadrangle<double> rqdArea, double dblMinWidth, double dblMinHeight, bool bIsBlack)
{
	bool bReturn = false;

	do
	{
		CPerformanceCounter pcIn;


		if(!pImage)
			break;

		if(!pImageOrg)
			break;

		CRavidRect<int> rrROI;
		rqdArea.GetRect(&rrROI);
		rrROI.Deflate(1, 1, 1, 1); // 임의 축소 

		pcIn.Start();
		CConnectedComponent cc;

		cc.SetSingleThreshold(cGV);
		cc.SetLogicalCondition(eLC);

		if(cc.Encode(pImage, &rqdArea) != EAlgorithmResult_OK)
			break;

//		CLogManager::Write(0, _T(" [%d] DefectConnectedComponent 1 : %0.3lf ms"),nIndex , pcIn.GetElapsedTime());

		double dblCellValue0 = dblMinWidth;
		cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxWidth, dblCellValue0, ELogicalCondition_Less);
		double dblCellValue1 = dblMinHeight;
		cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxHeight, dblCellValue1, ELogicalCondition_Less);

		//CRavidGeometryArray rgaContour;
		//cc.GetContour(rgaContour);
		int nLoopCount = (int)cc.GetBoundaryPtr()->size();

		std::vector<CRavidPolygonEx> rgaContour;
		int nCount = (int)nLoopCount;
		rgaContour.resize(nCount);
		for(int i = 0; i < nCount; i++)
			rgaContour[i].AddArray(&cc.GetContourPtr()->at(i));


	//	CLogManager::Write(0, _T(" [%d] DefectConnectedComponent 2 : %0.3lf ms"), nIndex, pcIn.GetElapsedTime());

		std::vector<CRavidQuadrangle<double>> vctECR;
		vctECR.reserve(nLoopCount);
		cc.GetMinimumEnclosingRectangle(vctECR);

	//	CLogManager::Write(0, _T(" [%d] DefectConnectedComponent 3 : %0.3lf ms"), nIndex, pcIn.GetElapsedTime());

		std::vector<CRavidLine<double>> vctFeretMax, vctFeretMin;
		vctFeretMax.reserve(nLoopCount);
		vctFeretMin.reserve(nLoopCount);
		cc.GetFeret(vctFeretMax, vctFeretMin);

	//	CLogManager::Write(0, _T(" [%d] DefectConnectedComponent 4 : %0.3lf ms"), nIndex, pcIn.GetElapsedTime());

		nLoopCount = __min(nLoopCount, (int)vctFeretMin.size());
	//	nLoopCount = __min(nLoopCount, (int)rgaContour.GetCount());
		nLoopCount = __min(nLoopCount, (int)vctECR.size());

		vctResult.reserve(nLoopCount);
	
		for(int i = 0; i < nLoopCount; ++i)
		{
			SDefectInfo* sDI = new SDefectInfo;
			if(!sDI)
				continue;

			sDI->nIndex = nIndex;
			sDI->rrBoundary = vctECR.at(i).GetRect();
			sDI->dblWidth = vctFeretMax.at(i).GetScalar();
			sDI->dblHeight = vctFeretMin.at(i).GetScalar();
			sDI->rlFeret = vctFeretMax.at(i);

			sDI->rqMECR = vctECR.at(i);

// 			CRavidPolygon* pRPG = dynamic_cast<CRavidPolygon*>(rgaContour.GetAt(i));
// 			if(pRPG)
// 				sDI->rpgContour = *pRPG;

			sDI->rpgContour = rgaContour.at(i);


			CRavidRect<int> rr(sDI->rrBoundary);
			rr.left = __max(rr.left, 0);
			rr.top = __max(rr.top, 0);
			rr.right = __min(rr.right, (int)pImage->GetSizeX() - 1);
			rr.bottom = __min(rr.bottom, (int)pImage->GetSizeY() - 1);

// 			// Roi에 걸려있고, GV 값이 높으면 버린다. rrROI
// 			if(IsOverKill(pImageOrg, rrROI, sDI->rpgContour))
// 				continue;
		
			if(CheckBoxIsOverROI(rrROI, rr))
			{
				if(sDI)
					vctClusterREsult.push_back(sDI);
			}
			else
			{
				if(sDI)
					vctResult.push_back(sDI);
			}


		}


	//	CLogManager::Write(0, _T(" [%d] DefectConnectedComponent End : %0.3lf ms"), nIndex, pcIn.GetElapsedTime());

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::DefectConnectedComponent(int nAreaNum, CRavidImage * pImage, CRavidImage * pImageOrg, BYTE cGV, ELogicalCondition eLC, int nIndex, std::vector<SDefectInfo*>& vctResult, std::vector<SDefectInfo*>& vctClusterREsult, SFindAreaInfo sAreaInfo, double dblMinWidth, double dblMinHeight, bool bIsBlack)
{
	bool bReturn = false;

	do
	{
		CPerformanceCounter pcIn;


		if(!pImage)
			break;

		if(!pImageOrg)
			break;

// 		CRavidRect<int> rrROI;
// 		pROI->GetRect(&rrROI);
// 		rrROI.Deflate(1, 1, 1, 1); // 임의 축소 

		pcIn.Start();
		CConnectedComponent cc;

		cc.SetSingleThreshold(cGV);
		cc.SetLogicalCondition(eLC);

		if(cc.Encode(pImage, &sAreaInfo.rqg) != EAlgorithmResult_OK)
			break;

//		CLogManager::Write(0, _T(" [%d] DefectConnectedComponent 1 : %0.3lf ms"),nIndex , pcIn.GetElapsedTime());

		double dblCellValue0 = dblMinWidth;
		cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxWidth, dblCellValue0, ELogicalCondition_Less);
		double dblCellValue1 = dblMinHeight;
		cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxHeight, dblCellValue1, ELogicalCondition_Less);

		//CRavidGeometryArray rgaContour;
		//cc.GetContour(rgaContour);
		int nLoopCount = (int)cc.GetBoundaryPtr()->size();

		std::vector<CRavidPolygonEx> rgaContour;
		int nCount = (int)nLoopCount;
		rgaContour.resize(nCount);
		for(int i = 0; i < nCount; i++)
			rgaContour[i].AddArray(&cc.GetContourPtr()->at(i));


	//	CLogManager::Write(0, _T(" [%d] DefectConnectedComponent 2 : %0.3lf ms"), nIndex, pcIn.GetElapsedTime());

		std::vector<CRavidQuadrangle<double>> vctECR;
		vctECR.reserve(nLoopCount);
		cc.GetMinimumEnclosingRectangle(vctECR);

	//	CLogManager::Write(0, _T(" [%d] DefectConnectedComponent 3 : %0.3lf ms"), nIndex, pcIn.GetElapsedTime());

		std::vector<CRavidLine<double>> vctFeretMax, vctFeretMin;
		vctFeretMax.reserve(nLoopCount);
		vctFeretMin.reserve(nLoopCount);
		cc.GetFeret(vctFeretMax, vctFeretMin);

	//	CLogManager::Write(0, _T(" [%d] DefectConnectedComponent 4 : %0.3lf ms"), nIndex, pcIn.GetElapsedTime());

		nLoopCount = __min(nLoopCount, (int)vctFeretMin.size());
	//	nLoopCount = __min(nLoopCount, (int)rgaContour.GetCount());
		nLoopCount = __min(nLoopCount, (int)vctECR.size());

		vctResult.reserve(nLoopCount);

		for(int i = 0; i < nLoopCount; ++i)
		{
			SDefectInfo* sDI = new SDefectInfo;
			if(!sDI)
				continue;

			sDI->nIndex = nIndex;
			sDI->rrBoundary = vctECR.at(i).GetRect();
			sDI->dblWidth = vctFeretMax.at(i).GetScalar();
			sDI->dblHeight = vctFeretMin.at(i).GetScalar();
			sDI->rlFeret = vctFeretMax.at(i);

			sDI->rqMECR = vctECR.at(i);

// 			CRavidPolygon* pRPG = dynamic_cast<CRavidPolygon*>(rgaContour.GetAt(i));
// 			if(pRPG)
// 				sDI->rpgContour = *pRPG;

			sDI->rpgContour = rgaContour.at(i);


			CRavidRect<int> rr(sDI->rrBoundary);
			rr.left = __max(rr.left, 0);
			rr.top = __max(rr.top, 0);
			rr.right = __min(rr.right, (int)pImage->GetSizeX() - 1);
			rr.bottom = __min(rr.bottom, (int)pImage->GetSizeY() - 1);


			// 1차 Filtering_Defect

			// Roi에 걸려있고, GV 값이 높으면 버린다. rrROI
			if(IsOverKill(nAreaNum, pImageOrg, sAreaInfo, sDI))
			{
				delete sDI;
				sDI = nullptr;

				continue;
			}

// 			if(CheckBoxIsOverROI(rrROI, rr))
// 			{
// 				if(sDI)
// 					vctClusterREsult.push_back(sDI);
// 			}
// 			else
			{
				if(sDI)
					vctResult.push_back(sDI);
			}
		}


	//	CLogManager::Write(0, _T(" [%d] DefectConnectedComponent End : %0.3lf ms"), nIndex, pcIn.GetElapsedTime());

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::ClearDefectInfo(std::vector<SDefectInfo*>& vctDefectInfo)
{
	for(auto& iter : vctDefectInfo)
	{
		if(!iter)
			continue;

		delete iter;
		iter = nullptr;
	}

	vctDefectInfo.clear();

	return true;
}

bool CInspection::ClusterDefect(std::vector<SDefectInfo*>& vctCandidate, double dblClusterCandidateWidth, double dblClusterInflate)
{
	bool bReturn = false;

	do
	{
		bool bChanged = true;

		while(bChanged)
		{
			bChanged = false;

			if(!vctCandidate.size())
				break;

			int nIdx1 = 0;
			int nIdx2 = 0;

			int nClusterInflate = (int)dblClusterInflate;

			for(auto& iter1 = vctCandidate.begin(); iter1 != vctCandidate.end(); iter1 = vctCandidate.begin() + nIdx1)
			{
				nIdx2 = nIdx1 + 1;

				SDefectInfo* pFDI1 = *iter1;


				if(pFDI1->dblWidth <= dblClusterCandidateWidth)
				{
					++nIdx1;
					continue;
				}
				

				std::vector<SDefectInfo*> vctCluster;

				CRavidRect<double> rrCluster;
				rrCluster = pFDI1->rrBoundary;
				rrCluster.Inflate(nClusterInflate, nClusterInflate, nClusterInflate, nClusterInflate);

				CRavidQuadrangle<double> rqCluster = InflateQuadrangle(pFDI1->rqMECR, nClusterInflate, nClusterInflate, nClusterInflate, nClusterInflate);

				vctCluster.push_back(pFDI1);

				for(auto& iter2 = vctCandidate.begin() + nIdx2; iter2 != vctCandidate.end(); iter2 = vctCandidate.begin() + nIdx2)
				{
					SDefectInfo* pFDI2 = *iter2;


					if(pFDI2->dblWidth <= dblClusterCandidateWidth)
					{
						++nIdx2;
						continue;
					}
					


					CRavidRect<double> rrB = pFDI2->rrBoundary;
					rrB.Inflate(nClusterInflate, nClusterInflate, nClusterInflate, nClusterInflate);

					if(rrB.DoesIntersect(rrCluster) || rrCluster.DoesIntersect(rrB))
					{
						CRavidQuadrangle<double> rq = InflateQuadrangle(pFDI2->rqMECR, nClusterInflate, nClusterInflate, nClusterInflate, nClusterInflate);

						if(rqCluster.DoesIntersect(rq))
						{
							rrCluster.left = __min(rrCluster.left, rrB.left);
							rrCluster.top = __min(rrCluster.top, rrB.top);
							rrCluster.right = __max(rrCluster.right, rrB.right);
							rrCluster.bottom = __max(rrCluster.bottom, rrB.bottom);

							vctCluster.push_back(pFDI2);
						}
					}

					++nIdx2;
				}

				if(vctCluster.size() >= 2)
				{
					bChanged = true;
//					nIdx1 = 0;
//					DrawDefect(pView, vctCluster, LIGHTCYAN, 3.666);
//					pView->DrawShape(ELayer_Operator, &rrCluster, LIME);

					SDefectInfo sDI;
// 					SDefectInfo* pNewDI = new SDefectInfo;
// 					if(pNewDI)
					{
						std::vector<CRavidPoint<int>> vctPoints;

						for(auto& iter : vctCluster)
						{
							if(!iter)
								continue;

							for(size_t i = 0; i < iter->rpgContour.GetCount(); ++i)
							{
								CRavidPoint<int>* pRP = dynamic_cast<CRavidPoint<int>*>(iter->rpgContour.GetAt((int)i));
								if(!pRP)
									continue;

								vctPoints.push_back(*pRP);
							}

							sDI.nIndex = iter->nIndex;
						
						}

						std::vector<CRavidPoint<int>> vctCH;

						GetConvexHull(vctPoints, vctCH);

						for(auto& iter : vctCH)
							sDI.rpgContour.Add(iter);

						
						sDI.rrBoundary = sDI.rpgContour.GetRect();
						GetMinimumEnclosingRectangle(vctCH, sDI.rrBoundary, sDI.rqMECR);

						sDI.dblWidth = INT_MIN;
						sDI.dblHeight = INT_MAX;

						for(int i = 0; i < 4; ++i)
						{
							int nNearst = (i + 1) % 4;

							double dblDistance = sDI.rqMECR.rpPoints[i].GetDistance(sDI.rqMECR.rpPoints[nNearst]);

							sDI.dblWidth = __max(sDI.dblWidth, dblDistance);
							sDI.dblHeight = __min(sDI.dblHeight, dblDistance);
						}

						*pFDI1 = sDI;
					}

					for(auto& iterC : vctCluster)
					{
						for(auto iterD = vctCandidate.begin(); iterD != vctCandidate.end(); ++iterD)
						{
							if(pFDI1 == (*iterD))
								continue;

							if(iterC != (*iterD))
								continue;

							delete iterC;
							iterC = nullptr;

							vctCandidate.erase(iterD);

							break;
						}
					}

				}
				else
				{
					++nIdx1;
				}
			}
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::DrawDefect(CImageCameraView * pImageView, std::vector<SDefectInfo*>& vctDefectInfo, COLORREF clr, double dblAccuracy, std::vector<SDefectData>& vctDectMap)
{
	bool bReturn = false;

	do 
	{
		if(!pImageView)
			break;

		CString str;

		for(auto& iter : vctDefectInfo)
		{
			str.Format(_T("[%d] L : %0.3lf, W : %0.3lf"), iter->nIndex, P2R(iter->dblWidth, dblAccuracy), P2R(iter->dblHeight, dblAccuracy));
			//iter->rpgContour.Offset(1, 1);
			pImageView->DrawShape(ELayer_Operator, &iter->rpgContour, clr);
			pImageView->DrawText(ELayer_Operator, &iter->rrBoundary.GetCenter(), str, clr, BLACK);		

			SDefectData s;
			s.rpg = iter->rpgContour;
			s.rqd = iter->rqMECR;
			s.bOuntSidePos = iter->bOutSide;
			s.dblHeight = iter->dblHeight;
			s.dblWidth = iter->dblWidth;
			s.bElectrode = iter->bElectorode;

			vctDectMap.push_back(s);
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::GetConvexHull(std::vector<CRavidPoint<int>>& vctIn, std::vector<CRavidPoint<int>>& vctOut)
{
	bool bReturn = false;

	do
	{
		if(!vctIn.size())
			break;

		vctOut.clear();

		auto LGetCCWFuc = [](const CRavidPoint<double>& p1, const CRavidPoint<double>& p2, const CRavidPoint<double>& p3)
		{
			return 1LL * (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
		};

		if(vctIn.size() > 2)
		{
			CRavidPoint<int> rpRef(INT_MAX, INT_MAX);

			std::sort(vctIn.begin(), vctIn.end(), [&](auto lhs, auto rhs) -> bool
			{
				CRavidPoint<int> rpLD = lhs - rpRef;
				CRavidPoint<int> rpRD = rhs - rpRef;

				if(lhs.y != rhs.y)
					return lhs.y < rhs.y;

				return lhs.x < rhs.x;
			});

			rpRef = vctIn[0];


			std::sort(vctIn.begin(), vctIn.end(), [&](auto lhs, auto rhs) -> bool
			{
				CRavidPoint<int> rpLD = lhs - rpRef;
				CRavidPoint<int> rpRD = rhs - rpRef;

				if(1LL * rpLD.y*rpRD.x != 1LL * rpLD.x*rpRD.y)
					return 1LL * rpLD.y*rpRD.x < 1LL * rpLD.x*rpRD.y;

				if(lhs.y != rhs.y)
					return lhs.y < rhs.y;

				return lhs.x < rhs.x;
			});

			int nIdx = 0;

			vctOut.reserve(vctIn.size());

			std::stack<int> s;

			s.push(0);
			s.push(1);

			int next = 2;

			while(next < vctIn.size())
			{
				while(s.size() >= 2)
				{
					int first, second;
					second = s.top();
					s.pop();
					first = s.top();

					if(LGetCCWFuc(vctIn[first], vctIn[second], vctIn[next]) > 0)
					{
						s.push(second);
						break;
					}
				}

				s.push(next++);
			}

			while(s.size())
			{
				int nIdx = s.top();
				s.pop();

				vctOut.push_back(vctIn[nIdx]);
			}
		}
		else
			vctOut = vctIn;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::GetConvexHull(CRavidPolygon& rpgIn, std::vector<CRavidPoint<int>>& vctOut)
{
	bool bReturn = false;

	do
	{
		if(!rpgIn.GetCount())
			break;

		std::vector<CRavidPoint<int>> vctIn;
		vctIn.reserve(rpgIn.GetCount());

		for(size_t i = 0; i < rpgIn.GetCount(); ++i)
		{
			CRavidPoint<int>* pRP = dynamic_cast<CRavidPoint<int>*>(rpgIn.GetAt((int)i));
			if(!pRP)
				continue;

			vctIn.push_back(*pRP);
		}

		bReturn = GetConvexHull(vctIn, vctOut);
	}
	while(false);

	return bReturn;
}

bool CInspection::GetConvexHull(CRavidPolygon& rpgIn, CRavidPolygon& rpgOut)
{
	bool bReturn = false;

	do
	{
		if(!rpgIn.GetCount())
			break;

		rpgOut.Clear();

		std::vector<CRavidPoint<int>> vctIn;
		std::vector<CRavidPoint<int>> vctOut;
		vctIn.reserve(rpgIn.GetCount());

		for(size_t i = 0; i < rpgIn.GetCount(); ++i)
		{
			CRavidPoint<int>* pRP = dynamic_cast<CRavidPoint<int>*>(rpgIn.GetAt((int)i));
			if(!pRP)
				continue;

			vctIn.push_back(*pRP);
		}

		if(!GetConvexHull(vctIn, vctOut))
			break;

		if(!vctOut.size())
			break;

		for(auto& iter : vctOut)
			rpgOut.Add(iter);

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::GetQuadrangleToPolygon(std::vector<CRavidPoint<int>>& vctIn, CRavidPolygon & rpgOut)
{
	bool bReturn = false;

	do 
	{
		CRavidPoint<double> rpCenter;
		for (CRavidPoint<double> rp : vctIn)
		{
			rpCenter += rp;
		}

		rpCenter.x /= vctIn.size();
		rpCenter.y /= vctIn.size();


		CRavidPoint<double> rpTempEnd(rpCenter.x, rpCenter.y + 4000/*INT_MAX*/);
		CRavidLine<double> rl(rpCenter, rpTempEnd);





	} while (false);

	return bReturn;
}

bool CInspection::GetMinimumEnclosingRectangle(std::vector<CRavidPoint<int>>& vctIn, CRavidRect<int>& rrIn, CRavidQuadrangle<double>& rqOut)
{
	bool bReturn = false;

	do
	{
		if(!vctIn.size())
			break;

		CRavidPoint<double> rpCenter;
		rpCenter.x = (rrIn.right + rrIn.left) / 2;
		rpCenter.y = (rrIn.top + rrIn.bottom) / 2;

		double dblMinArea = (rrIn.right - rrIn.left) * (rrIn.bottom - rrIn.top);

		if(dblMinArea <= 1)
		{
			CRavidPoint<int> rpTemp(rrIn.left, rrIn.top);
			rqOut.SetQuadrangle(rpTemp, rpTemp, rpTemp, rpTemp);
			break;
		}

		double x1, x2, x3;
		double y1, y2, y3;

		CRavidPoint<double> rpLeft, rpBottom, rpResultLeft, rpResultBottom;
		double dblAngle, dblResultAngle = 0, dblRadian, dblResultRadian = 0;

		for(int j = 0; j < vctIn.size(); j++)
		{
			int nTemp = (j + 1) % vctIn.size();
			x1 = vctIn[j].x;
			y1 = vctIn[j].y;
			x2 = vctIn[nTemp].x;
			y2 = vctIn[nTemp].y;

			CRavidLine<double> rlTemp(x1, y1, x2, y2);

			dblAngle = -rlTemp.rpPoints[0].GetAngle(rlTemp.rpPoints[1]);
			dblRadian = RAVID_DEG_TO_RAD(dblAngle);

			rpLeft.x = INT_MAX;
			rpLeft.y = INT_MAX;
			rpBottom.x = INT_MIN;
			rpBottom.y = INT_MIN;

			double rx, ry;

			float fCos = (float)cos(dblRadian);
			float fSin = (float)sin(dblRadian);

			for(int k = 0; k < vctIn.size(); k++)
			{
				x3 = vctIn[k].x - rpCenter.x;
				y3 = vctIn[k].y - rpCenter.y;

				rx = fCos * x3 - fSin * y3 + rpCenter.x;
				ry = fSin * x3 + fCos * y3 + rpCenter.y;

				if(rpLeft.x > rx)
					rpLeft.x = rx;
				if(rpLeft.y > ry)
					rpLeft.y = ry;
				if(rpBottom.x < rx)
					rpBottom.x = rx;
				if(rpBottom.y < ry)
					rpBottom.y = ry;
			}

			double dblArea = (rpBottom.y - rpLeft.y) * (rpBottom.x - rpLeft.x);

			if(dblMinArea >= dblArea)
			{
				dblMinArea = dblArea;
				rpResultBottom = rpBottom;
				rpResultLeft = rpLeft;
				dblResultAngle = dblAngle;
			}
		}

		dblAngle = -dblResultAngle;

		CRavidQuadrangle<double> rqTemp;

		x1 = rpResultLeft.x;
		y1 = rpResultLeft.y;
		x2 = rpResultBottom.x;
		y2 = rpResultBottom.y;

		rqTemp.rpPoints[0] = CRavidPoint<double>(x1, y1);
		rqTemp.rpPoints[1] = CRavidPoint<double>(x2, y1);
		rqTemp.rpPoints[2] = CRavidPoint<double>(x2, y2);
		rqTemp.rpPoints[3] = CRavidPoint<double>(x1, y2);

		rqTemp.Rotate(dblAngle, rpCenter);

		CRavidQuadrangle<double> rqTemp2;

		int nLeftX = INT_MAX;
		int nStartNum;

		for(int k = 0; k < 4; k++)
		{
			if(nLeftX > rqTemp.rpPoints[k].x)
			{
				nLeftX = (int)rqTemp.rpPoints[k].x;
				nStartNum = k;
			}
			else if(nLeftX == rqTemp.rpPoints[k].x)
			{
				if(rqTemp.rpPoints[k].y < rqTemp.rpPoints[nStartNum].y)
				{
					nLeftX = (int)rqTemp.rpPoints[k].x;
					nStartNum = k;
				}
			}
		}

		for(int k = 0; k < 4; k++)
		{
			int nTemp = (nStartNum + k) % 4;
			rqTemp2.rpPoints[k] = rqTemp.rpPoints[nTemp];
		}

		rqOut = rqTemp2;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::CheckBoxIsOverROI(CRavidRect<int> rrROI, CRavidRect<int> rrBox)
{
	bool bReturn = false;
	do 
	{
		rrBox.Inflate(5,5,5,5);

		if(rrBox.left <= rrROI.left)
			bReturn = true;

		if(rrBox.top <= rrROI.top)
			bReturn = true;

		if(rrBox.right >= rrROI.right)
			bReturn = true;

		if(rrBox.bottom >= rrROI.bottom)
			bReturn = true;

	} while (false);

	return bReturn;
} 

bool CInspection::IsOverKill(int nAreaNum, CRavidImage * pImage, SFindAreaInfo sAreaInfo, SDefectInfo* sDI)
{
	bool bReturn = true;
	// 목적: 제품의 Edge 끝 부분의 분리막 구겨짐 확인 후 GV로 걸러냄.
	do 
	{

// 		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView((long)0));
// 		if(!pImageView)
// 			return false;
		 
		bool bExclusionGV[4] = { false,true,false,true }; //left, top, right, bottom

		if(nAreaNum == 0)
			bExclusionGV[0] = true;

		if(nAreaNum == 5)
			bExclusionGV[2] = true;


		/////////////////////////////////////////////////////////////////////////////
		// GV로  걸러내기.
		//BYTE nLimitGV[3] = { 50, 70, 80 }; // If Grey Image, use index 0 only.(B,G,R)

		int nEdgeOffset = m_nSuburbAreaLimit; //pixel
	
		CRavidQuadrangle<double> rqd = sAreaInfo.rqdAll;

		rqd.Deflate(bExclusionGV[0] ? nEdgeOffset : 0,
					 bExclusionGV[1] ? nEdgeOffset : 0,
					 bExclusionGV[2] ? nEdgeOffset : 0,
					 bExclusionGV[3] ? nEdgeOffset : 0);
		//pImageView->DrawShape(ELayer_Operator, &rpg2, YELLOW, 1, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DOT);

		// 위아래 nEdgeOffset(10pixel) 이내, IsCrease 주름영역 100pixel 안에 들어오면서, 길이가 폭보다 10배 크면.
		//GV 값(컬러는 G 값) 보고 최소값이 Limit 값보다 크면 걸러냄. nLimitGV
		if(!rqd.DoesIntersect(&sDI->rpgContour) || IsCrease(nAreaNum, sAreaInfo, sDI))
		{
			sDI->bOutSide = true;

			CMultipleVariable Mv;
			pImage->GetMean(Mv, &sDI->rpgContour);

			if(pImage->IsColor())
			{
	// 			if(mvMean.GetAt(0) < nLimitGV[0] &&
	// 			   mvMean.GetAt(1) < nLimitGV[1] &&
	// 			   mvMean.GetAt(2) < nLimitGV[2])
	// 			{
	// 				bReturn = false;
	// 				break;
	// 			}

				if(Mv.GetAt(1) < m_nSuburbAreaGV/*nLimitGV[1]*/)
				{
					bReturn = false;
					break;
				}
// 				else
// 				{
// 					pImageView->DrawShape(ELayer_Administrator, &sDI->rpgContour, LIGHTRED, 1, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DOT);
// 
// 				}
			}
			else
			{
				if(Mv.GetAt(0) < m_nSuburbAreaGV/*nLimitGV[0]*/)
				{
					bReturn = false;
					break;
				}
// 				else
// 				{
// 					pImageView->DrawShape(ELayer_Operator, &rpg, LIGHTRED, 1, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DOT);
// 
// 				}
			}
		}
		else
		{
			bReturn = false;
			//pImageView->DrawShape(ELayer_Operator, &rpg, BLUE, 1, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DOT);

		}


	} while (false);

	return bReturn;
}

bool CInspection::IsCrease(int nAreaNum,  SFindAreaInfo sAreaInfo, SDefectInfo* sDI)
{
	bool bReturn = false;
// 목적: 주름 걸내기
	do
	{
// 
// 		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView((long)1));
// 		if(!pImageView)
// 			return false;

		bool bExclusionGV[4] = { false,true,false,true }; //left, top, right, bottom


		int nEdgeOffset = m_nCreaseAreaLimit; //pixel

		double dblRatio = m_dblCreaseRatio;

		CRavidQuadrangle<double> rqd = sAreaInfo.rqdAll;

		rqd.Deflate(bExclusionGV[0] ? nEdgeOffset : 0,
					 bExclusionGV[1] ? nEdgeOffset : 0,
					 bExclusionGV[2] ? nEdgeOffset : 0,
					 bExclusionGV[3] ? nEdgeOffset : 0);
		//pImageView->DrawShape(ELayer_Operator, &rqd, YELLOW, 1, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DOT);

		if(!rqd.DoesIntersect(&sDI->rpgContour))
		{
			if((sDI->dblWidth >= sDI->dblHeight * dblRatio) /*||  (sDI->dblHeight < 3)*/)
				bReturn = true;



		}
	}
	while(false);

	return bReturn;
}

bool CInspection::IsGVcount(CRavidImage * pImage, SDefectInfo * sDI, bool bLow, BYTE nGV, BYTE nCount)
{

	int nCountGV = 0;

	int nLeft = sDI->rrBoundary.left;
	int ntop = sDI->rrBoundary.top;
	int nRight = sDI->rrBoundary.right;
	int nBottom = sDI->rrBoundary.bottom;

	//#pragma omp parallel for
	for(int x = nLeft; x < nRight; x++)
	{
		for(int y = ntop; y < nBottom; y++)
		{
			CRavidPoint<int> rp(x, y);
			if(PointInCheck(rp, &sDI->rpgContour))
			{
				BYTE nImageGV = 0;
				pImage->GetValue(x, y, &nImageGV);
				if(bLow)
				{
					if(nGV > nImageGV)
					{
						nCountGV++;
					}
				}
				else
				{
					if(nGV < nImageGV)
					{
						nCountGV++;
					}
				}
			}

			if(nCountGV >= nCount)
				return true;

		}
	}


	if(nCountGV >= nCount)
		return true;

	return false;


}

double CInspection::GetPolygonArea(CRavidPolygon & rpg)
{
	double dblReturn = 0.;

	do
	{
		CRavidPolygon* pFSPG = rpg.MakeFullSegmentPolygon();
		if(!pFSPG)
			break;

		double dblPolyArea = 0.;

		for(size_t i = 0; i < pFSPG->GetCount(); ++i)
		{
			auto iter = pFSPG->GetAt((int)i);
			switch(iter->GetShapeType())
			{
			case ERavidGeometryShapeType_Circle:
				{
					CRavidCircle<double>* pCircle = dynamic_cast<CRavidCircle<double>*>(iter);

					dblReturn += pCircle->GetArea();

					CRavidPoint<double> rpPoint1 = pCircle->ConvertDegreeToPoint(pCircle->startDeg);
					CRavidPoint<double> rpPoint2 = pCircle->ConvertDegreeToPoint(pCircle->startDeg + pCircle->deltaDeg);

					dblPolyArea += rpPoint1.x * rpPoint2.y;
					dblPolyArea -= rpPoint1.y * rpPoint2.x;
				}
				break;
			case ERavidGeometryShapeType_Ellipse:
				{
					CRavidEllipse<double>* pEllipse = dynamic_cast<CRavidEllipse<double>*>(iter);

					dblReturn += pEllipse->GetArea();

					CRavidPoint<double> rpPoint1 = pEllipse->ConvertDegreeToPoint(pEllipse->startDeg);
					CRavidPoint<double> rpPoint2 = pEllipse->ConvertDegreeToPoint(pEllipse->startDeg + pEllipse->deltaDeg);

					dblPolyArea += rpPoint1.x * rpPoint2.y;
					dblPolyArea -= rpPoint1.y * rpPoint2.x;

				}
				break;
			case ERavidGeometryShapeType_Line:
				{
					CRavidLine<double>* pLine = dynamic_cast<CRavidLine<double>*>(iter);

					dblPolyArea += pLine->rpPoints[0].x * pLine->rpPoints[1].y;
					dblPolyArea -= pLine->rpPoints[0].y * pLine->rpPoints[1].x;
				}
				break;
			default:
				{
					ASSERT(false);
					break;
				}
			}
		}

		dblPolyArea *= 0.5;
		dblPolyArea = RAVID_ABSOLUTE(dblPolyArea);

		dblReturn += dblPolyArea;

		delete pFSPG;
		pFSPG = nullptr;
	}
	while(false);

	return dblReturn;
}

// bool CInspection::LineGauge(CRavidImage * pImage, SGaugeParam sParam, CRavidLine<double>& rl, std::vector<CRavidPoint<double>>* pVctValidPoints)
// {
// 	bool bReutrn = false;
// 
// 	do
// 	{
// 		if(!pImage)
// 			break;
// 
// 		CLineGauge lg;
// 
// 		lg.SetTransitionType((CLineGauge::ETransitionType)sParam.nTransitionType);
// 		lg.SetTransitionChoice((CLineGauge::ETransitionChoice)sParam.nTransitionChoice);
// 		lg.SetThreshold((long)sParam.dblThreshold);
// 		lg.SetMinimumAmplitude((long)sParam.dblMinimumAmplitude);
// 		lg.SetThickness((long)sParam.dblThickness);
// 		lg.SetSamplingStep(sParam.dblSamplingStep);
// 		lg.SetOutLiersThreshold(sParam.dblOutLiersThreshold);
// 		lg.SetNumOfPass((long)sParam.dblOutLiersThreshold);
// 
// 		lg.SetMeasurementRegion(rl, sParam.dblTolerance);
// 
// 		if(lg.Measure(pImage) != EAlgorithmResult_OK)
// 			break;
// 
// 		lg.GetMeasuredObject(&rl);
// 
// 		if(pVctValidPoints)
// 		{
// 			pVctValidPoints->clear();
// 
// 			lg.GetMeasuredValidPoints(pVctValidPoints);
// 		}
// 
// 		bReutrn = true;
// 	}
// 	while(false);
// 
// 	return bReutrn;
// }

bool CInspection::DoesIntersectLine(CRavidLine<double> rl1, CRavidLine<double> rl2)
{
	bool bReturn = false;

	do
	{
		double rx;
		double ry;

		double dblDx1 = rl1.rpPoints[1].x - rl1.rpPoints[0].x;
		double dblDy1 = rl1.rpPoints[1].y - rl1.rpPoints[0].y;
		double dblDx2 = rl2.rpPoints[1].x - rl2.rpPoints[0].x;
		double dblDy2 = rl2.rpPoints[1].y - rl2.rpPoints[0].y;

		if(RAVID_EQUAL_FLOAT(dblDx1, 0.))
			dblDx1 = 0.;

		if(RAVID_EQUAL_FLOAT(dblDy1, 0.))
			dblDy1 = 0.;

		if(RAVID_EQUAL_FLOAT(dblDx2, 0.))
			dblDx2 = 0.;

		if(RAVID_EQUAL_FLOAT(dblDy2, 0.))
			dblDy2 = 0.;

		if(dblDy1 == 0. && dblDx2 == 0.)
		{
			rx = rl2.rpPoints[0].x;
			ry = rl1.rpPoints[0].y;

			if(__min(rl1.rpPoints[0].x, rl1.rpPoints[1].x) <= rx && __max(rl1.rpPoints[0].x, rl1.rpPoints[1].x) >= rx && __min(rl2.rpPoints[0].y, rl2.rpPoints[1].y) <= ry && __max(rl2.rpPoints[0].y, rl2.rpPoints[1].y) >= ry)
				bReturn = true;
		}
		else if(dblDx1 == 0. && dblDy2 == 0.)
		{
			rx = rl1.rpPoints[0].x;
			ry = rl2.rpPoints[0].y;

			if(__min(rl2.rpPoints[0].x, rl2.rpPoints[1].x) <= rx && __max(rl2.rpPoints[0].x, rl2.rpPoints[1].x) >= rx && __min(rl1.rpPoints[0].y, rl1.rpPoints[1].y) <= ry && __max(rl1.rpPoints[0].y, rl1.rpPoints[1].y) >= ry)
				bReturn = true;
		}
		else
		{
			double dblV = dblDy2 * dblDx1 - dblDx2 * dblDy1;

			if(RAVID_EQUAL_FLOAT(dblV, 0.))
				break;

			double dblDiffX = rl1.rpPoints[0].x - rl2.rpPoints[0].x;
			double dblDiffY = rl1.rpPoints[0].y - rl2.rpPoints[0].y;

			if(RAVID_EQUAL_FLOAT(dblDiffX, 0.))
				dblDiffX = 0.;

			if(RAVID_EQUAL_FLOAT(dblDiffY, 0.))
				dblDiffY = 0.;

			double dblLine1 = dblDx2 * dblDiffY - dblDy2 * dblDiffX;
			double dblLine2 = dblDx1 * dblDiffY - dblDy1 * dblDiffX;

			if(RAVID_EQUAL_FLOAT(dblLine1, 0.))
				dblLine1 = 0.;

			if(RAVID_EQUAL_FLOAT(dblLine2, 0.))
				dblLine2 = 0.;

			if(dblLine1 == 0.0 && dblLine2 == 0.0)
				break;

			double dblResult = dblLine1 / dblV;

			rx = rl1.rpPoints[0].x + dblResult * dblDx1;
			ry = rl1.rpPoints[0].y + dblResult * dblDy1;

			if(dblDx1 == 0.)
			{
				if(__min(rl2.rpPoints[0].x, rl2.rpPoints[1].x) <= rx && __min(rl1.rpPoints[0].y, rl1.rpPoints[1].y) <= ry && __min(rl2.rpPoints[0].y, rl2.rpPoints[1].y) <= ry && __max(rl2.rpPoints[0].x, rl2.rpPoints[1].x) >= rx && __max(rl1.rpPoints[0].y, rl1.rpPoints[1].y) >= ry && __max(rl2.rpPoints[0].y, rl2.rpPoints[1].y) >= ry)
					bReturn = true;
			}
			else if(dblDx2 == 0.)
			{
				if(__min(rl1.rpPoints[0].x, rl1.rpPoints[1].x) <= rx && __min(rl1.rpPoints[0].y, rl1.rpPoints[1].y) <= ry && __min(rl2.rpPoints[0].y, rl2.rpPoints[1].y) <= ry && __max(rl1.rpPoints[0].x, rl1.rpPoints[1].x) >= rx && __max(rl1.rpPoints[0].y, rl1.rpPoints[1].y) >= ry && __max(rl2.rpPoints[0].y, rl2.rpPoints[1].y) >= ry)
					bReturn = true;
			}
			else if(dblDy1 == 0.)
			{
				if(__min(rl1.rpPoints[0].x, rl1.rpPoints[1].x) <= rx && __min(rl2.rpPoints[0].x, rl2.rpPoints[1].x) <= rx && __min(rl2.rpPoints[0].y, rl2.rpPoints[1].y) <= ry &&
				   __max(rl1.rpPoints[0].x, rl1.rpPoints[1].x) >= rx && __max(rl2.rpPoints[0].x, rl2.rpPoints[1].x) >= rx && __max(rl2.rpPoints[0].y, rl2.rpPoints[1].y) >= ry)
					bReturn = true;
			}
			else if(dblDy2 == 0.)
			{
				if(__min(rl1.rpPoints[0].x, rl1.rpPoints[1].x) <= rx && __min(rl2.rpPoints[0].x, rl2.rpPoints[1].x) <= rx && __min(rl1.rpPoints[0].y, rl1.rpPoints[1].y) <= ry && __max(rl1.rpPoints[0].x, rl1.rpPoints[1].x) >= rx && __max(rl2.rpPoints[0].x, rl2.rpPoints[1].x) >= rx && __max(rl1.rpPoints[0].y, rl1.rpPoints[1].y) >= ry)
					bReturn = true;
			}
			else
			{
				if(__min(rl1.rpPoints[0].x, rl1.rpPoints[1].x) <= rx && __min(rl2.rpPoints[0].x, rl2.rpPoints[1].x) <= rx && __min(rl1.rpPoints[0].y, rl1.rpPoints[1].y) <= ry && __min(rl2.rpPoints[0].y, rl2.rpPoints[1].y) <= ry &&
				   __max(rl1.rpPoints[0].x, rl1.rpPoints[1].x) >= rx && __max(rl2.rpPoints[0].x, rl2.rpPoints[1].x) >= rx && __max(rl1.rpPoints[0].y, rl1.rpPoints[1].y) >= ry && __max(rl2.rpPoints[0].y, rl2.rpPoints[1].y) >= ry)
					bReturn = true;
			}
		}
	}
	while(false);

	return bReturn;
}

bool CInspection::DoesIntersectQuadrangle(CRavidQuadrangle<double> rq1, CRavidQuadrangle<double> rq2)
{
	bool bReturn = false;

	do 
	{
		for(int i = 0; i < 4; ++i)
		{
			if(rq1.DoesIntersect(rq2.rpPoints[i]))
			{
				bReturn = true;
				break;
			}

			if(rq2.DoesIntersect(rq1.rpPoints[i]))
			{
				bReturn = true;
				break;
			}
		}

		if(bReturn)
			break;

		for(int i = 0; i < 4; ++i)
		{
			int nNearstIdxI = (i + 1) % 4;

			CRavidLine<double> rl1(rq1.rpPoints[i], rq1.rpPoints[nNearstIdxI]);
			CRavidLine<double> rl2(rq2.rpPoints[i], rq2.rpPoints[nNearstIdxI]);

			for(int j = 0; j < 4; ++j)
			{
				int nNearstIdxJ = (i + 1) % 4;
			
				CRavidLine<double> rlC1(rq1.rpPoints[j], rq1.rpPoints[nNearstIdxJ]);
				CRavidLine<double> rlC2(rq2.rpPoints[j], rq2.rpPoints[nNearstIdxJ]);

				if(DoesIntersectLine(rl1, rlC2))
				{
					bReturn = true;
					break;
				}

				if(DoesIntersectLine(rl2, rlC1))
				{
					bReturn = true;
					break;
				}
			}

			if(bReturn)
				break;
		}
	}
	while(false);

	return bReturn;
}

bool CInspection::IsEmpty(CRavidImage * pImage, double dblExtend, BYTE cGV, double dblArea)
{
	bool bReturn = false;

	do 
	{
		if(!pImage)
			break;

		int nImageSizeX = (int)pImage->GetSizeX();
		int nImageSizeY = (int)pImage->GetSizeY();

		CRavidRect<double> rrEmpty(nImageSizeX / 2, nImageSizeY / 2, nImageSizeX / 2, nImageSizeY / 2);
		rrEmpty.Inflate(dblExtend, dblExtend, dblExtend, dblExtend);

		

		CConnectedComponent cc;
		cc.SetSingleThreshold(cGV);
		cc.SetLogicalCondition(ELogicalCondition_GreaterEqual);
		cc.SetMultipleChannelCondition(CConnectedComponent::EMultipleChannelCondition_1);

		if(cc.Encode(pImage, &rrEmpty) != EAlgorithmResult_OK)
			break;

		double dblCellValue0 = dblArea;
		cc.Filter(CConnectedComponent::EFilterItem_Area, dblCellValue0, ELogicalCondition_LessEqual);

		std::vector<CRavidRect<int> > vctBoundary;
		cc.GetBoundary(vctBoundary);

		if(!vctBoundary.size())
			bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::Revision(CRavidImage* pImage, float fRevisionRadius, CRavidPoint<double> rpCenter, CRavidRect<int> rrROI, float fRevisionAcceptDiffGV)
{
	bool bReturn = false;

	do 
	{
		if(!pImage)
			break;

		int nSizeX = (int)pImage->GetSizeX();
		int nSizeY = (int)pImage->GetSizeY();

		std::vector<float> vctAvg;
		float fMinGV = (float)INT_MAX;

		for(float fRad = 0.f; fRad < fRevisionRadius; ++fRad)
		{
			float fAvg = 0.f;
			float fCompareAvg = 0.f;
			int nAvgCnt = 0;

			std::vector<float> vctGV;
			vctGV.reserve(400);

			for(float fAng = 0.f; fAng < 360.f; ++fAng)
			{
				CRavidPoint<double> rpRotate(rpCenter);
				rpRotate.y -= fRad;

				rpRotate.Rotate(fAng, &rpCenter);

				float fGV = pImage->GetGVBilinear(rpRotate);

				if(fGV != -1.f)
				{
					vctGV.push_back(fGV);
					fCompareAvg += fGV;
					++nAvgCnt;
				}
			}

			if(nAvgCnt)
				fCompareAvg /= (float)nAvgCnt;

			nAvgCnt = 0;

			for(auto& iter : vctGV)
			{
				if(fabs(fCompareAvg - iter) < fRevisionAcceptDiffGV)
				{
					fAvg += iter;
					++nAvgCnt;
				}
			}

			if(nAvgCnt)
			{
				fAvg /= (float)nAvgCnt;
				fMinGV = __min(fMinGV, fAvg);
				vctAvg.push_back(fAvg);
			}
			else
				vctAvg.push_back(fCompareAvg);
		}

		std::vector<float> vctCoef;
		vctCoef.reserve((int)fRevisionRadius + 30);

		float fCoef = 0.f;

		for(auto& iter : vctAvg)
		{
			fCoef = fMinGV / iter;
			vctCoef.push_back(fCoef);
		}

		for(int y = rrROI.top; y < rrROI.bottom; ++y)
		{
			for(int x = rrROI.left; x < rrROI.right; ++x)
			{
				CRavidPoint<double> rpTemp(x, y);

				int nRad = (int)rpCenter.GetDistance(rpTemp);

				if(nRad >= (int)vctCoef.size())
					continue;

				fCoef = vctCoef.at(nRad);

				BYTE cGV = 0;

				if(pImage->GetValueSafe(x, y, &cGV) != EAlgorithmResult_OK)
					continue;

				long nNewGV = __min((long)((float)cGV * fCoef), 255);

				cGV = (BYTE)nNewGV;

				pImage->SetValueSafe(x, y, cGV);
			}
		}

		int nInflateSize = 50;

		CRavidRect<int> rrInner(rrROI);
		rrInner.Inflate(-nInflateSize, -nInflateSize, -nInflateSize, -nInflateSize);

		CRavidRect<int > rrOuter(rrROI);
		rrOuter.Inflate(nInflateSize, nInflateSize, nInflateSize, nInflateSize);

		rrOuter.left = __max(rrOuter.left, 0);
		rrOuter.top = __max(rrOuter.top, 0);
		rrOuter.right = __min(rrOuter.right, nSizeX);
		rrOuter.bottom = __min(rrOuter.bottom, nSizeY);

		double dblAverage = 0.;
		int nCount = 0;
		BYTE cGV = 0;

		for(int y = rrROI.top; y < rrROI.bottom; ++y)
		{
			for(int x = rrROI.left; x < rrROI.right; ++x)
			{
				if(y > rrInner.top && y < rrInner.bottom && x > rrInner.left && x < rrInner.right)
					continue;

				pImage->GetValue(x, y, &cGV);

				dblAverage += cGV;
				++nCount;
			}
		}

		if(nCount)
		{
			dblAverage /= (double)nCount;

			for(int y = rrOuter.top; y < rrOuter.bottom; ++y)
			{
				for(int x = rrOuter.left; x < rrOuter.right; ++x)
				{
					if(y > rrROI.top && y < rrROI.bottom && x > rrROI.left && x < rrROI.right)
						continue;

					pImage->SetValue(x, y, (BYTE)dblAverage);
				}
			}
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}


bool CInspection::Revision(CRavidImage* pImage, float fRevisionRadius, CRavidPoint<double> rpCenter, CRavidQuadrangle<double> rqROI, float fRevisionAcceptDiffGV)
{
	bool bReturn = false;

	do
	{
		if(!pImage)
			break;

		int nSizeX = (int)pImage->GetSizeX();
		int nSizeY = (int)pImage->GetSizeY();

		std::vector<float> vctAvg;
		float fMinGV = (float)INT_MAX;

		for(float fRad = 0.f; fRad < fRevisionRadius; ++fRad)
		{
			float fAvg = 0.f;
			float fCompareAvg = 0.f;
			int nAvgCnt = 0;

			std::vector<float> vctGV;
			vctGV.reserve(1200);

			for(float fAng = 0.f; fAng < 360.f; ++fAng)
			{
//				for(int i = -2.; i <= 2; ++i)
				{
					CRavidPoint<double> rpRotate(rpCenter);
//					rpRotate.y -= (fRad + i);
					rpRotate.y -= fRad;

					rpRotate.Rotate(fAng, &rpCenter);

					float fGV = pImage->GetGVBilinear(rpRotate);

					if(fGV != -1.f)
					{
						vctGV.push_back(fGV);
						fCompareAvg += fGV;
						++nAvgCnt;
					}
				}
			}

			if(nAvgCnt)
				fCompareAvg /= (float)nAvgCnt;

			nAvgCnt = 0;

			for(auto& iter : vctGV)
			{
				if(fabs(fCompareAvg - iter) < fRevisionAcceptDiffGV)
				{
					fAvg += iter;
					++nAvgCnt;
				}
			}

			if(nAvgCnt)
			{
				fAvg /= (float)nAvgCnt;
				fMinGV = __min(fMinGV, fAvg);
				vctAvg.push_back(fAvg);
			}
			else
				vctAvg.push_back(fCompareAvg);
		}

		std::vector<float> vctCoef;
		vctCoef.reserve((int)fRevisionRadius + 30);

		float fCoef = 0.f;

		for(auto& iter : vctAvg)
		{
			fCoef = fMinGV / iter;
			vctCoef.push_back(fCoef);
		}

		CRavidRect<int> rrROI = rqROI.GetRect();

		for(int y = rrROI.top; y < rrROI.bottom; ++y)
		{
			for(int x = rrROI.left; x < rrROI.right; ++x)
			{
				CRavidPoint<double> rpTemp(x, y);

				int nRad = (int)rpCenter.GetDistance(rpTemp);

				if(nRad >= (int)vctCoef.size())
					continue;

				fCoef = vctCoef.at(nRad);

				BYTE cGV = 0;

				if(pImage->GetValueSafe(x, y, &cGV) != EAlgorithmResult_OK)
					continue;

				long nNewGV = __min((long)((float)cGV * fCoef), 255);

				cGV = (BYTE)nNewGV;

				pImage->SetValueSafe(x, y, cGV);
			}
		}

		int nInflateSize = 50;

		CRavidRect<int> rrInner(rrROI);
		rrInner.Inflate(-nInflateSize, -nInflateSize, -nInflateSize, -nInflateSize);

		CRavidRect<int > rrOuter(rrROI);
		rrOuter.Inflate(nInflateSize, nInflateSize, nInflateSize, nInflateSize);

		rrOuter.left = __max(rrOuter.left, 0);
		rrOuter.top = __max(rrOuter.top, 0);
		rrOuter.right = __min(rrOuter.right, nSizeX);
		rrOuter.bottom = __min(rrOuter.bottom, nSizeY);

		double dblAverage = 0.;
		int nCount = 0;
		BYTE cGV = 0;

		for(int y = rrROI.top; y < rrROI.bottom; ++y)
		{
			for(int x = rrROI.left; x < rrROI.right; ++x)
			{
				if(y > rrInner.top && y < rrInner.bottom && x > rrInner.left && x < rrInner.right)
					continue;

				pImage->GetValue(x, y, &cGV);

				dblAverage += cGV;
				++nCount;
			}
		}

		if(nCount)
		{
			dblAverage /= (double)nCount;

			Mask(pImage, (BYTE)dblAverage, rrOuter, rqROI);
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::Mask(CRavidImage * pImage, BYTE cGV, CRavidRect<int> rrOuter, CRavidQuadrangle<double> rqInner)
{
	bool bReturn = false;

	do 
	{

		if(!pImage)
			break;

		rrOuter.left = __max(rrOuter.left, 0);
		rrOuter.top = __max(rrOuter.top, 0);
		rrOuter.right = __min(rrOuter.right, (int)pImage->GetSizeX() - 1);
		rrOuter.bottom = __min(rrOuter.bottom, (int)pImage->GetSizeY() - 1);

		if(!rrOuter.IsShapeValid())
			break;

		for(int y = rrOuter.top; y < rrOuter.bottom; ++y)
		{
			for(int x = rrOuter.left; x < rrOuter.right; ++x)
			{
				if(!rqInner.DoesIntersect(CRavidPoint<double>(x, y)))
					continue;
				
				pImage->SetValue(x, y, cGV);
			}
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::MaskWithRect(CRavidImage * pImage, BYTE cGV, CRavidRect<int> rrMaskArea)
{
	bool bReturn = false;

	do
	{

		if(!pImage)
			break;

		rrMaskArea.left = __max(rrMaskArea.left, 0);
		rrMaskArea.top = __max(rrMaskArea.top, 0);
		rrMaskArea.right = __min(rrMaskArea.right, (int)pImage->GetSizeX() - 1);
		rrMaskArea.bottom = __min(rrMaskArea.bottom, (int)pImage->GetSizeY() - 1);

		if(!rrMaskArea.IsShapeValid())
			break;

		for(int y = rrMaskArea.top; y < rrMaskArea.bottom; ++y)
		{
			for(int x = rrMaskArea.left; x < rrMaskArea.right; ++x)
			{
				/*if(!rqInner.DoesIntersect(CRavidPoint<double>(x, y)))
					continue;*/

				pImage->SetValue(x, y, cGV);
			}
		}

		bReturn = true;
	}
	while(false);

	return bReturn;



}

bool CInspection::Mask(CRavidImage * pImage, BYTE cGV, CRavidRect<int> rrOuter, CRavidPolygon rpgInner)
{
	bool bReturn = false;

	do
	{
		
		if(!pImage)
			break;

		rrOuter.left = __max(rrOuter.left, 0);
		rrOuter.top = __max(rrOuter.top, 0);
		rrOuter.right = __min(rrOuter.right, (int)pImage->GetSizeX() - 1);
		rrOuter.bottom = __min(rrOuter.bottom, (int)pImage->GetSizeY() - 1);

		if(!rrOuter.IsShapeValid())
			break;


		for(int y = rrOuter.top; y < rrOuter.bottom; ++y)
		{
			for(int x = rrOuter.left; x < rrOuter.right; ++x)
			{
				if(!rpgInner.DoesIntersect(CRavidPoint<double>(x, y)))
					continue;
				
						
				pImage->SetValue(x, y, cGV);
			}
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::Mask_Corner(int nIndexNum, CRavidImage* pImage, SFindAreaInfo sInfo)
{
	bool bReturn = false;
	do 
	{
 		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView((long)1));
 		if(!pImageView)
 			return false;

		bool bExclusion[4] = { true,true,true,true };

		if(nIndexNum == 0)
		{
			bExclusion[0] = false;
			bExclusion[3] = false;
		}

		if(nIndexNum == 5)
		{
			bExclusion[1] = false;
			bExclusion[2] = false;
		}


		CModelInfo* pModel = nullptr;

		for(size_t i = 0; i < CModelManager::GetModelInfoCount(); ++i)
		{
			CModelInfo* pModelL = CModelManager::GetModelInfo((int)i);
			if(!pModelL)
				continue;

			if(!pModelL->IsOpen())
				continue;

			pModel = pModelL;
			break;
		}

		SdefaultModelParam sParam;
		pModel->GetData(&sParam, sizeof(SdefaultModelParam));

		int nDistanceX = sParam.nMaskingSizeX;
		//int nDistanceX = 50;//pixel
		int nDistanceY = sParam.nMaskingSizeY;
		long nMaskingShape = sParam.nMaskingShape;
		//int nDistanceY = 10;

		for(int i = 0; i < 4; i ++)
		{
			if(!bExclusion[i])
				continue;

			CRavidPoint<double> rp;
			rp = sInfo.rqdAll.rpPoints[i];
			//pImageView->DrawShape(ELayer_Operator, &rp.MakeCrossHair(2, true), YELLOW, 5);
			CRavidPolygon rpg;
			rpg.Add(rp);
			CRavidPoint<double> rpTemp(sInfo.rqdAll.rpPoints[(i + 1) % 4]);
	
			CRavidLine<double> rl(sInfo.rqdAll.rpPoints[i], rpTemp);
			//pImageView->DrawShape(ELayer_Operator, &rl, GREEN, 5);

			rp = sInfo.rqdAll.rpPoints[i] + rl.GetUnitVector() * (i % 2 ? nDistanceY : nDistanceX);
			rpg.Add(rp);
			//pImageView->DrawShape(ELayer_Operator, &rp.MakeCrossHair(2, true), GREEN, 5);

			rpTemp = sInfo.rqdAll.rpPoints[(i + 3) % 4];

			rl.SetLine(sInfo.rqdAll.rpPoints[i], rpTemp);
			//pImageView->DrawShape(ELayer_Operator, &rl, BLUE, 5);

			rp = sInfo.rqdAll.rpPoints[i] + rl.GetUnitVector() * (i % 2 ? nDistanceX : nDistanceY);
			rpg.Add(rp);

			//pImageView->DrawShape(ELayer_Operator, &rp.MakeCrossHair(2, true), BLUE, 5);
			CRavidRect<double> rr(rpg.GetRect());
			rr.Inflate(5,5,5,5);
			rpg.Inflate(1,1,1,1);
			if(nMaskingShape == 0)  // 사각형으로 마스킹
			{
				bReturn = MaskWithRect(pImage, 0, rr);
				pImageView->DrawShape(ELayer_Administrator, &rr, VIOLET, 3);

			}
			else                    // 삼각형으로 마스킹
			{
				bReturn = Mask(pImage, 0, rr, rpg);
				pImageView->DrawShape(ELayer_Administrator, &rpg, VIOLET, 3);
			}
// 			pImageView->DrawShape(ELayer_Operator, &rr, VIOLET, 5);

		}
		

	} while (false);

	return bReturn;
}

bool CInspection::Mask_Several(CRavidImage* pImage, BYTE cGV, CRavidRect<int> rrOuter, CRavidPolygon* rpg, int nMaskCount)
{
	bool bReturn = false;

	do
	{
		if(!pImage)
			break;


		for(int i = 0; i < nMaskCount; i++)
		{
			if(!rpg[i].IsShapeValid())
				break;
		}


		for(int y = rrOuter.top; y < rrOuter.bottom; ++y)
		{
			for(int x = rrOuter.left; x < rrOuter.right; ++x)
			{
				if(!rpg[0].DoesIntersect(CRavidPoint<double>(x, y)) && rpg[1].DoesIntersect(CRavidPoint<double>(x, y)))
					pImage->SetValue(x, y, cGV);;

				if(!rpg[2].DoesIntersect(CRavidPoint<double>(x, y)) && rpg[3].DoesIntersect(CRavidPoint<double>(x, y)))
					pImage->SetValue(x, y, cGV);;

			}
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CInspection::MaskProcessImage(CRavidImage * pImage, CRavidGeometry * pRGOuter, CRavidGeometry * pRGInner)
{
	bool bReturn = false;

	do 
	{
		if(!pImage)
			break;

		if(pRGOuter)
			pImage->Mask(255, pRGOuter);

		if(pRGInner)
			pImage->Mask(0, pRGInner);

		bReturn = true;
	}
	while(false);

	return bReturn;
}

double CInspection::GetAverage(CRavidImage * pImage, CRavidImage * pImageProcess, CRavidRect<int> rrROI)
{
	double dblReturn = 0.;

	do 
	{
		if(!pImage)
			break;

		if(!pImageProcess)
			break;

		rrROI.left = __max(rrROI.left, 0);
		rrROI.top = __max(rrROI.top, 0);
		rrROI.right = __min(rrROI.right, (int)pImage->GetSizeX() - 1);
		rrROI.bottom = __min(rrROI.bottom, (int)pImage->GetSizeY() - 1);

		int nCount = 0;
		BYTE cGV = 0;
		
		for(int y = rrROI.top; y <= rrROI.bottom; ++y)
		{
			for(int x = rrROI.left; x <= rrROI.right; ++x)
			{
				pImageProcess->GetValue(x, y, &cGV);

				if(!cGV)
					continue;

				pImage->GetValue(x, y, &cGV);

				dblReturn += cGV;
				++nCount;
			}
		}
	
		if(nCount)
			dblReturn /= (double)nCount;
	}
	while(false);

	return dblReturn;
}

bool CInspection::Mask(CRavidImage * pImage, CRavidImage * pImageProcess, CRavidRect<int> rrROI, BYTE cMaskGV)
{
	bool bReturn = false;

	do
	{
		if(!pImage)
			break;

		if(!pImageProcess)
			break;

		rrROI.left = __max(rrROI.left, 0);
		rrROI.top = __max(rrROI.top, 0);
		rrROI.right = __min(rrROI.right, (int)pImage->GetSizeX() - 1);
		rrROI.bottom = __min(rrROI.bottom, (int)pImage->GetSizeY() - 1);

		BYTE cGV = 0;

		for(int y = rrROI.top; y <= rrROI.bottom; ++y)
		{
			for(int x = rrROI.left; x <= rrROI.right; ++x)
			{
				pImageProcess->GetValue(x, y, &cGV);
				if(cGV)
					continue;

				pImage->SetValue(x, y, cMaskGV);
			}
		}
	}
	while(false);

	return bReturn;
}

bool CInspection::Mask_Limitation(CRavidImage * pImage, CRavidRect<int> rrROI, BYTE cLimitationHighGV, BYTE cLimitationLowGV, BYTE cMaskGV)
{
	bool bReturn = false;

	do
	{
		if(!pImage)
			break;


		rrROI.left = __max(rrROI.left, 0);
		rrROI.top = __max(rrROI.top, 0);
		rrROI.right = __min(rrROI.right, (int)pImage->GetSizeX() - 1);
		rrROI.bottom = __min(rrROI.bottom, (int)pImage->GetSizeY() - 1);

		BYTE cGV = 0;

		for(int y = rrROI.top; y <= rrROI.bottom; ++y)
		{
			for(int x = rrROI.left; x <= rrROI.right; ++x)
			{
				pImage->GetValue(x, y, &cGV);
				
				if(cGV >= cLimitationLowGV && cGV <= cLimitationHighGV)
				{
					pImage->SetValue(x, y, cMaskGV);
				}
			}
		}
	}
	while(false);

	return bReturn;
}


bool CInspection::FindDoughnutDefect(CRavidImage* pImage, CRavidImage* pImageProcess, long nGVOffset, double dblExtend, int nCount, _In_ _Out_ std::vector<SDefectInfo*> vctArea)
{
	bool bReturn = false;

	do
	{
		if(!pImage)
			break;

		for(SDefectInfo* sInfo : vctArea)
		{
			CRavidRect<int> rrROI;

			rrROI = sInfo->rqMECR;

			rrROI.Inflate(dblExtend, dblExtend);

			rrROI.left = __max(rrROI.left, 0);
			rrROI.top = __max(rrROI.top, 0);
			rrROI.right = __min(rrROI.right, (int)pImage->GetSizeX() - 1);
			rrROI.bottom = __min(rrROI.bottom, (int)pImage->GetSizeY() - 1);


			CMultipleVariable mvMedian;
			pImage->GetMedian(mvMedian, &rrROI);

			if(mvMedian.GetSize() < 1)
				break;

			double dblmvMedian = mvMedian.GetAt(0) + nGVOffset;

			BYTE cGV = 0;

			int nDoughnutCandidateCount = 0;
			for(int y = rrROI.top; y <= rrROI.bottom; ++y)
			{
				for(int x = rrROI.left; x <= rrROI.right; ++x)
				{
					pImage->GetValue(x, y, &cGV);

					if(cGV >= dblmvMedian)
					{
						pImageProcess->SetValue(x, y, (BYTE)255);
						nDoughnutCandidateCount ++;
					}
				}
			}

// 			if(nDoughnutCandidateCount > nCount)
// 				sInfo->bDoughnutDefect = true;
		}
	}
	while(false);

	return bReturn;
}


bool CInspection::CollisionDefect(std::vector<SDefectInfo*>& vctDefect, float fExtend, bool bCheckMinGV, bool bIsWhiteDefect)
{
	bool bRes = false;

	do
	{
		bool bChanged = true;

		while(bChanged)
		{
			bChanged = false;

			if(!vctDefect.size())
				break;

			int nDist1 = 0;
			int nDist2 = 0;

			for(auto iter1 = vctDefect.begin(); iter1 != vctDefect.end(); iter1 = vctDefect.begin() + nDist1)
			{
				nDist2 = nDist1 + 1;

				for(auto iter2 = vctDefect.begin() + nDist2; iter2 != vctDefect.end(); iter2 = vctDefect.begin() + nDist2)
				{
					if((*iter1)->nIndex == (*iter2)->nIndex)
					{
						++nDist2;
						continue;
					}

					CRavidRect<double> rr1 = (*iter1)->rrBoundary;
					CRavidRect<double> rr2 = (*iter2)->rrBoundary;

					rr1.Inflate(fExtend, fExtend, fExtend, fExtend);
					rr2.Inflate(fExtend, fExtend, fExtend, fExtend);

					SDefectInfo* pJudgeDI = *iter1;

					if(rr1.DoesIntersect(rr2))
					{
						if(!bCheckMinGV)
						{
							if((*iter1)->nIndex > (*iter2)->nIndex)
							{
								pJudgeDI = *iter2;
							}
						}
						else
						{
							if((*iter1)->dblGV < (*iter2)->dblGV)
							{
								if(bIsWhiteDefect)
								{
									pJudgeDI = *iter2;
								}
							}
							else
							{
								if(!bIsWhiteDefect)
								{
									pJudgeDI = *iter2;
								}
							}
						}

						if(pJudgeDI == *iter1)
						{
							delete *iter2;
						}
						else
						{
							delete *iter1;
							*iter1 = pJudgeDI;
						}

						nDist2 = (int)distance(vctDefect.begin(), iter2);
						vctDefect.erase(iter2);

						bChanged = true;
					}
					else
						++nDist2;
				}
				++nDist1;
			}
		}

		bRes = true;
	}
	while(false);

	return bRes;
}

bool CInspection::AllDefectOverlapCheck(std::vector<SDefectInfo*>& vctDefect)
{
	bool bRes = false;

	do
	{

		if(!vctDefect.size())
			break;

		int nDist1 = 0;
		int nDist2 = 0;

		for(auto iter1 = vctDefect.begin(); iter1 != vctDefect.end(); iter1 = vctDefect.begin() + nDist1)
		{
			nDist2 = nDist1 + 1;

			for(auto iter2 = vctDefect.begin() + nDist2; iter2 != vctDefect.end(); iter2 = vctDefect.begin() + nDist2)
			{

				if(PointInCheck((*iter2)->rpgContour, (*iter1)->rqMECR))
				{
					delete *iter2;

					nDist2 = (int)distance(vctDefect.begin(), iter2);
					vctDefect.erase(iter2);



				}
				else
					++nDist2;
			}
			++nDist1;
		}


		bRes = true;

	}
	while(false);

	return bRes;
}


bool CInspection::CollisionDefectMaxSize(std::vector<SDefectInfo*>& vctDefect, float fExtend, bool bCheckMinGV, bool bIsWhiteDefect)
{
	bool bRes = false;

	do
	{
		bool bChanged = true;

		while(bChanged)
		{
			bChanged = false;

			if(!vctDefect.size())
				break;

			int nDist1 = 0;
			int nDist2 = 0;

			int nMaxDepth = -1;
			double dblMaxCompareGV = 0.;
//#pragma omp parallel for
			for(auto iter1 = vctDefect.begin(); iter1 != vctDefect.end(); iter1 = vctDefect.begin() + nDist1)
			{
				nDist2 = nDist1 + 1;

				for(auto iter2 = vctDefect.begin() + nDist2; iter2 != vctDefect.end(); iter2 = vctDefect.begin() + nDist2)
				{
					if((*iter1)->nIndex == (*iter2)->nIndex)
					{
						++nDist2;
						continue;
					}

					CRavidRect<double> rr1 = (*iter1)->rrBoundary;
					CRavidRect<double> rr2 = (*iter2)->rrBoundary;

					rr1.Inflate(fExtend, fExtend, fExtend, fExtend);
					rr2.Inflate(fExtend, fExtend, fExtend, fExtend);

				
					if(rr1.DoesIntersect(rr2) /*|| PointInCheck((*iter1)->rpgContour, rr2) || PointInCheck((*iter2)->rpgContour, rr1)*/)
					{


						if(!bCheckMinGV)
						{
							if((*iter1)->nIndex > (*iter2)->nIndex)
							{
								nMaxDepth = (*iter2)->nIndex;
								dblMaxCompareGV = (*iter2)->dblGV;
							}
							else
							{
								nMaxDepth = (*iter1)->nIndex;
								dblMaxCompareGV = (*iter1)->dblGV;
							}
						}
						else
						{
							if((*iter1)->dblGV < (*iter2)->dblGV)
							{
								if(!bIsWhiteDefect)
								{
									nMaxDepth = (*iter1)->nIndex;
									dblMaxCompareGV = (*iter1)->dblGV;
								}
								else
								{
									nMaxDepth = (*iter2)->nIndex;
									dblMaxCompareGV = (*iter2)->dblGV;
								}
							}
							else
							{
								if(!bIsWhiteDefect)
								{
									nMaxDepth = (*iter2)->nIndex;
									dblMaxCompareGV = (*iter2)->dblGV;
								}
								else
								{
									nMaxDepth = (*iter1)->nIndex;
									dblMaxCompareGV = (*iter1)->dblGV;
								}
							}
						}

						if((*iter1)->dblWidth < (*iter2)->dblWidth)
						{
							delete *iter1;
							*iter1 = *iter2;
						}
						else
						{
							delete *iter2;
						}

						(*iter1)->dblGV = dblMaxCompareGV;
						(*iter1)->nIndex = nMaxDepth;

						nDist2 = (int)distance(vctDefect.begin(), iter2);
						vctDefect.erase(iter2);

						bChanged = true;
					}
					else
						++nDist2;
				}
				++nDist1;
			}
		}

		bRes = true;
	}
	while(false);

	return bRes;
}

bool CInspection::PointInCheck(_In_ CRavidPoint<double> rp, _In_ CRavidQuadrangle<double> rqd)
{
	int nCollision = 0;

	for(int i = 0; i < 4; ++i)
	{
		CRavidPoint<double> rpMan1 = rqd.rpPoints[i];
		CRavidPoint<double> rpMan2 = rqd.rpPoints[(i + 1) % 4];

		double dblTop = min(rpMan1.y, rpMan2.y);
		double dlbBottom = max(rpMan1.y, rpMan2.y);

		// Y 안에 들어오지 않는 포인트는 넘김.
		if(rp.y < dblTop || rp.y >= dlbBottom)
			continue;

		double dblCurrentX = 0.f;

		// 직선의 방정식 .. X 위치 체크 
		// 검사 Point X 선상에 직선 선상 X 를 구하여 
		// 직선 선상 X 가 크면 후보. 후보가 2개 이상이면 .안에 있다고 판단.
		if(rpMan1.y != rpMan2.y)
		{
			double dlbGradient = (rpMan2.x - rpMan1.x) / (rpMan2.y - rpMan1.y);
			dblCurrentX = ((rp.y - rpMan1.y) * dlbGradient) + rpMan1.x;
		}
		else
			dblCurrentX = rpMan1.x;

		if(dblCurrentX >= rp.x)
			++nCollision;
	}

	return (bool)(nCollision % 2);
}

bool CInspection::PointInCheck(_In_ CRavidPolygon rpg, _In_ CRavidQuadrangle<double> rqd)
{
	bool bReturn = true;

	for(int n = 0; n < rpg.GetCount(); n++)
	{
		CRavidPoint<double> rp;

		rp = rpg.GetAt(n)->GetPointStruct();

		if(!PointInCheck(rp, rqd))
			bReturn &= false;
	}

	return bReturn;
}

bool CInspection::PointInCheck(_In_ CRavidPoint<double> rp, _In_ CRavidPolygon rpg)
{
	int nCollision = 0;

	for(int i = 0; i < rpg.GetCount(); i++)
	{
		CRavidPoint<double> rpMan1 = rpg.GetAt(i)->GetPointStruct();
		CRavidPoint<double> rpMan2 = rpg.GetAt((i + 1) % rpg.GetCount())->GetPointStruct();

		double dblTop = min(rpMan1.y, rpMan2.y);
		double dlbBottom = max(rpMan1.y, rpMan2.y);

		// Y 안에 들어오지 않는 포인트는 넘김.
		if(rp.y < dblTop || rp.y >= dlbBottom)
			continue;

		double dblCurrentX = 0.f;

		// 직선의 방정식 .. X 위치 체크 
		// 검사 Point X 선상에 직선 선상 X 를 구하여 
		// 직선 선상 X 가 크면 후보. 후보가 2개 이상이면 .안에 있다고 판단.
		if(rpMan1.y != rpMan2.y)
		{
			double dlbGradient = (rpMan2.x - rpMan1.x) / (rpMan2.y - rpMan1.y);
			dblCurrentX = ((rp.y - rpMan1.y) * dlbGradient) + rpMan1.x;
		}
		else
			dblCurrentX = rpMan1.x;

		if(dblCurrentX >= rp.x)
			++nCollision;
	}

	return (bool)(nCollision % 2);
}


bool CInspection::EraseSmallDefect(std::vector<SDefectInfo*>& vctDefect1, std::vector<SDefectInfo*>& vctDefect2)
{
	bool bReturn = false;

	do 
	{

		CModelInfo* pModel = nullptr;

		for(size_t i = 0; i < CModelManager::GetModelInfoCount(); ++i)
		{
			CModelInfo* pModelL = CModelManager::GetModelInfo((int)i);
			if(!pModelL)
				continue;

			if(!pModelL->IsOpen())
				continue;

			pModel = pModelL;
			break;
		}

		SdefaultModelParam sParam;
		pModel->GetData(&sParam, sizeof(SdefaultModelParam));


		int nIter1 = 0;

		for(auto iter1 = vctDefect1.begin(); iter1 != vctDefect1.end(); iter1 = vctDefect1.begin() + nIter1)
		{
			bool bErase1 = false;

			do
			{
				SDefectInfo* pDI1 = *iter1;
				if(!pDI1)
				{
					bErase1 = true;
					break;
				}

				CRavidRect<int> rr1 = pDI1->rrBoundary;

				int nIter2 = 0;

				for(auto iter2 = vctDefect2.begin(); iter2 != vctDefect2.end(); iter2 = vctDefect2.begin() + nIter2)
				{
					bool bErase2 = false;

					do
					{
						SDefectInfo* pDI2 = *iter2;
						if(!pDI2)
						{
							bErase2 = true;
							break;
						}

						CRavidRect<int> rr2 = pDI2->rrBoundary;

						if(!rr1.DoesIntersect(rr2) && !rr2.DoesIntersect(rr1))
							break;

						if(pDI1->dblGV >= pDI2->dblGV)
						{
							if(pDI1->dblWidth >= pDI2->dblWidth * sParam.dblSortAcceptSizeRatio)
							{
								bErase2 = true;
							}
						}
						else
						{
							if(pDI2->dblWidth >= pDI1->dblWidth * sParam.dblSortAcceptSizeRatio)
							{
								bErase1 = true;
								break;
							}
						}
					}
					while(false);

					if(bErase1)
						break;

					if(bErase2)
					{
						if(*iter2)
						{
							delete *iter2;
							*iter2 = nullptr;
						}

						vctDefect2.erase(iter2);
					}
					else
					{
						++nIter2;
					}
				}
			}
			while(false);

			if(bErase1)
			{
				if(*iter1)
				{
					delete *iter1;
					*iter1 = nullptr;
				}

				vctDefect1.erase(iter1);
			}
			else
			{
				++nIter1;
			}
		}


		bReturn = true;

	} while (false);

	return bReturn;
}

bool CInspection::EraseOverlapDefect(std::vector<SDefectInfo*>& vctDefect1, std::vector<SDefectInfo*>& vctDefect2)
{
	bool bReturn = false;

	do
	{

		CModelInfo* pModel = nullptr;

		for(size_t i = 0; i < CModelManager::GetModelInfoCount(); ++i)
		{
			CModelInfo* pModelL = CModelManager::GetModelInfo((int)i);
			if(!pModelL)
				continue;

			if(!pModelL->IsOpen())
				continue;

			pModel = pModelL;
			break;
		}

		SdefaultModelParam sParam;
		pModel->GetData(&sParam, sizeof(SdefaultModelParam));

		for(auto& iter1 : vctDefect1)
		{
			if(!iter1)
				continue;

			int nIter2 = 0;

			for(auto iter2 = vctDefect2.begin(); iter2 != vctDefect2.end(); iter2 = vctDefect2.begin() + nIter2)
			{
				bool bErase = false;

				SDefectInfo* pDI = *iter2;

				do
				{
					if(!pDI)
					{
						bErase = true;
						break;
					}

					if(PointInCheck(iter1->rpgContour, pDI->rqMECR) /*|| PointInCheck(pDI->rpgContour, iter1->rqMECR)*/)
					{
						bErase = true;
						break;
					}

					if(!iter1->rrBoundary.DoesIntersect(pDI->rrBoundary) && !pDI->rrBoundary.DoesIntersect(iter1->rrBoundary))
						break;
					
					if(!iter1->rqMECR.DoesIntersect(pDI->rqMECR))
						break;


					if(iter1->dblWidth >= pDI->dblWidth * sParam.dblSortAcceptSizeRatio)
						bErase = true;
				}
				while(false);

				if(bErase)
				{
					if(pDI)
					{
						delete pDI;
						pDI = nullptr;
					}

					vctDefect2.erase(iter2);
				}
				else
				{
					++nIter2;
				}
			}
			
		}

		


		bReturn = true;

	}
	while(false);

	return bReturn;
}

bool CInspection::JudgeDefect(double dblWidth, double dblHeight, double dblArea, std::vector<SDefectInfo*>& vctSrc, std::vector<SDefectInfo*>& vctDst)
{
	bool bReturn = true;

	for(auto& iter : vctSrc)
	{
		if(!iter)
			continue;

		if(iter->dblWidth > dblWidth || iter->dblHeight > dblHeight)
		{
			bReturn = false;
			vctDst.push_back(iter);
		}
	}

	return bReturn;
}

bool CInspection::JudgeDefectCondition1(double dblWidth, std::vector<SDefectInfo*>& vctSrc, std::vector<SDefectInfo*>& vctDst)
{
	bool bReturn = true;

	for(auto& iter : vctSrc)
	{
		if(!iter)
			continue;


		if(iter->dblWidth > dblWidth)
		{
			bReturn = false;
			vctDst.push_back(iter);
		}
		
	}

	return bReturn;
}

bool CInspection::JudgeDefectCondition2(double dblWidth, int nCount, std::vector<SDefectInfo*>& vctSrc, std::vector<SDefectInfo*>& vctDst)
{
	bool bReturn = true;

	for(auto& iter : vctSrc)
	{
		if(!iter)
			continue;

	
		if(iter->dblWidth > dblWidth)
			vctDst.push_back(iter);
		
	}

	if(vctDst.size() && (int)vctDst.size() >= nCount)
	{
		bReturn = false;
	}
	else
	{
		vctDst.clear();
	}

	return bReturn;
}

bool CInspection::JudgeDefectCondition3(double dblWidth, int nCount, double dblDistance, std::vector<SDefectInfo*>& vctSrc, std::vector<SCommunityDefectInfo>& vctDst)
{
	bool bReturn = true;

	std::vector<SDefectInfo*> vctCandidate;

	for(auto& iter : vctSrc)
	{
		if(!iter)
			continue;

	
		if(iter->dblWidth > dblWidth)
			vctCandidate.push_back(iter);
		
		 
	}

	while(true)
	{
		if(!vctCandidate.size())
			break;

		auto iterFirst = vctCandidate.begin();
		if(!*iterFirst)
		{
			vctCandidate.erase(iterFirst);
			continue;
		}

		std::vector<CRavidPoint<int>> vctCenter;

		SCommunityDefectInfo sCDI;
		sCDI.vctDefect.push_back(*iterFirst);

		vctCenter.push_back((*iterFirst)->rrBoundary.GetCenter());

		vctCandidate.erase(iterFirst);

		for(auto& iter : vctCandidate)
		{
			if(!iter)
				continue;

			CRavidPoint<double> rp = iter->rrBoundary.GetCenter();

			bool bInclude = true;

			for(auto& iter1 : vctCenter)
			{
				double dblD = rp.GetDistance(iter1);

				if(dblD > dblDistance)
				{
					bInclude = false;
					break;
				}
			}

			if(bInclude)
			{
				sCDI.vctDefect.push_back(iter);
				vctCenter.push_back(rp);
			}
		}

		if(sCDI.vctDefect.size() >= nCount)
		{
			std::vector<CRavidPoint<int>> vctConvexhull;

			GetConvexHull(vctCenter, vctConvexhull);

			CRavidRect<double> rrTemp;
			rrTemp.left = INT_MAX;
			rrTemp.top = INT_MAX;
			rrTemp.right = INT_MIN;
			rrTemp.bottom = INT_MIN;

			for(auto& iter : vctCenter)
			{
				rrTemp.left = __min(rrTemp.left, iter.x);
				rrTemp.top = __min(rrTemp.top, iter.y);
				rrTemp.right = __max(rrTemp.right, iter.x);
				rrTemp.bottom = __max(rrTemp.bottom, iter.y);
			}

			sCDI.rrCommunity = rrTemp;

			vctDst.push_back(sCDI);
		}
	}

	if(vctDst.size())
	{
		bReturn = false;
	}

	return bReturn;
}

bool CInspection::FindCellArea(CRavidImage *pImgInfo,  int nChannel,  CRavidQuadrangle<double>& rqdArea)
{
	bool bReturn = false;

	do
	{
		CEventHandlerMain* pEHEV = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));

		if(!pEHEV)
			break;

		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + nChannel));

		if(!pEHEV)
			break;

		if(!pImgInfo)
			break;


		SdefaultModelParam sParam = pEHEV->GetModelParameters();


		CLogManager::Write(0, _T("[Inspection] Find Cell Start"));
		//////////////////////////////////////////////////////
		// Initial Variable


		CRavidQuadrangle<double> rqImageSize;

		RECT rImageArea;
		rImageArea.left = 10;
		rImageArea.top = 10;
		rImageArea.right = (LONG)pImgInfo->GetSizeX() - 10;
		rImageArea.bottom = (LONG)pImgInfo->GetSizeX() - 10;
		rqImageSize.SetQuadrangle(rImageArea);
			
		CUtil util;

	
		CString *strTeaching[CDefinition::eTeachingBoxDir_Count];

		for(int i = 0; i < CDefinition::eTeachingBoxDir_Count; i++)
		{
			if(nChannel == 0)
				strTeaching[i] = &sParam.strCellFindAreaBox1[i];
			else
				strTeaching[i] = &sParam.strCellFindAreaBox2[i];
		}


		bool bCheck[CDefinition::eMaualTeachingBox_count] = {true,true,true,true};
		COLORREF cr[CDefinition::eMaualTeachingBox_count] = { RED, ORANGE, YELLOW, GREEN };

		CRavidLine<double> rlCell[CDefinition::eMaualTeachingBox_count];

		eFindLineDir eDirType[2][CDefinition::eMaualTeachingBox_count] = {
			{
				eFindLineDir_LeftToRight,
				eFindLineDir_TopToBottom,
				eFindLineDir_RightToLeft,
				eFindLineDir_BottomToTop
			},
			{
				eFindLineDir_LeftToRight,
				eFindLineDir_TopToBottom,
				eFindLineDir_RightToLeft,
				eFindLineDir_BottomToTop
			}
		};

		// Top , Bottom first ..

		int nIndexCov[2] = {eMaualTeachingBox_top, eMaualTeachingBox_Bottom};
 		for(int a = 0; a < 2; a ++)
		{
			int i = nIndexCov[a];

			CRavidPoint<double> rpTemp;
			CRavidRect<double> rrROI;

			util.ConvertRectStringToRectStructure(*strTeaching[i], &rrROI);

			SFindEdgeLine sLineParam;
			sLineParam.eTransitionType = CLineGauge::ETransitionType(sParam.nCellLineTransitionType[nChannel]);
			sLineParam.eTransitionChoice = CLineGauge::ETransitionChoice(sParam.nCellLineTransitionChoice[nChannel]);
			sLineParam.eFindDir = eDirType[nChannel][i];
			sLineParam.nThreshold = (long)sParam.dblCellLineThreshold[nChannel];
			sLineParam.nMinimumAmplitude = (long)sParam.dblCellLineMinimumAmplitude[nChannel];
			sLineParam.nThicknes = (long)sParam.dblCellLineThickness[nChannel];
			sLineParam.nSamplingStep = sParam.dblCellLineSamplingStep[nChannel];
			sLineParam.dblOutLiersThreshold = sParam.dblCellLineOutLiersThreshold[nChannel];
			sLineParam.nNumOfPass = (long)sParam.dblCellLineSetNumOfPass[nChannel];

			sLineParam.rqdROI = rrROI;

			CRavidRect<int> rr(rrROI);

			rr.left = __max(rr.left, 10);
			rr.top = __max(rr.top, 10);
			rr.right = __min(rr.right, (int)pImgInfo->GetSizeX() - 10);
			rr.bottom = __min(rr.bottom, (int)pImgInfo->GetSizeY() - 10);

			//pImageView->DrawShape(ELayer_Operator, &rr, BLUE);

			
			Ravid::Miscellaneous::CPerformanceCounter pc;

			if(!nChannel)
			{
				pc.Start();

				CRavidImage* pri = pHandler->GetGrayImage_SIMD(pImgInfo, rr, eColorImageType_G);

					
				//CLogManager::Write(ELogType_Main, _T("[Ins] Test1 : %0.3lf ms"), pc.GetElapsedTime());
				
				//pc.Start();

			    //pri = pHandler->GetGrayImage(pImgInfo, rr, eColorImageType_R);

				//CLogManager::Write(ELogType_Main, _T("[Ins] Test2 : %0.3lf ms"), pc.GetElapsedTime());

				rlCell[i] = GetLineGaugeMesurement(nChannel, pri, sLineParam);
			}
			else
			{
				rlCell[i] = GetLineGaugeMesurement(nChannel, pImgInfo, sLineParam);
			}

			bCheck[i] = rlCell[i].IsShapeValid();

			//pImageView->DrawShape(ELayer_Operator, &rlCell[i].GetInfiniteLine(), BLUE);
		}

		if(!bCheck[eMaualTeachingBox_top] || !bCheck[eMaualTeachingBox_Bottom])
			break;

		CRavidPoint<double> rpOffsetPos[2];
		CRavidLine<double> rlLeftVer(rqImageSize.rpPoints[0], rqImageSize.rpPoints[3]);
		CRavidLine<double> rlRightVer(rqImageSize.rpPoints[1], rqImageSize.rpPoints[2]);

		CRavidPoint<double> rpTemp[2];

		rpTemp[0] = rlCell[eMaualTeachingBox_top].GetInfiniteLine().GetIntersection(rlLeftVer);
		rpTemp[1] = rlCell[eMaualTeachingBox_Bottom].GetInfiniteLine().GetIntersection(rlLeftVer);

		CRavidLine<double> rlTemp;
		rlTemp.SetLine(rpTemp[0], rpTemp[1]);
		rpOffsetPos[0] = rlTemp.rpPoints[0] + rlTemp.GetUnitVector() * (rlTemp.GetScalar() / 2.f);



		rpTemp[0] = rlCell[eMaualTeachingBox_top].GetInfiniteLine().GetIntersection(rlRightVer);
		rpTemp[1] = rlCell[eMaualTeachingBox_Bottom].GetInfiniteLine().GetIntersection(rlRightVer);
		rlTemp.SetLine(rpTemp[0], rpTemp[1]);

		rpOffsetPos[1] = rlTemp.rpPoints[0] + rlTemp.GetUnitVector() * (rlTemp.GetScalar() / 2.f);

// 		pImageView->DrawShape(ELayer_Operator, &rpOffsetPos[0], BLUE);
// 		pImageView->DrawShape(ELayer_Operator, &rpOffsetPos[1], BLUE);

		nIndexCov[0] = eMaualTeachingBox_Left;
		nIndexCov[1] = eMaualTeachingBox_Right;

		for(int a = 0; a < 2; a++)
		{
			int i = nIndexCov[a];

			CRavidPoint<double> rpTemp;
			CRavidRect<double> rrROI;

			util.ConvertRectStringToRectStructure(*strTeaching[i], &rrROI);
// 			double dblHeight = rrROI.GetHeight();
// 			rrROI.top = rpOffsetPos[a].y - (dblHeight / 2.f);
// 			rrROI.bottom = rpOffsetPos[a].y + (dblHeight / 2.f);

			SFindEdgeLine sLineParam;
			sLineParam.eTransitionType = CLineGauge::ETransitionType(sParam.nCellLineTransitionType[nChannel]);
			sLineParam.eTransitionChoice = CLineGauge::ETransitionChoice(sParam.nCellLineTransitionChoice[nChannel]);
			sLineParam.eFindDir = eDirType[nChannel][i];
			sLineParam.nThreshold = (long)sParam.dblCellLineThreshold[nChannel];
			sLineParam.nMinimumAmplitude = (long)sParam.dblCellLineMinimumAmplitude[nChannel];
			sLineParam.nThicknes = (long)sParam.dblCellLineThickness[nChannel];
			sLineParam.nSamplingStep = sParam.dblCellLineSamplingStep[nChannel];
			sLineParam.dblOutLiersThreshold = sParam.dblCellLineOutLiersThreshold[nChannel];
			sLineParam.nNumOfPass = (long)sParam.dblCellLineSetNumOfPass[nChannel];
			

			CRavidRect<int> rr(rrROI);

			rr.left = __max(rr.left, 10);
			rr.top = __max(rr.top, 10);
			rr.right = __min(rr.right, (int)pImgInfo->GetSizeX() - 10);
			rr.bottom = __min(rr.bottom, (int)pImgInfo->GetSizeY() - 10);

			//pImageView->DrawShape(ELayer_Operator, &rr, BLUE);

			sLineParam.rqdROI = rr;


			if(!nChannel)
			{
				CRavidImage* pri = pHandler->GetGrayImage(pImgInfo, rr, eColorImageCalType_G);
				rlCell[i] = GetLineGaugeMesurement(nChannel, pri, sLineParam);
			}
			else
			{
				rlCell[i] = GetLineGaugeMesurement(nChannel, pImgInfo, sLineParam);
			}

			bCheck[i] = rlCell[i].IsShapeValid();

			//pImageView->DrawShape(ELayer_Operator, &rlCell[i].GetInfiniteLine(), BLUE);

		}

		if(!bCheck[eMaualTeachingBox_Left] || !bCheck[eMaualTeachingBox_Right])
			break;

		rqdArea.rpPoints[0] =
			rlCell[eMaualTeachingBox_Left].GetInfiniteLine().GetIntersection(rlCell[eMaualTeachingBox_top].GetInfiniteLine());
		rqdArea.rpPoints[1] =
			rlCell[eMaualTeachingBox_Right].GetInfiniteLine().GetIntersection(rlCell[eMaualTeachingBox_top].GetInfiniteLine());
		rqdArea.rpPoints[2] =
			rlCell[eMaualTeachingBox_Right].GetInfiniteLine().GetIntersection(rlCell[eMaualTeachingBox_Bottom].GetInfiniteLine());
		rqdArea.rpPoints[3] =
			rlCell[eMaualTeachingBox_Left].GetInfiniteLine().GetIntersection(rlCell[eMaualTeachingBox_Bottom].GetInfiniteLine());



		bReturn = true;

	}
	while(false);

	return bReturn;
}

std::vector<CRavidQuadrangle<double>> CInspection::FindCellInspectionAreaInside(CRavidImage * pImgInfo, int nChannel, CImageCameraView * pImageView)
{
	std::vector<CRavidQuadrangle<double>> vecReturn;

	do
	{
		CEventHandlerMain* pEHEV = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));


		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + nChannel));

		if(!pEHEV)
			break;

		if(!pImgInfo)
			break;

		if(!pImageView)
			break;

		SdefaultModelParam sParam = pEHEV->GetModelParameters();

		CPerformanceCounter pc;
		pc.Start();
		CLogManager::Write(0, _T("[Inspection] FindCellAreas NoTaper Inside Start"));
		//////////////////////////////////////////////////////////////////////////////////////////
		// cc 
 		
		CMultipleVariable rmvThreshold;
		if(pImgInfo->IsColor())
		{
			rmvThreshold.AddValue(0);
			rmvThreshold.AddValue(sParam.cCellGV[nChannel]); //Color G value
			rmvThreshold.AddValue(0);
		}
		else
		{
			double dbGV = (double)sParam.cCellGV[nChannel];
			rmvThreshold.AddValue(dbGV);
		}

		CConnectedComponent cc;

		cc.SetSingleThreshold(rmvThreshold);
		cc.SetLogicalCondition(ELogicalCondition_GreaterEqual);

		if(pImgInfo->IsColor())
			cc.SetMultipleChannelCondition(CConnectedComponent::EMultipleChannelCondition_1and2and3);
		else
			cc.SetMultipleChannelCondition(CConnectedComponent::EMultipleChannelCondition_1);
		
		cc.Encode(pImgInfo, nullptr);


		double dblCellValue0 = 1000.f;
		cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxWidth, dblCellValue0, ELogicalCondition_Less);
		double dblCellValue1 = 1000.f;
		cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxHeight, dblCellValue1, ELogicalCondition_Less);

		std::vector<CRavidQuadrangle<double>> vecMER;

// 		CRavidGeometryArray rgaContour;
// 		cc.GetContour(rgaContour);

		vecMER = cc.GetMinimumEnclosingRectangle();
		const int nLoopCount = (int)vecMER.size();

		if(nLoopCount == 4)
		{	
			vecReturn = vecMER;

			for(CRavidQuadrangle<int> rqd : vecReturn)
			{
				pImageView->DrawShape(ELayer_Developer, &rqd, BLUE, 1);
			}
		}

		//CLogManager::Write(0, _T("[Inspection] Inspect elapsed time End : %0.3lf ms"), pc.GetElapsedTime());
	}
	while(false);

	return vecReturn;
}

std::vector<CRavidQuadrangle<double>> CInspection::FindCellInspectionAreaOutskirt(CRavidImage * pImgInfo, int nChannel, CImageCameraView * pImageView)
{
	std::vector<CRavidQuadrangle<double>> vecReturn;

	do
	{
		CEventHandlerMain* pEHEV = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));


		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + nChannel));

		if(!pEHEV)
			break;

		if(!pImgInfo)
			break;

		if(!pImageView)
			break;

		SdefaultModelParam sParam = pEHEV->GetModelParameters();

		//CPerformanceCounter pc;
		//pc.Start();
		CLogManager::Write(0, _T("[Inspection] FindCellAreas NoTaper Outskirt Start"));
		//////////////////////////////////////////////////////////////////////////////////////////
		// cc 

		CRavidRect<double> rrArea[2];

		rrArea[0].left = 0;
		rrArea[0].top = 0;
		rrArea[0].right = 1333;
		rrArea[0].bottom = pImgInfo->GetSizeY();

		rrArea[1].left = 13430;
		rrArea[1].top = 0;
		rrArea[1].right = pImgInfo->GetSizeX();
		rrArea[1].bottom = pImgInfo->GetSizeY();

		CMultipleVariable rmvThreshold;
		if(pImgInfo->IsColor())
		{
			rmvThreshold.AddValue(0);
			rmvThreshold.AddValue(sParam.cCellGV[nChannel]); //Color G value
			rmvThreshold.AddValue(0);
		}
		else
		{
			double dbGV = (double)sParam.cCellGV[nChannel];
			rmvThreshold.AddValue(dbGV);
		}

		CConnectedComponent cc;

		cc.SetSingleThreshold(rmvThreshold);
		cc.SetLogicalCondition(ELogicalCondition_GreaterEqual);

		if(pImgInfo->IsColor())
			cc.SetMultipleChannelCondition(CConnectedComponent::EMultipleChannelCondition_1and2and3);
		else
			cc.SetMultipleChannelCondition(CConnectedComponent::EMultipleChannelCondition_1);


		int nOffset = 300; // unit : pixel
		for(int i = 0; i < 2; i++)
		{
			cc.Encode(pImgInfo, &rrArea[i]);
			pImageView->DrawShape(ELayer_Developer, &rrArea[i], WHITE, 3);

			double dblCellValue0 = 150.f;
			cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxWidth, dblCellValue0, ELogicalCondition_Less);
			double dblCellValue1 = 1500.f;
			cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxHeight, dblCellValue1, ELogicalCondition_Less);

// 			CRavidGeometryArray rgaContour;
// 			cc.GetContour(rgaContour);

			std::vector<CRavidRect<int>> vct;
			vct = cc.GetBoundary();

			const int nLoopCount = (int)vct.size();

			if(nLoopCount == 1)
			{
				for(CRavidRect<int> rr : vct)
				{
					if(i == 0)
						rr.left = rr.right - nOffset;
					else
						rr.right = rr.left + nOffset;

					pImageView->DrawShape(ELayer_Developer, &rr, BLUE, 1);

					vecReturn.push_back(CRavidQuadrangle<double>(rr));
				}
			}
		}

		//CLogManager::Write(0, _T("[Inspection] Inspect elapsed time End : %0.3lf ms"), pc.GetElapsedTime());

	}
	while(false);

	return vecReturn;
}

CRavidLine<double> CInspection::GetLineTapeOverlap(CRavidImage *pImgInfo, int nChannel, CImageCameraView * pImageView, std::vector<CRavidQuadrangle<double>> vecNotapLine, int nPosition, bool bTop)
{
	CRavidLine<double> rlReturn;

	do 
	{
		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + nChannel));

		if(!pImgInfo)
			break;

		if(!pImageView)
			break;

		if(!pHandler)
			break;

		if(nPosition < 0)
			break;

		if(nPosition >= vecNotapLine.size())
			break;

		CRavidPoint<double> rpTapePosMoveOffset;
		//y+700
		rpTapePosMoveOffset.x = 370;
		rpTapePosMoveOffset.y = 1540; //750 Test 시료..

		if(!bTop)
			rpTapePosMoveOffset.y += 450;

		double dblSizeOffsetX = 300;
		double dblSizeOffsetY = 150;

		CRavidPoint<double> rp;
		rp = vecNotapLine[nPosition].rpPoints[1];

		rp += rpTapePosMoveOffset;

		CRavidRect<double> rrArea;
		
		rrArea.left = rp.x - dblSizeOffsetX;
		rrArea.top = rp.y - dblSizeOffsetY;
		rrArea.right = rp.x + dblSizeOffsetX;
		rrArea.bottom = rp.y + dblSizeOffsetY;
		
		pImageView->DrawShape(ELayer_Developer, &rrArea, YELLOW);


		SFindEdgeLine sLineParam;
		sLineParam.eTransitionType = CLineGauge::ETransitionType_WB;
		sLineParam.eTransitionChoice = CLineGauge::ETransitionChoice_LargestAmplitude;
		sLineParam.eFindDir = bTop ? eFindLineDir_TopToBottom : eFindLineDir_BottomToTop;
		sLineParam.nThreshold = (long)7;
		sLineParam.nSmoothing = 1;
		sLineParam.nMinimumAmplitude = (long)0;
		sLineParam.nThicknes = (long)5;
		sLineParam.nSamplingStep = 1;
		sLineParam.dblOutLiersThreshold = 1;
		sLineParam.nNumOfPass = (long)2;
		sLineParam.rqdROI = rrArea;
		//sLineParam.bRavidLineUse = true;
		CRavidLine<double> rlTemp;

		if(pImgInfo->IsColor())
		{
			eColorImageCalType eColor = eColorImageCalType_G;
			CRavidImage* pri = pHandler->GetGrayImage(pImgInfo, rrArea, eColor);
			rlTemp = GetLineGaugeMesurement(nChannel, pri, sLineParam);
		}
		else
		{
			rlTemp = GetLineGaugeMesurement(nChannel, pImgInfo, sLineParam);
		}


// 		if(rlTemp.IsShapeValid())
// 			rlReturn = rlTemp;

		double dblAngle = rlTemp.GetAngle();

		bool bAngleValid = true;
		if(dblAngle >= 5 || dblAngle <= -5)
			bAngleValid = false;

		if(rlTemp.IsShapeValid() && bAngleValid)
			rlReturn = rlTemp;
		else // 실패 시 영역센터를 반환한다 ( 찾은 엣지랑 비슷함 ) jhjo 230619
			rlReturn.SetLine(rrArea.GetCenter(), 0.f);



	} while (false);

	return rlReturn;
}

CRavidLine<double> CInspection::GetLineTapeOverlapSide(CRavidImage * pImgInfo, int nChannel, CImageCameraView * pImageView, std::vector<CRavidQuadrangle<double>> vecNotapLine, int nPosition, bool bLeft)
{
	CRavidLine<double> rlReturn;

	do
	{
		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + nChannel));

		if(!pImgInfo)
			break;

		if(!pImageView)
			break;

		if(!pHandler)
			break;

		if(nPosition < 0)
			break;

		if(nPosition >= vecNotapLine.size())
			break;

		CRavidPoint<double> rpTapePosMoveOffset;
		rpTapePosMoveOffset.x = 0;
		//2호기 
		rpTapePosMoveOffset.y = 1740;

		if(!bLeft)
			rpTapePosMoveOffset.x = 780;

		double dblSizeOffset = 150;

		CRavidPoint<double> rp;
		rp = vecNotapLine[nPosition].rpPoints[1];

		rp += rpTapePosMoveOffset;

		CRavidRect<double> rrArea;

		rrArea.left = rp.x - dblSizeOffset;
		rrArea.top = rp.y - dblSizeOffset;
		rrArea.right = rp.x + dblSizeOffset;
		rrArea.bottom = rp.y + dblSizeOffset;

		pImageView->DrawShape(ELayer_Developer, &rrArea, YELLOW, 1, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DASH);


		SFindEdgeLine sLineParam;

		
		sLineParam.eTransitionType = CLineGauge::ETransitionType_BW;
		sLineParam.eTransitionChoice = CLineGauge::ETransitionChoice_Begin;
		sLineParam.eFindDir = !bLeft ? eFindLineDir_LeftToRight : eFindLineDir_RightToLeft;
		sLineParam.nThreshold = (long)15;
		sLineParam.nSmoothing = 0;
		sLineParam.nMinimumAmplitude = (long)1;
		sLineParam.nThicknes = (long)5;
		sLineParam.nSamplingStep = 5;
		sLineParam.dblOutLiersThreshold = 1;
		sLineParam.nNumOfPass = (long)2;
		sLineParam.rqdROI = rrArea;
		
		CRavidLine<double> rlTemp;

		if(pImgInfo->IsColor())
		{
			eColorImageCalType eColor = eColorImageCalType_G;
			CRavidImage* pri = pHandler->GetGrayImage(pImgInfo, rrArea, eColor);
			rlTemp = GetLineGaugeMesurement(nChannel, pri, sLineParam);
		}
		else
		{
			rlTemp = GetLineGaugeMesurement(nChannel, pImgInfo, sLineParam);
		}


		if(rlTemp.IsShapeValid())
			rlReturn = rlTemp;

	}
	while(false);

	return rlReturn;
}

std::vector<CInspection::SFindAreaInfo> CInspection::FindCellAreasNoTaper(CRavidImage * pImgInfo, int nChannel, CImageCameraView * pImageView)
{
	std::vector<SFindAreaInfo> vecReturn;

	do
	{
		CEventHandlerMain* pEHEV = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));

				
		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + nChannel));

		if(!pEHEV)
			break;

		if(!pImgInfo)
			break;

		if(!pImageView)
			break;

		if(!pHandler)
			break;

		SdefaultModelParam sParam = pEHEV->GetModelParameters();

// 		CPerformanceCounter pc;
// 		pc.Start();
		CLogManager::Write(0, _T("[Inspection] FindCellAreas NoTaper Areas Start"));
		//////////////////////////////////////////////////////////////////////////////////////////
		// cc 

		std::vector<CRavidQuadrangle<double>> vctInside;

		vctInside = FindCellInspectionAreaInside(pImgInfo, nChannel, pImageView);

		
		if(vctInside.empty())
			break;

		if(vctInside.size() != 4)
			break;

		std::sort(vctInside.begin(), vctInside.end(), [&](CRavidQuadrangle<double> s1, CRavidQuadrangle<double> s2) -> bool
		{
			return s1.GetCenter().x < s2.GetCenter().x;
		});

		std::vector<CRavidQuadrangle<double>> vctaOutskirt;

		
		vctaOutskirt = FindCellInspectionAreaOutskirt(pImgInfo, nChannel, pImageView);

		if(vctaOutskirt.empty())
			break;

		if(vctaOutskirt.size() != 2)
			break;

		std::vector<CRavidQuadrangle<double>> vecArea;

		for(int i = 0; i < 6; i ++)
		{
			CRavidQuadrangle<double> rqd;

			if(i == 0)
				rqd = vctaOutskirt[0];
			else
			{
				if(i < 5)
					rqd = vctInside[i - 1];
				else
					rqd = vctaOutskirt[1];
			}

			CString stryyy;
			stryyy.Format(_T("%d"), i);
			pImageView->DrawText(ELayer_Operator, &CRavidPoint<double>(rqd.rpPoints[0].x, rqd.rpPoints[0].y + 50), stryyy, YELLOW, BLACK);
			vecArea.push_back(rqd);
		}

// 		CMultipleVariable rmvThreshold;
// 		if(pImgInfo->IsColor())
// 		{
// 			rmvThreshold.AddValue(0);
// 			rmvThreshold.AddValue(sParam.cCellGV[nChannel]);
// 			rmvThreshold.AddValue(0);
// 		}
// 		else
// 		{
// 			double dbGV = (double)sParam.cCellGV[nChannel];
// 			rmvThreshold.AddValue(dbGV);
// 		}
// 
// 		CConnectedComponent cc;
// 
// 		cc.SetSingleThreshold(rmvThreshold);
// 		cc.SetLogicalCondition(ELogicalCondition_GreaterEqual);
// 
// 		if(pImgInfo->IsColor())
// 			cc.SetMultipleChannelCondition(CConnectedComponent::EMultipleChannelCondition_1and2and3);
// 		else
// 			cc.SetMultipleChannelCondition(CConnectedComponent::EMultipleChannelCondition_1);
// 
// // 		cc.SetSingleThreshold(rmvThreshold);
// // 		cc.SetLogicalCondition(ELogicalCondition_Greater);
// // 		cc.SetMultipleChannelCondition(CConnectedComponent::EMultipleChannelCondition_1);
// 		cc.Encode(pImgInfo, nullptr);
// //		CLogManager::Write(0, _T("[Inspection] Inspect elapsed time CConnectedComponent1 : %0.3lf ms"), pc.GetElapsedTime());
// //		CLogManager::Write(0, _T(" [%d] DefectConnectedComponent 1 : %0.3lf ms"),nIndex , pcIn.GetElapsedTime());
// 
// 		double dblCellValue0 = 1000.f;
// 		cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxWidth, dblCellValue0, ELogicalCondition_Less);
// 		double dblCellValue1 = 1000.f;
// 		cc.Filter(CConnectedComponent::EFilterItem_BoundingBoxHeight, dblCellValue1, ELogicalCondition_Less);
// 
// 		CRavidGeometryArray rgaContour;
// 		cc.GetContour(rgaContour);
// 
// 		const int nLoopCount = (int)rgaContour.GetCount();
// 
// 		std::vector<CRavidRect<int>> vctBD;
// 		vctBD.reserve(nLoopCount);
// 		vctBD = cc.GetBoundary();
// 
// 		for(CRavidRect<int> rr : vctBD)
// 			pImageView->DrawShape(ELayer_Operator, &rr, BLUE, 1);

		//////////////////////////////////////////////////////

		COLORREF cr[CDefinition::eTeachingBoxDir_Count] = { RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET };

		CRavidLine<double> rlCell[CDefinition::eTeachingBoxDir_Count];

		CLineGauge::ETransitionType eTrans[2] = {(CLineGauge::ETransitionType)ETransitionType_Bw, (CLineGauge::ETransitionType)ETransitionType_Bw};//2호기 수정
		CLineGauge::ETransitionChoice eChoice[2] = { (CLineGauge::ETransitionChoice)ETransitionChoice_LargestArea, (CLineGauge::ETransitionChoice)ETransitionChoice_LargestArea };

		eFindLineDir eDirType[2][CDefinition::eTeachingBoxDir_Count] = {
			{
				eFindLineDir_LeftToRight,
				eFindLineDir_RightToLeft,
				eFindLineDir_TopToBottom,
				eFindLineDir_LeftToRight,
				eFindLineDir_RightToLeft,
				eFindLineDir_BottomToTop
			},
			{		
				eFindLineDir_LeftToRight,
				eFindLineDir_RightToLeft,
				eFindLineDir_TopToBottom,
				eFindLineDir_LeftToRight,
				eFindLineDir_RightToLeft,
				eFindLineDir_BottomToTop
			}
		};

		bool bCheck = true;
		int nPosLoof = 0;

		if(vecArea.size() != 6)
			break;
 
		for(CRavidQuadrangle<double> rqd : vecArea)
		{
			if(!bCheck)
			{
				vecReturn.clear();
				break;
			}
		
			#pragma omp parallel for schedule(guided)
			for(int i = 0; i < CDefinition::eTeachingBoxDir_Count; i++)
			{
				CRavidRect<double> rrROI = GetTeachingBox(rqd, (eTeachingBoxDir)i);

				pImageView->DrawShape(ELayer_Developer, &rrROI, cr[i]);

				CRavidPoint<double> rpTemp;
				SFindEdgeLine sLineParam;
				sLineParam.eTransitionType = eTrans[nChannel];
				sLineParam.eTransitionChoice = eChoice[nChannel];
				sLineParam.eFindDir = eDirType[nChannel][i];
				sLineParam.nThreshold = (long)10;
				sLineParam.nMinimumAmplitude = (long)0;
				sLineParam.nThicknes = (long)10;
				sLineParam.nSamplingStep = 5;
				sLineParam.dblOutLiersThreshold = 2;
				sLineParam.nNumOfPass = (long)2;
				sLineParam.rqdROI = rrROI;


				//sLineParam.bRavidLineUse = true;
// 				CPerformanceCounter pc1;
// 				pc1.Start();
				CRavidRect<int> rr(rrROI);

				rr.left = __max(rr.left, 10);
				rr.top = __max(rr.top, 10);
				rr.right = __min(rr.right, (int)pImgInfo->GetSizeX() - 10);
				rr.bottom = __min(rr.bottom, (int)pImgInfo->GetSizeY() - 10);

				//최외각 엣지는 begin
		
				if(nPosLoof == 0 && eDirType[nChannel][i] == eFindLineDir_LeftToRight)
					sLineParam.eTransitionChoice =  (CLineGauge::ETransitionChoice)ETransitionChoice_NthFromBegin; 

				if(nPosLoof == 5 && eDirType[nChannel][i] == eFindLineDir_RightToLeft)
					sLineParam.eTransitionChoice = (CLineGauge::ETransitionChoice)ETransitionChoice_NthFromBegin;

				
				if(eDirType[nChannel][i] == eFindLineDir_TopToBottom || eDirType[nChannel][i] == eFindLineDir_BottomToTop)
					sLineParam.eTransitionChoice = (CLineGauge::ETransitionChoice)ETransitionChoice_NthFromBegin;

				if(pImgInfo->IsColor())
				{

					eColorImageCalType eColor = eColorImageCalType_G;
					if(sLineParam.eFindDir == eFindLineDir_BottomToTop || sLineParam.eFindDir == eFindLineDir_TopToBottom ||
					   (nPosLoof == 0 && eDirType[nChannel][i] == eFindLineDir_LeftToRight) ||
					   (nPosLoof == 5 && eDirType[nChannel][i] == eFindLineDir_RightToLeft))
					{
						sLineParam.eTransitionType = (CLineGauge::ETransitionType)ETransitionType_Wb;
						eColor = eColorImageCalType_R;
					}

					CRavidImage* pri = pHandler->GetGrayImage(pImgInfo, rr, eColor);
					//pri->Save(_T("C:\\Ravid\\TestColor2123.bmp"));
					rlCell[i] = GetLineGaugeMesurement(nChannel, pri, sLineParam);
				}
				else
				{

					if ((nPosLoof == 3 && eDirType[nChannel][i] == eFindLineDir_LeftToRight) || (nPosLoof == 3 && eDirType[nChannel][i] == eFindLineDir_RightToLeft))
						sLineParam.eTransitionChoice = (CLineGauge::ETransitionChoice)ETransitionChoice_NthFromEnd;

					rlCell[i] = GetLineGaugeMesurement(nChannel, pImgInfo, sLineParam);
				}
			

				bCheck &= rlCell[i].IsShapeValid();
				//CLogManager::Write(0, _T("[Inspection] Temp Line Time : %0.3lf ms"), pc1.GetElapsedTime());
//				pImageView->DrawShape(ELayer_Operator, &rlCell[i].GetInfiniteLine(), WHITE);
			}

			if(!bCheck)
				break;

			SFindAreaInfo sFind;
			CRavidQuadrangle<double> rqdResults;


			switch(nPosLoof)
			{
			case 0:
				{

					CRavidLine<double> rlTapeTop;
					rlTapeTop = GetLineTapeOverlap(pImgInfo, nChannel, pImageView, vecArea, 0, true);
					CRavidLine<double> rlTapeBottom;
					rlTapeBottom = GetLineTapeOverlap(pImgInfo, nChannel, pImageView, vecArea, 0, false);

					CRavidLine<double> rlTapeRight;
					rlTapeRight = GetLineTapeOverlapSide(pImgInfo, nChannel, pImageView, vecArea, 0, true);
	
					rqdResults.rpPoints[0] =
						rlCell[eTeachingBoxDir_SideTop1].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Top].GetInfiniteLine());
					rqdResults.rpPoints[1] =
						rlCell[eTeachingBoxDir_SideTop2].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Top].GetInfiniteLine());
					rqdResults.rpPoints[2] =
						rlCell[eTeachingBoxDir_SideTop2].GetInfiniteLine().GetIntersection(rlTapeTop.GetInfiniteLine());
					rqdResults.rpPoints[3] =
						rlCell[eTeachingBoxDir_SideTop1].GetInfiniteLine().GetIntersection(rlTapeTop.GetInfiniteLine());

					bCheck &= rqdResults.IsShapeValid();

					sFind.rqdDiv[0] = rqdResults;
					//vecReturn.push_back(rqdResults);
					pImageView->DrawShape(ELayer_Root, &rqdResults, RED, 2);

					rqdResults.rpPoints[0] =
						rlCell[eTeachingBoxDir_SideTop1].GetInfiniteLine().GetIntersection(rlTapeTop.GetInfiniteLine());
					//rqdResults.rpPoints[0].x = rlCell[eTeachingBoxDir_SideTop1].GetCenterOfGravity().x;/////////////////////////////

					rqdResults.rpPoints[1] =
						rlTapeRight.GetInfiniteLine().GetIntersection(rlTapeTop.GetInfiniteLine());
					rqdResults.rpPoints[2] =
						rlTapeRight.GetInfiniteLine().GetIntersection(rlTapeBottom.GetInfiniteLine());

					rqdResults.rpPoints[3] =
						rlCell[eTeachingBoxDir_SideBottom1].GetInfiniteLine().GetIntersection(rlTapeBottom.GetInfiniteLine());
					//rqdResults.rpPoints[3].x = rlCell[eTeachingBoxDir_SideBottom1].GetCenterOfGravity().x;/////////////////////////////

					bCheck &= rqdResults.IsShapeValid();

					sFind.rqdDiv[1] = rqdResults;
					//vecReturn.push_back(rqdResults);
					pImageView->DrawShape(ELayer_Root, &rqdResults, ORANGE, 2);

					rqdResults.rpPoints[0] =
						rlCell[eTeachingBoxDir_SideBottom1].GetInfiniteLine().GetIntersection(rlTapeBottom.GetInfiniteLine());
					rqdResults.rpPoints[1] =
						rlCell[eTeachingBoxDir_SideBottom2].GetInfiniteLine().GetIntersection(rlTapeBottom.GetInfiniteLine());
					rqdResults.rpPoints[2] =
						rlCell[eTeachingBoxDir_SideBottom2].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Bottom].GetInfiniteLine());
					rqdResults.rpPoints[3] =
						rlCell[eTeachingBoxDir_SideBottom1].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Bottom].GetInfiniteLine());

					bCheck &= rqdResults.IsShapeValid();

					sFind.rqdDiv[2] = rqdResults;


					pImageView->DrawShape(ELayer_Root, &rqdResults, BLUEVIOLET, 2);

				}
				break;
			case 1:
			case 2:
			case 3:
			case 4:
				{
				//ELayer_Root
					int nIndex = nPosLoof - 1;

					CRavidLine<double> rlTapeTop1;
					rlTapeTop1 = GetLineTapeOverlap(pImgInfo, nChannel, pImageView, vecArea, nIndex, true);
					CRavidLine<double> rlTapeBottom1;
					rlTapeBottom1 = GetLineTapeOverlap(pImgInfo, nChannel, pImageView, vecArea, nIndex, false);

					CRavidLine<double> rlTapeTop2;
					rlTapeTop2 = GetLineTapeOverlap(pImgInfo, nChannel, pImageView, vecArea, nIndex + 1, true);
					CRavidLine<double> rlTapeBottom2;
					rlTapeBottom2 = GetLineTapeOverlap(pImgInfo, nChannel, pImageView, vecArea, nIndex + 1, false);


					CRavidLine<double> rlTapeLeft;
					rlTapeLeft = GetLineTapeOverlapSide(pImgInfo, nChannel, pImageView, vecArea, nIndex, false);

					CRavidLine<double> rlTapeRight;
					rlTapeRight = GetLineTapeOverlapSide(pImgInfo, nChannel, pImageView, vecArea, nIndex + 1, true);

					rqdResults.rpPoints[0] =
						rlCell[eTeachingBoxDir_SideTop1].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Top].GetInfiniteLine());
					rqdResults.rpPoints[1] =
						rlCell[eTeachingBoxDir_SideTop2].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Top].GetInfiniteLine());
					rqdResults.rpPoints[2] =
						rlCell[eTeachingBoxDir_SideTop2].GetInfiniteLine().GetIntersection(rlTapeTop2.GetInfiniteLine());
					rqdResults.rpPoints[3] =
						rlCell[eTeachingBoxDir_SideTop1].GetInfiniteLine().GetIntersection(rlTapeTop1.GetInfiniteLine());

					bCheck &= rqdResults.IsShapeValid();

					sFind.rqdDiv[0] = rqdResults;
					//vecReturn.push_back(rqdResults);
					pImageView->DrawShape(ELayer_Root, &rqdResults, RED, 2);

					rqdResults.rpPoints[0] =
						rlTapeLeft.GetInfiniteLine().GetIntersection(rlTapeTop1.GetInfiniteLine());
					rqdResults.rpPoints[1] =
						rlTapeRight.GetInfiniteLine().GetIntersection(rlTapeTop2.GetInfiniteLine());
					rqdResults.rpPoints[2] =
						rlTapeRight.GetInfiniteLine().GetIntersection(rlTapeBottom2.GetInfiniteLine());
					rqdResults.rpPoints[3] =
						rlTapeLeft.GetInfiniteLine().GetIntersection(rlTapeBottom1.GetInfiniteLine());

					bCheck &= rqdResults.IsShapeValid();


					sFind.rqdDiv[1] = rqdResults;

					//vecReturn.push_back(rqdResults);
					pImageView->DrawShape(ELayer_Root, &rqdResults, ORANGE, 2);

					rqdResults.rpPoints[0] =
						rlCell[eTeachingBoxDir_SideBottom1].GetInfiniteLine().GetIntersection(rlTapeBottom1.GetInfiniteLine());
					rqdResults.rpPoints[1] =
						rlCell[eTeachingBoxDir_SideBottom2].GetInfiniteLine().GetIntersection(rlTapeBottom2.GetInfiniteLine());
					rqdResults.rpPoints[2] =
						rlCell[eTeachingBoxDir_SideBottom2].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Bottom].GetInfiniteLine());
					rqdResults.rpPoints[3] =
						rlCell[eTeachingBoxDir_SideBottom1].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Bottom].GetInfiniteLine());


					bCheck &= rqdResults.IsShapeValid();


					sFind.rqdDiv[2] = rqdResults;


					//vecReturn.push_back(rqdResults);
					pImageView->DrawShape(ELayer_Root, &rqdResults, BLUEVIOLET, 2);

				}
				break;
			case 5:
				{
					CRavidLine<double> rlTapeTop;
					rlTapeTop = GetLineTapeOverlap(pImgInfo, nChannel, pImageView, vecArea, 4, true);
					CRavidLine<double> rlTapeBottom;
					rlTapeBottom = GetLineTapeOverlap(pImgInfo, nChannel, pImageView, vecArea, 4, false);

					CRavidLine<double> rlTapeLeft;
					rlTapeLeft = GetLineTapeOverlapSide(pImgInfo, nChannel, pImageView, vecArea, 4, false);

					rqdResults.rpPoints[0] =
						rlCell[eTeachingBoxDir_SideTop1].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Top].GetInfiniteLine());
					rqdResults.rpPoints[1] =
						rlCell[eTeachingBoxDir_SideTop2].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Top].GetInfiniteLine());
					rqdResults.rpPoints[2] =
						rlCell[eTeachingBoxDir_SideTop2].GetInfiniteLine().GetIntersection(rlTapeTop.GetInfiniteLine());
					rqdResults.rpPoints[3] =
						rlCell[eTeachingBoxDir_SideTop1].GetInfiniteLine().GetIntersection(rlTapeTop.GetInfiniteLine());

					bCheck &= rqdResults.IsShapeValid();

					sFind.rqdDiv[0] = rqdResults;
					//vecReturn.push_back(rqdResults);
					pImageView->DrawShape(ELayer_Root, &rqdResults, RED, 2);

					rqdResults.rpPoints[0] =
						rlTapeLeft.GetInfiniteLine().GetIntersection(rlTapeTop.GetInfiniteLine());
					rqdResults.rpPoints[1] =
						rlTapeTop.GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_SideTop2].GetInfiniteLine());

				//	rqdResults.rpPoints[1].x = rlCell[eTeachingBoxDir_SideTop2].GetCenterOfGravity().x;/////////////////////////////

					rqdResults.rpPoints[2] =
						rlCell[eTeachingBoxDir_SideBottom2].GetInfiniteLine().GetIntersection(rlTapeBottom.GetInfiniteLine());

				//	rqdResults.rpPoints[2].x = rlCell[eTeachingBoxDir_SideBottom2].GetCenterOfGravity().x;/////////////////////////////

					rqdResults.rpPoints[3] =
						rlTapeLeft.GetInfiniteLine().GetIntersection(rlTapeBottom.GetInfiniteLine());

					bCheck &= rqdResults.IsShapeValid();

					sFind.rqdDiv[1] = rqdResults;
				//	vecReturn.push_back(rqdResults);
					pImageView->DrawShape(ELayer_Root, &rqdResults, ORANGE, 2);

					rqdResults.rpPoints[0] =
						rlCell[eTeachingBoxDir_SideBottom1].GetInfiniteLine().GetIntersection(rlTapeBottom.GetInfiniteLine());
					rqdResults.rpPoints[1] =
						rlCell[eTeachingBoxDir_SideBottom2].GetInfiniteLine().GetIntersection(rlTapeBottom.GetInfiniteLine());
					rqdResults.rpPoints[2] =
						rlCell[eTeachingBoxDir_SideBottom2].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Bottom].GetInfiniteLine());
					rqdResults.rpPoints[3] =
						rlCell[eTeachingBoxDir_SideBottom1].GetInfiniteLine().GetIntersection(rlCell[eTeachingBoxDir_Bottom].GetInfiniteLine());

					bCheck &= rqdResults.IsShapeValid();

					sFind.rqdDiv[2] = rqdResults;
					//vecReturn.push_back(rqdResults);
					pImageView->DrawShape(ELayer_Root, &rqdResults, BLUEVIOLET, 2);
				}
				break;
			default:
				break;
			}

			vecReturn.push_back(sFind);

			nPosLoof++;
		}

		//CLogManager::Write(0, _T("[Inspection] ----Inspect elapsed time End : %0.3lf ms"), pc.GetElapsedTime());

	}
	while(false);

	return vecReturn;
}

CRavidQuadrangle<double> CInspection::GetTeachingBox(CRavidQuadrangle<double> rqdSrc, eTeachingBoxDir eType)
{
	CRavidQuadrangle<double> rqdReturn;

	do 
	{
		double dblTolerance = 110.f;

		switch(eType)
		{
		case CDefinition::eTeachingBoxDir_SideTop1:
			{
				CRavidLine<double> rl;
				double dblMoveOffset = 200; // 기준 Position 얼마나 멀어질것인가.
				double dblHor = dblTolerance;
				double dblVer = 400.f;

				CRavidPoint<double> rp;
				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[3]);
				rp = rqdSrc.rpPoints[0] + rl.GetUnitVector() * dblMoveOffset;


				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[1]);

				rqdReturn.rpPoints[0] = rp + rl.GetUnitVector() * -dblHor;
				rqdReturn.rpPoints[1] = rp + rl.GetUnitVector() * dblHor;

				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[3]);
				rqdReturn.rpPoints[3] = rqdReturn.rpPoints[0] + rl.GetUnitVector() * dblVer;
				rqdReturn.rpPoints[2] = rqdReturn.rpPoints[1] + rl.GetUnitVector() * dblVer;
			}
			break;
		case CDefinition::eTeachingBoxDir_SideTop2:
			{
				CRavidLine<double> rl;
				double dblMoveOffset = 200; // 기준 Position 얼마나 멀어질것인가.
				double dblHor = dblTolerance;
				double dblVer = 400.f;

				CRavidPoint<double> rp;
				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[3]);
				rp = rqdSrc.rpPoints[1] + rl.GetUnitVector() * dblMoveOffset;


				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[1]);

				rqdReturn.rpPoints[0] = rp + rl.GetUnitVector() * -dblHor;
				rqdReturn.rpPoints[1] = rp + rl.GetUnitVector() * dblHor;

				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[3]);
				rqdReturn.rpPoints[3] = rqdReturn.rpPoints[0] + rl.GetUnitVector() * dblVer;
				rqdReturn.rpPoints[2] = rqdReturn.rpPoints[1] + rl.GetUnitVector() * dblVer;

			}
			break;
		case CDefinition::eTeachingBoxDir_Top:
			{
				CRavidLine<double> rlHor(rqdSrc.rpPoints[0], rqdSrc.rpPoints[1]);
				CRavidLine<double> rlVer(rqdSrc.rpPoints[0], rqdSrc.rpPoints[3]);

				double dblHor = rlHor.GetScalar() * 0.2;
				double dblVer = dblTolerance;
				 
				rqdReturn.rpPoints[0] = rqdSrc.rpPoints[0] + rlVer.GetUnitVector() * -dblVer;
				rqdReturn.rpPoints[1] = rqdSrc.rpPoints[1] + rlVer.GetUnitVector() * -dblVer;
				rqdReturn.rpPoints[3] = rqdSrc.rpPoints[0] + rlVer.GetUnitVector() * dblVer;
				rqdReturn.rpPoints[2] = rqdSrc.rpPoints[1] + rlVer.GetUnitVector() * dblVer;

				rqdReturn.Deflate(dblHor, (double)0.f, dblHor, (double)0.f);
			}
			break;
		case CDefinition::eTeachingBoxDir_SideBottom1:
			{
				CRavidLine<double> rl;
				double dblMoveOffset = 200; // 기준 Position 얼마나 멀어질것인가.
				double dblHor = dblTolerance;
				double dblVer = 400.f;

				CRavidPoint<double> rp;
				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[3]);
				rp = rqdSrc.rpPoints[3] + rl.GetUnitVector() * -dblMoveOffset;


				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[1]);

				rqdReturn.rpPoints[0] = rp + rl.GetUnitVector() * -dblHor;
				rqdReturn.rpPoints[1] = rp + rl.GetUnitVector() * dblHor;

				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[3]);
				rqdReturn.rpPoints[3] = rqdReturn.rpPoints[0] + rl.GetUnitVector() * -dblVer;
				rqdReturn.rpPoints[2] = rqdReturn.rpPoints[1] + rl.GetUnitVector() * -dblVer;

			}
			break;
		case CDefinition::eTeachingBoxDir_SideBottom2:
			{
				CRavidLine<double> rl;
				double dblMoveOffset = 200; // 기준 Position 얼마나 멀어질것인가.
				double dblHor = dblTolerance;
				double dblVer = 400.f;

				CRavidPoint<double> rp;
				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[3]);
				rp = rqdSrc.rpPoints[2] + rl.GetUnitVector() * -dblMoveOffset;


				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[1]);

				rqdReturn.rpPoints[0] = rp + rl.GetUnitVector() * -dblHor;
				rqdReturn.rpPoints[1] = rp + rl.GetUnitVector() * dblHor;

				rl.SetLine(rqdSrc.rpPoints[0], rqdSrc.rpPoints[3]);
				rqdReturn.rpPoints[3] = rqdReturn.rpPoints[0] + rl.GetUnitVector() * -dblVer;
				rqdReturn.rpPoints[2] = rqdReturn.rpPoints[1] + rl.GetUnitVector() * -dblVer;
			}
			break;
		case CDefinition::eTeachingBoxDir_Bottom:
			{
				CRavidLine<double> rlHor(rqdSrc.rpPoints[3], rqdSrc.rpPoints[2]);
				CRavidLine<double> rlVer(rqdSrc.rpPoints[3], rqdSrc.rpPoints[0]);

				double dblHor = rlHor.GetScalar() * 0.2;
				double dblVer = dblTolerance;

				rqdReturn.rpPoints[0] = rqdSrc.rpPoints[3] + rlVer.GetUnitVector() * -dblVer;
				rqdReturn.rpPoints[1] = rqdSrc.rpPoints[2] + rlVer.GetUnitVector() * -dblVer;
				rqdReturn.rpPoints[3] = rqdSrc.rpPoints[3] + rlVer.GetUnitVector() * dblVer;
				rqdReturn.rpPoints[2] = rqdSrc.rpPoints[2] + rlVer.GetUnitVector() * dblVer;

				rqdReturn.Deflate(dblHor, (double)0.f, dblHor, (double)0.f);

			}
			break;
		default:
			break;
		}

			

	} while (false);

	return rqdReturn;
}

CRavidQuadrangle<double> CInspection::FindVirtualCellArea(int nChannel, CImageCameraView *pImageView, CRavidQuadrangle<double> rqdcc, CRavidLine<double> rl[4], bool bResult[4])
{
	CRavidQuadrangle<double> rqdReturn;

	rqdReturn.SetQuadrangle(0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f);

	do 
	{
		CEventHandlerMain* pEHEV = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler((long)0));

		if(!pEHEV)
			break;
		SdefaultModelParam sParam = pEHEV->GetModelParameters();

		double dblAccuracy = pImageView->GetAccuracyX() * 1000.;

		enum eLinePos
		{
			eLinePos_Left = 0,
			eLinePos_top,
			eLinePos_Right,
			eLinePos_Bottom,

			eLinePos_Count,
		};

		CRavidLine<double> rlResult[eLinePos_Count];

		bool bPos[eLinePos_Count] = {false,false,false,false};
		for(int i = 0; i < eLinePos_Count; i++)
		{
			if(!bResult[i])
				continue;

			if(rqdcc.GetCenter().x > rl[i].rpPoints[0].x && rqdcc.GetCenter().x > rl[i].rpPoints[1].x)
			{
				rlResult[eLinePos_Left] = rl[i];
				bPos[eLinePos_Left] = true;
			}

			if(rqdcc.GetCenter().y < rl[i].rpPoints[0].y && rqdcc.GetCenter().y < rl[i].rpPoints[1].y)
			{
				rlResult[eLinePos_top] = rl[i];
				bPos[eLinePos_top] = true;
			}

			if(rqdcc.GetCenter().x < rl[i].rpPoints[0].x && rqdcc.GetCenter().x < rl[i].rpPoints[1].x)
			{
				rlResult[eLinePos_Right] = rl[i];
				bPos[eLinePos_Right] = true;
			}

			if(rqdcc.GetCenter().y > rl[i].rpPoints[0].y && rqdcc.GetCenter().y > rl[i].rpPoints[1].y)
			{
				rlResult[eLinePos_Bottom] = rl[i];
				bPos[eLinePos_Bottom] = true;
			}

		}

		double dblSizeX = R2P(sParam.dblCellSizeX, dblAccuracy / 1000.);
		double dblSizeY = R2P(sParam.dblCellSizeY, dblAccuracy / 1000.);

		double dblOffsetSize[eLinePos_Count] = 
		{
			dblSizeX,
			dblSizeY,
			dblSizeX,
			dblSizeY
		};

		int nDirOffset[eLinePos_Count] =
		{
			1,
			1,
			1,
			1
		};

		for(int i = 0; i < eLinePos_Count; i++)
		{
			if(bPos[i])
			{
				if(!bPos[(i + 2) % 4])
				{

					//pImageView->DrawShape(ELayer_Operator, &rlResult[i].rpPoints[0].MakeCrossHair(100, true), BLUE);
					//pImageView->DrawShape(ELayer_Operator, &rlResult[i].rpPoints[1].MakeCrossHair(100, true), BLUE);


					rlResult[(i + 2) % 4].rpPoints[0] = rlResult[i].rpPoints[0] + rlResult[i].GetNormalVector() * dblOffsetSize[i] * nDirOffset[i];
					rlResult[(i + 2) % 4].rpPoints[1] = rlResult[i].rpPoints[1] + rlResult[i].GetNormalVector() * dblOffsetSize[i] * nDirOffset[i];
					bPos[(i + 2) % 4] = true;

					//pImageView->DrawShape(ELayer_Operator, &rlResult[(i + 2) % 4].rpPoints[0].MakeCrossHair(100, true), SKYBLUE);
					//pImageView->DrawShape(ELayer_Operator, &rlResult[(i + 2) % 4].rpPoints[1].MakeCrossHair(100, true), SKYBLUE);


					pImageView->DrawShape(ELayer_Operator, &rlResult[(i + 2) % 4].GetInfiniteLine(), SKYBLUE);

				}
			}
		}

		if(!bPos[eLinePos_Left] || !bPos[eLinePos_top] || !bPos[eLinePos_Right] || !bPos[eLinePos_Bottom])	
			break;
		
		for(int i = 0; i < eLinePos_Count; i++)
			rqdReturn.rpPoints[i] = rlResult[i % 4].GetInfiniteLine().GetIntersection(rlResult[(i + 1) % 4].GetInfiniteLine());


	} while (false);

	return rqdReturn;
}

CRavidQuadrangle<double> CInspection::GetAlignOffsetAdjusted(SFindEdgeLine sLineParam, sCellAlignData sData)
{
	CRavidQuadrangle<double> rqdReturn;

	do 
	{
		CRavidPoint<double> rpOffset;
		rpOffset.x = sData.rpCenter.x - sLineParam.sAlignData.rpCenter.x;
		rpOffset.y = sData.rpCenter.y - sLineParam.sAlignData.rpCenter.y;

		double dblAngleoffset = sData.dblAngle - sLineParam.sAlignData.dblAngle;

		rqdReturn = sLineParam.rqdROI;
		// 각도 제거
// 		if(!rqdReturn.Rotate(dblAngleoffset, sLineParam.sAlignData.rpCenter))
// 			break;

		if(rqdReturn.Offset(rpOffset.x, rpOffset.y))
			break;

	} while (false);

	return rqdReturn;
}

CRavidLine<double> CInspection::GetLineGaugeMesurement(int nChannel, CRavidImage * pImgInfo, SFindEdgeLine sLineParam)
{
	CRavidLine<double> rlReturn;

	do 
	{
		if(!pImgInfo)
			break;

		sLineMeasurmentResult sResult;
		sResult = GetLineGaugeMesurement(pImgInfo, sLineParam);

		rlReturn = sResult.rlResult;

		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView((long)nChannel));
		if(pImageView)
		{

			for(auto& iter : sResult.vctMeasuredInvalidPoints)
				pImageView->DrawShape(ELayer_Administrator, &iter, LIGHTRED);

			for(auto& iter : sResult.vctMeasuredValidPoints)
				pImageView->DrawShape(ELayer_Administrator, &iter, BLUE);



		}

	} while (false);

	return rlReturn;
}

sLineMeasurmentResult CInspection::GetLineGaugeMesurement(CRavidImage * pImgInfo, SFindEdgeLine sLineParam)
{
	sLineMeasurmentResult sReturn;

	do
	{
		if(!pImgInfo)
			break;

		if(sLineParam.bRavidLineUse)
			sReturn = GetLineGaugeMesurement_FromRavid(pImgInfo, sLineParam);
		else
			sReturn = GetLineGaugeMesurement_FromOev(pImgInfo, sLineParam);

	}
	while(false);


	return sReturn;
}

sLineMeasurmentResult CInspection::GetLineGaugeMesurement_FromOev(CRavidImage * pImgInfo, SFindEdgeLine sLineParam)
{
	sLineMeasurmentResult sReturn;

	do
	{
		if(!pImgInfo)
			break;

		CAlgOevLineGauge oveLine;

		oveLine.SetTransitionType((ETransitionType)sLineParam.eTransitionType);
		oveLine.SetTransitionChoice((ETransitionChoice)sLineParam.eTransitionChoice);
		oveLine.SetThreshold(sLineParam.nThreshold);
		oveLine.SetMinAmplitude(sLineParam.nMinimumAmplitude);
		oveLine.SetThickness(sLineParam.nThicknes);
		oveLine.SetSmoothing(sLineParam.nSmoothing);
		oveLine.SetSamplingStep(sLineParam.nSamplingStep);
		oveLine.SetFilteringThreshold(sLineParam.dblOutLiersThreshold);
		oveLine.SetNumFilteringPasses(sLineParam.nNumOfPass);

		CImageInfo sImageInfo;
		int nSizeX = pImgInfo->GetSizeX();
		int nSizeY = pImgInfo->GetSizeY();
		sImageInfo.CreateImageBuffer(nSizeX, nSizeY, 8);
		sImageInfo.SetImagePtr(pImgInfo->GetBuffer(), nSizeX, nSizeY, 8);

		RECT rROI;
		rROI.left = sLineParam.rqdROI.GetRect().left;
		rROI.top = sLineParam.rqdROI.GetRect().top;
		rROI.right = sLineParam.rqdROI.GetRect().right;
		rROI.bottom = sLineParam.rqdROI.GetRect().bottom;

		eDirection eDir[4];
		eDir[eFindLineDir_TopToBottom] = eDirection_TtoB;
		eDir[eFindLineDir_LeftToRight] = eDirection_LtoR;
		eDir[eFindLineDir_BottomToTop] = eDirection_BtoT;
		eDir[eFindLineDir_RightToLeft] = eDirection_RtoL;

		if(!oveLine.Measure(&sImageInfo, &rROI, eDir[sLineParam.eFindDir]))
			break;


		std::vector<DPOINT> vctLinePoints;
		vctLinePoints.clear();
		oveLine.GetMeasuredValidPoints(&vctLinePoints);

		for(DPOINT dpt : vctLinePoints)
		{
			CRavidPoint<double> rp(dpt);
			sReturn.vctMeasuredValidPoints.push_back(rp);
		}

		sLine sl;
		sl = oveLine.GetMeasuredLine();
		CRavidPoint<double> rp;
		rp.x = oveLine.GetMeasuredCenter().x;
		rp.y = oveLine.GetMeasuredCenter().y;
		CRavidLine<double> rl(rp, oveLine.GetMeasuredAngle());

		sReturn.rlResult = rl;
// 		sReturn.rlResult.rpPoints[0] = sl.dptStart;
// 		sReturn.rlResult.rpPoints[1] = sl.dptEnd;
		sReturn.rqdInsArea = sLineParam.rqdROI;

	}
	while(false);


	return sReturn;
}

sLineMeasurmentResult CInspection::GetLineGaugeMesurement_FromRavid(CRavidImage * pImgInfo, SFindEdgeLine sLineParam)
{
	sLineMeasurmentResult sReturn;

	do
	{
		if(!pImgInfo)
			break;

		CLineGauge lg;
		lg.SetTransitionType(sLineParam.eTransitionType);
		lg.SetTransitionChoice(sLineParam.eTransitionChoice);
		lg.SetThreshold(sLineParam.nThreshold);
		lg.SetMinimumAmplitude(sLineParam.nMinimumAmplitude);
		lg.SetThickness(sLineParam.nThicknes);
		lg.SetSamplingStep(sLineParam.nSamplingStep);
		lg.SetOutLiersThreshold(sLineParam.dblOutLiersThreshold);
		lg.SetNumOfPass(sLineParam.nNumOfPass);

		CRavidLine<double> rl;
		double dllTolerance = 0.f;
		if(sLineParam.eFindDir == eFindLineDir_AngleAdjustment)
		{
			CRavidQuadrangle<double> rqd(sLineParam.rqdROI);
			CRavidLine<double> rlUseVector;
			rlUseVector.SetLine(rqd.rpPoints[0], rqd.rpPoints[3]);
			dllTolerance = rlUseVector.GetScalar();
			rl.rpPoints[0] = rqd.rpPoints[1] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
			rl.rpPoints[1] = rqd.rpPoints[0] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
		}
		else
		{
		
			rl = GetLineGaugeMeasureArea(sLineParam.rqdROI.GetRect(), sLineParam.eFindDir);

			dllTolerance = sLineParam.rqdROI.GetRect().GetWidth();
			if(sLineParam.eFindDir == eFindLineDir_BottomToTop || sLineParam.eFindDir == eFindLineDir_TopToBottom)
				dllTolerance = sLineParam.rqdROI.GetRect().GetHeight();

	
		}

		lg.SetMeasurementRegion(rl, dllTolerance / 2.f);
//		CPerformanceCounter pc1;
//		pc1.Start();
	
		if(pImgInfo->IsColor())
		{
			if(lg.Measure(pImgInfo) != EAlgorithmResult_OK)
				break;
		}
		else
		{
			if(lg.Measure(pImgInfo) != EAlgorithmResult_OK)
				break;
		}



//		CLogManager::Write(0, _T("[Inspection] Temp Line Time 11 : %0.3lf ms"), pc1.GetElapsedTime());

		sReturn.rqdInsArea = sLineParam.rqdROI;

		lg.GetMeasuredObject(&sReturn.rlResult);

		std::vector<CRavidPoint<double> > vctMeasuredValidPoints;
		std::vector<CRavidPoint<double> > vctMeasuredInvalidPoints;

		lg.GetMeasuredValidPoints(sReturn.vctMeasuredValidPoints);
		lg.GetMeasuredInvalidPoints(sReturn.vctMeasuredInvalidPoints);
	}
	while(false);


	return sReturn;
}

bool CInspection::GetColorConversion(CRavidImage * riSrc, CRavidImage * pDst)
{
	bool bReturn = true;
	CAlgOevImage oevImage;

	CImageInfo sImageInfo1;
	int nSizeX = riSrc->GetSizeX();
	int nSizeY = riSrc->GetSizeY();
	sImageInfo1.CreateImageBuffer(nSizeX, nSizeY, 24);
	sImageInfo1.SetImagePtr(riSrc->GetBuffer(), nSizeX, nSizeY, 24);

	CImageInfo sImageInfo2;
	sImageInfo2.CreateImageBuffer(nSizeX, nSizeY, 8);
	sImageInfo2.SetImagePtr(riSrc->GetBuffer(), nSizeX, nSizeY, 8);

	bReturn &= oevImage.ColorConvertGray(&sImageInfo1, &sImageInfo2);

	bReturn &= AssignSherpaImageToRavidImage(&sImageInfo2, pDst);

	return bReturn;
}

bool CInspection::GetColorComponent(CRavidImage * riSrc, CRavidImage * pDst, eColorImageType eColor)
{
	bool bReturn = true;
	CAlgOevImage oevImage;

	CImageInfo sImageInfo1;
	int nSizeX = riSrc->GetSizeX();
	int nSizeY = riSrc->GetSizeY();
	sImageInfo1.CreateImageBuffer(nSizeX, nSizeY, 24);
	sImageInfo1.SetColor(true);
	sImageInfo1.SetImagePtr(riSrc->GetBuffer(), nSizeX, nSizeY, 24);

	CImageInfo sImageInfo2;
	sImageInfo2.CreateImageBuffer(nSizeX, nSizeY, 8);
	sImageInfo2.SetImagePtr(riSrc->GetBuffer(), nSizeX, nSizeY, 8);

	bReturn &= oevImage.GetColorComponent(&sImageInfo1, &sImageInfo2, eColor);

	//oevImage.SaveImage(&sImageInfo2, _T("C:\\Ravid\\Chec3.bmp"));

	bReturn &= AssignSherpaImageToRavidImage(&sImageInfo2, pDst);

	return bReturn;
}

void CInspection::GetMeasurementForRegister(CRavidImage *pImgInfo, CRavidImageView *pImageView, SMeasurementKind sParam)
{

	do
	{
		Ravid::Miscellaneous::CPerformanceCounter pc;
		pc.Start();


		if(!pImgInfo)
			break;

		int nObjectID = pImageView->GetObjectID() - EViewNo_ImageViewTeahcingUpper;
			
		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + nObjectID));

		if(!pHandler)
			break;

		CImageCameraView* pImageViewCam = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), EViewNo_ImageViewCameraUpper + nObjectID));
		if (!pImageViewCam)
			break;



		sLineMeasurmentResult sStandardResult;

		if(!nObjectID)
		{
			CRavidImage* pri = pHandler->GetGrayImage(pImgInfo, sParam.sStandard.sLineParams.rqdROI.GetRect(), sParam.sStandard.sLineParams.eColorType);


			sStandardResult = GetLineGaugeMesurement(pri, sParam.sStandard.sLineParams);
		}
		else
		{
			sStandardResult = GetLineGaugeMesurement(pImgInfo, sParam.sStandard.sLineParams);
		}

		if(!pImageView)
			break;

		for(auto& iter : sStandardResult.vctMeasuredInvalidPoints)
			pImageView->GetLayer(ELayer_Administrator)->DrawShape(&iter, LIGHTRED);

		for(auto& iter : sStandardResult.vctMeasuredValidPoints)
			pImageView->GetLayer(ELayer_Administrator)->DrawShape(&iter, BLUE);

		pImageView->GetLayer(ELayer_Administrator)->DrawShape(sStandardResult.rlResult.GetInfiniteLine(), BLUE);

		bool bResult = true;
		CRavidLine<double> rlPos;
		double dblAvg = 0.f;
		COLORREF clrResult = GREEN;

//		#pragma omp parallel for schedule(guided)
		for(int i = 0; i < sParam.vctOpponents.size(); i ++)
		{

			sLineMeasurmentResult sOpponentResult;

	/*		sParam.vctOpponents[i].sLineParams.rqdROI = GetAlignOffsetAdjusted(sParam.vctOpponents[i].sLineParams, m_sAlignData);*/

			if(!nObjectID)
			{
				CRavidImage* pri = pHandler->GetGrayImage(pImgInfo, sParam.vctOpponents[i].sLineParams.rqdROI.GetRect(), sParam.vctOpponents[i].sLineParams.eColorType);
				sOpponentResult = GetLineGaugeMesurement(pri, sParam.vctOpponents[i].sLineParams);
			}
			else
			{
				sOpponentResult = GetLineGaugeMesurement(pImgInfo, sParam.vctOpponents[i].sLineParams);
			}

// 
// 			CRavidImage* pri = pHandler->GetGrayImage(pImgInfo, sParam.vctOpponents[i].sLineParams.rqdROI.GetRect(), sParam.vctOpponents[i].sLineParams.eColorType);
// 
// 			sLineMeasurmentResult sOpponentResult = GetLineGaugeMesurement(pri, sParam.vctOpponents[i].sLineParams);

			for(auto& iter : sOpponentResult.vctMeasuredInvalidPoints)
				pImageView->GetLayer(ELayer_Administrator)->DrawShape(&iter, LIGHTRED);

			for(auto& iter : sOpponentResult.vctMeasuredValidPoints)
				pImageView->GetLayer(ELayer_Administrator)->DrawShape(&iter, BLUE);

			pImageView->GetLayer(ELayer_Administrator)->DrawShape(sOpponentResult.rlResult.GetInfiniteLine(), YELLOW);

			CRavidLine<double> rl;
			rl = GetDistanceLine(sStandardResult, sOpponentResult);
			double dblDistance = rl.GetScalar() * pImageViewCam->GetAccuracyX();

			if((sParam.dblReference - sParam.dblLSL) > dblDistance)
				bResult &= false;

			if((sParam.dblReference + sParam.dblUSL) < dblDistance)
				bResult &= false;


			if(!bResult)
				clrResult = LIGHTRED;

			pImageView->GetLayer(ELayer_Administrator)->DrawShape(rl, clrResult, 1);
			pImageView->GetLayer(ELayer_Administrator)->DrawShape(rl.rpPoints[0].MakeCrossHair(100, true), clrResult, 2);
			pImageView->GetLayer(ELayer_Administrator)->DrawShape(rl.rpPoints[1].MakeCrossHair(100, true), clrResult, 2);
			rlPos = rl;

			dblAvg += dblDistance;
		}

		dblAvg /= sParam.vctOpponents.size();

		if(!bResult)
			clrResult = LIGHTRED;

		CString str;
		str.Format(_T("[%s]%.3f mm"), sParam.strName, dblAvg);
		pImageView->GetLayer(ELayer_Administrator)->DrawText(CRavidPoint<double>(rlPos.rpPoints[0].x, rlPos.rpPoints[0].y + 50), str, clrResult, BLACK);

	}
	while(false);

	;
}

SMeasuredData CInspection::GetMeasurement(CRavidImage * pImgInfo, CImageCameraView * pImageView, SMeasurementKind sParam)
{
	SMeasuredData sReturn;

	do
	{
		Ravid::Miscellaneous::CPerformanceCounter pc;
		pc.Start();



		if(!pImgInfo)
			break;

		int nObjectID = pImageView->GetObjectID();

		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + nObjectID));
	
		if(!pHandler)
			break;

				
		sLineMeasurmentResult sStandardResult;
		//pImageView->DrawShape(ELayer_Operator, &sParam.sStandard.sLineParams.rqdROI, LIGHTRED);

		// Align
		sParam.sStandard.sLineParams.rqdROI = GetAlignOffsetAdjusted(sParam.sStandard.sLineParams, m_sAlignData);

		pImageView->DrawShape(ELayer_Developer, &sParam.sStandard.sLineParams.rqdROI, BLUE);

		if(!nObjectID)
		{
			CRavidImage* pri = pHandler->GetGrayImage(pImgInfo, sParam.sStandard.sLineParams.rqdROI.GetRect(), sParam.sStandard.sLineParams.eColorType);


			sStandardResult = GetLineGaugeMesurement(pri, sParam.sStandard.sLineParams);
		}
		else
		{
			sStandardResult = GetLineGaugeMesurement(pImgInfo, sParam.sStandard.sLineParams);
		}

		if(!pImageView)
			break;

		for(auto& iter : sStandardResult.vctMeasuredInvalidPoints)
			pImageView->DrawShape(ELayer_Administrator, &iter, LIGHTRED);

		

		for(auto& iter : sStandardResult.vctMeasuredValidPoints)
			pImageView->DrawShape(ELayer_Administrator, &iter, BLUE);

 		pImageView->DrawShape(ELayer_Administrator, &sStandardResult.rlResult.GetInfiniteLine(), BLUE);

		pImageView->DrawShape(ELayer_Developer, &sStandardResult.rqdInsArea, DARKYELLOW, 2, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DASHDOTDOT);
// 		CString strTest;
// 		strTest.Format(_T("[%.3f"), sStandardResult.rlResult.GetAngle());

// 		pImageView->DrawText(ELayer_Developer, &CRavidPoint<double>(sStandardResult.rlResult.rpPoints[0].x, sStandardResult.rlResult.rpPoints[0].y + 50), strTest, BLUE, BLACK);

		bool bResult = true;
		CRavidLine<double> rlPos;
		double dblCloseToRefData = 0.f;
		COLORREF clrResult = GREEN;

//#pragma omp parallel for schedule(guided)
		for(int i = 0; i < sParam.vctOpponents.size(); i++)
		{
			clrResult = GREEN;
			bool bCheckResult = true;
			sLineMeasurmentResult sOpponentResult;

			// Align	
			sParam.vctOpponents[i].sLineParams.rqdROI = GetAlignOffsetAdjusted(sParam.vctOpponents[i].sLineParams, m_sAlignData);
			pImageView->DrawShape(ELayer_Developer, &sParam.vctOpponents[i].sLineParams.rqdROI, CYAN);

			if(!nObjectID)
			{
				CRavidImage* pri = pHandler->GetGrayImage(pImgInfo, sParam.vctOpponents[i].sLineParams.rqdROI.GetRect(), sParam.vctOpponents[i].sLineParams.eColorType);
				sOpponentResult = GetLineGaugeMesurement(pri, sParam.vctOpponents[i].sLineParams);
			}
			else
			{
				sOpponentResult = GetLineGaugeMesurement(pImgInfo, sParam.vctOpponents[i].sLineParams);
			}

// 			strTest.Format(_T("[%.3f"), sOpponentResult.rlResult.GetAngle());
// 
// 			pImageView->DrawText(ELayer_Developer, &CRavidPoint<double>(sOpponentResult.rlResult.rpPoints[0].x, sOpponentResult.rlResult.rpPoints[0].y + 50), strTest, RED, BLACK);

	
			for(auto& iter : sOpponentResult.vctMeasuredInvalidPoints)
				pImageView->DrawShape(ELayer_Administrator, &iter, LIGHTRED);

			for(auto& iter : sOpponentResult.vctMeasuredValidPoints)
				pImageView->DrawShape(ELayer_Administrator, &iter, BLUE);


			pImageView->DrawShape(ELayer_Root, &sOpponentResult.rlResult.GetInfiniteLine(), YELLOW);

			pImageView->DrawShape(ELayer_Developer, &sOpponentResult.rqdInsArea, YELLOW, 2, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DASHDOTDOT);
			

			CRavidLine<double> rl;
			rl = GetDistanceLine(sStandardResult, sOpponentResult);
			CRavidLine<double> rlDist(rl);

			double dblAccuracyX =  pImageView->GetAccuracyX();
			double dblAccuracyY =  pImageView->GetAccuracyY();

			rlDist.rpPoints[0].x *= dblAccuracyX;
			rlDist.rpPoints[0].y *= dblAccuracyY;
			rlDist.rpPoints[1].x *= dblAccuracyX;
			rlDist.rpPoints[1].y *= dblAccuracyY;

			double dblDistance = rlDist.GetScalar();


			if((sParam.dblReference - sParam.dblLSL) > dblDistance)
				bCheckResult &= false;

			if((sParam.dblReference + sParam.dblUSL) < dblDistance)
				bCheckResult &= false;


			if(!bCheckResult)
				clrResult = ORANGE;
			

			
			pImageView->DrawShape(ELayer_Operator, &rl, clrResult, 1);
			pImageView->DrawShape(ELayer_Operator, &rl.rpPoints[0].MakeCrossHair(100, true), clrResult, 2);
			pImageView->DrawShape(ELayer_Operator, &rl.rpPoints[1].MakeCrossHair(100, true), clrResult, 2);

			rlPos = rl;

			if(fabs(sParam.dblReference - dblCloseToRefData) > fabs(sParam.dblReference - dblDistance))
			{
				dblCloseToRefData = dblDistance;
			}
		}

		if((sParam.dblReference - sParam.dblLSL) > dblCloseToRefData)
			bResult &= false;

		if((sParam.dblReference + sParam.dblUSL) < dblCloseToRefData)
			bResult &= false;

		// CPK Dragon 231023
		bool bCPKMode = true;
		if(bCPKMode && bResult && sParam.strName.Find(_T("B")) != -1)
		{
			double dbReduce = 0.5; // %
			double dblOriginalSpec = 1.5f;
			double dblStandradValue = sParam.dblReference + (dblOriginalSpec / 2);

			double dblDiff = dblStandradValue - dblCloseToRefData;
			double dblReducedVal = dblDiff * dbReduce;

			dblCloseToRefData += dblReducedVal;

		}



		sReturn.bResult = bResult;
		sReturn.dblData = dblCloseToRefData;
		sReturn.strName = sParam.strName;
		sReturn.rlData = rlPos;
		sReturn.dblUsedOffset = sParam.dblOffset;

		ELayer eLevel = ELayer_Administrator;
		clrResult = GREEN;
		if(!sReturn.bResult)
		{
			clrResult = LIGHTRED;
			eLevel = ELayer_Operator;
		}

		CString str;
		str.Format(_T("[%s]%.3f mm"), sParam.strName, sReturn.dblData);

		pImageView->DrawText(eLevel, &CRavidPoint<double>(rlPos.rpPoints[0].x, rlPos.rpPoints[0].y + 50), str, clrResult, BLACK);


	}
	while(false);

	return sReturn;
}



CRavidLine<double> CInspection::GetDistanceLine(sLineMeasurmentResult s1, sLineMeasurmentResult s2)
{
	CRavidLine<double> rlReturn;

	do 
	{
		CRavidLine<double> rl1;
		CRavidPoint<double> rp1;

		CRavidLine<double> rl2;
		CRavidPoint<double> rp2;

		if(!FindInsideLineOfROI(s1.rlResult, s1.rqdInsArea, rl1, rp1))
			break;

		if(!FindInsideLineOfROI(s2.rlResult, s2.rqdInsArea, rl2, rp2))
			break;

// 		double dblA1 = m_sAlignData.dblAngle;
// 		double dblA2 = rl1.GetAngle();
// 
// 		double dblA3 = rl1.GetAngle() + 90;

		double dblAngle = 0;

		if(fabs(s1.rlResult.GetAngle()) > 45)
		{
			dblAngle = m_sAlignData.dblAngle - 90;
		}
		else
		{
			dblAngle = m_sAlignData.dblAngle;
		}

		
		CRavidLine<double> rlTemp(rp2, dblAngle + 90);


		rlReturn.rpPoints[0] = rp2;
		rlReturn.rpPoints[1] = rlTemp.GetIntersection(s1.rlResult.GetInfiniteLine());

	} while (false);
	
	return rlReturn;
}

