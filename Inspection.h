#pragma once

#include "Definition.h"

#include "CommonCls/Util.h"
#include "EHBase.h"

#include "ImageCameraView.h"
#include "EventHandlerMain.h"
#include "EventHandlerCamera.h"
#include <stack>
#include <thread>
#include <omp.h>


#include "eVision/VAlgorithmCls/AlgOevLineGauge.h"
#include "eVision/VAlgorithmCls/AlgOevImage.h"


#include "CRavidPolygonEx.h"

#include <unordered_map>

class CImageCameraView;
using namespace CDefinition;

class CInspection
{
	enum eDefectColor
	{
		eDefectColor_Black = 0,

		eDefectColor_White,

		eDefectColor_count,
	};

	typedef struct _sDefectInfo
	{
		int nIndex = 0;
		bool bOutSide = false;
		bool bElectorode = false;
		double dblWidth = 0.;
		double dblHeight = 0.;
		double dblGV = 0.;
		CRavidRect<int> rrBoundary;
		CRavidLine<double> rlFeret;
		CRavidQuadrangle<double> rqMECR;
		CRavidPolygon rpgContour;
	}
	SDefectInfo;

	typedef struct _sCommunityDefectInfo
	{
		CRavidRect<double> rrCommunity;
		std::vector<SDefectInfo*> vctDefect;
	}
	SCommunityDefectInfo;

	typedef struct sFindAreaInfo
	{
		CRavidQuadrangle<double> rqdDiv[3]; // 가운데 테이프 겸침 영역때문에 3개로 나눠 영역을획득.
		CRavidQuadrangle<double> rqdAll; // 검사 영역의 최외곽 코너.
		CRavidPolygon rqg; // 전체 영역의 검사.
	}
	SFindAreaInfo;


// 
// 	typedef struct _sGaugeParam
// 	{
// 		long nImage = 0;
// 		long nTransitionType = 0;
// 		long nTransitionChoice = 0;
// 		double dblTolerance = 0.;
// 		double dblThreshold = 0.;
// 		double dblMinimumAmplitude = 0.;
// 		double dblThickness = 0.;
// 		double dblSamplingStep = 0.;
// 		double dblOutLiersThreshold = 0.;
// 		double dblSetNumOfPass = 0.;
// 		double dblRatio = 1.;
// 	}
// 	SGaugeParam;

public:
	CInspection();
	virtual ~CInspection();

	bool InspectionDefect(int nChannel, SInspectionInfo* pII, CImageCameraView* pImageView);

	bool InspectionMeasure(int nChannel, SInspectionInfo* pII, std::vector<SMeasurementKind> vct, CImageCameraView* pImageView);

	void ThreadfucFindDefect(int nIndex, CRavidImage* pImage, CRavidQuadrangle<double> rqdInsArea);
	void ThreadfucFindDefect(int nCh, int nThreadNum, int nColorNum, CRavidImage* pImage, SFindAreaInfo sAreaInfo, CRavidImage* pImageColor = nullptr);

	CRavidQuadrangle<double> InflateQuadrangle(CRavidQuadrangle<double>& rqBase, double dblLeft, double dblTop, double dblRight, double dblBottom);
	CRavidQuadrangle<double> MakeQuadrangle(CRavidLine<double>* pRL);
	bool InflatePolygon(CRavidPolygon& rpg, double dblWidth, double dblHeight);

	std::vector<CRavidQuadrangle<double>> MakefourQuadrangle(CRavidQuadrangle<double>& rqBase);

	bool GetIntersectionRegion(CRavidGeometry* pRG1, CRavidGeometry* pRG2, CRavidPolygon* pRPGResult);

	bool Threshold(CRavidImage* pImage, ELogicalCondition eLC, BYTE cGV, int nBlockSize, int nConstant, CRavidGeometry* pROI);

	bool DefectConnectedComponent(_In_ CRavidImage* pImage, _In_ CRavidImage* pImageOrg, _In_ BYTE cGV, _In_ ELogicalCondition eLC, _In_ int nIndex, _In_ _Out_ std::vector<SDefectInfo*>& vctResult, _In_ _Out_ std::vector<SDefectInfo*>& vctClusterREsult, _In_opt_ CRavidQuadrangle<double> rqdArea, double dblMinWidth = 1., double dblMinHeight = 1., bool bIsBlack = true);	
	bool DefectConnectedComponent(int nAreaNum, _In_ CRavidImage* pImage, _In_ CRavidImage* pImageOrg, _In_ BYTE cGV, _In_ ELogicalCondition eLC, _In_ int nIndex, _In_ _Out_ std::vector<SDefectInfo*>& vctResult, _In_ _Out_ std::vector<SDefectInfo*>& vctClusterREsult, _In_opt_ SFindAreaInfo sAreaInfo, double dblMinWidth = 1., double dblMinHeight = 1., bool bIsBlack = true);
	bool ClearDefectInfo(std::vector<SDefectInfo*>& vctDefectInfo);

	bool ClusterDefect(_Inout_ std::vector<SDefectInfo*>& vctCandidate, _In_ double dblClusterCandidateWidth, _In_ double dblClusterInflate);

	bool CollisionDefect(std::vector<SDefectInfo*>& vctDefect, float fExtend, bool bCheckMinGV, bool bIsWhiteDefect);
	bool CollisionDefectMaxSize(std::vector<SDefectInfo*>& vctDefect, float fExtend, bool bCheckMinGV, bool bIsWhiteDefect);

	bool AllDefectOverlapCheck(std::vector<SDefectInfo*>& vctDefect);


	bool EraseSmallDefect(std::vector<SDefectInfo*>& vctDefect1, std::vector<SDefectInfo*>& vctDefect2);
	bool EraseOverlapDefect(std::vector<SDefectInfo*>& vctDefect1, std::vector<SDefectInfo*>& vctDefect2);

	bool JudgeDefect(_In_ double dblWidth, _In_ double dblHeight, _In_ double dblArea, _In_ std::vector<SDefectInfo*>& vctSrc, _Out_ std::vector<SDefectInfo*>& vctDst);

	bool JudgeDefectCondition1(_In_ double dblWidth, _In_ std::vector<SDefectInfo*>& vctSrc, _Out_ std::vector<SDefectInfo*>& vctDst);
	bool JudgeDefectCondition2(_In_ double dblWidth, _In_ int nCount, _In_ std::vector<SDefectInfo*>& vctSrc, _Out_ std::vector<SDefectInfo*>& vctDst);
	bool JudgeDefectCondition3(_In_ double dblWidth, _In_ int nCount, _In_ double dblDistance, _In_ std::vector<SDefectInfo*>& vctSrc, _Out_ std::vector<SCommunityDefectInfo>& vctDst);


	bool DrawDefect(_In_ CImageCameraView* pImageView, _In_ std::vector<SDefectInfo*>& vctDefectInfo, _In_ COLORREF clr, _In_ double dblAccuracyUM, std::vector<SDefectData>& vctDectMap);

	bool GetConvexHull(_In_ std::vector<CRavidPoint<int>>& vctIn, _Out_ std::vector<CRavidPoint<int>>& vctOut);
	bool GetConvexHull(_In_ CRavidPolygon& rpgIn, _Out_ std::vector<CRavidPoint<int>>& vctOut);
	bool GetConvexHull(_In_ CRavidPolygon& rpgIn, _Out_ CRavidPolygon& rpgOut);

	bool GetQuadrangleToPolygon(_In_ std::vector<CRavidPoint<int>>& vctIn, _Out_ CRavidPolygon& rpgOut);

	bool GetMinimumEnclosingRectangle(_In_ std::vector<CRavidPoint<int>>& vctIn, _In_ CRavidRect<int>& rrIn, _Out_ CRavidQuadrangle<double>& rqOut);

	bool CheckBoxIsOverROI(CRavidRect<int> rrROI, CRavidRect<int> rrBox);

	bool IsOverKill(int nAreaNum, CRavidImage* pImage, SFindAreaInfo sAreaInfo, SDefectInfo* sDI);

	bool IsCrease(int nAreaNum,  SFindAreaInfo sAreaInfo, SDefectInfo* sDI);

	bool IsGVcount(CRavidImage* pImage, SDefectInfo* sDI, bool bLow, BYTE nGV,  BYTE nCount);


	double GetPolygonArea(CRavidPolygon& rpg);

//	bool LineGauge(CRavidImage* pImage, SGaugeParam sParam, CRavidLine<double>& rl, std::vector<CRavidPoint<double> >* pVctValidPoints = nullptr);

	bool DoesIntersectLine(CRavidLine<double> rl1, CRavidLine<double> rl2);
	bool DoesIntersectQuadrangle(CRavidQuadrangle<double> rq1, CRavidQuadrangle<double> rq2);

	bool IsEmpty(CRavidImage* pImage, double dblExtend, BYTE cGV, double dblArea);

	bool Revision(CRavidImage* pImage, float fRevisionRadius, CRavidPoint<double> rpCenter, CRavidRect<int> rrROI, float fRevisionAcceptDiffGV);

	bool Revision(CRavidImage* pImage, float fRevisionRadius, CRavidPoint<double> rpCenter, CRavidQuadrangle<double> rqROI, float fRevisionAcceptDiffGV);

	bool Mask(CRavidImage* pImage, BYTE cGV, CRavidRect<int> rrOuter, CRavidQuadrangle<double> rqInner);
	//////////////////////////////////////////////////////////////////////////
	//HSSHIM ADDED 
	bool MaskWithRect(CRavidImage* pImg, BYTE cGV, CRavidRect<int> rrMaskArea);
	//////////////////////////////////////////////
	bool Mask(CRavidImage* pImage, BYTE cGV, CRavidRect<int> rrOuter, CRavidPolygon rpgInner);

	bool Mask_Corner(int nIndexNum, CRavidImage* pImage, SFindAreaInfo sInfo);

	bool Mask_Limitation(CRavidImage * pImage, CRavidRect<int> rrROI, BYTE cLimitationHighGV, BYTE cLimitationLowGV, BYTE cMaskGV);

	bool Mask_Several(CRavidImage* pImage, BYTE cGV, CRavidRect<int> rrOuter, CRavidPolygon* rpg, int nMaskCount);

	bool MaskProcessImage(CRavidImage* pImage, CRavidGeometry* pRGOuter, CRavidGeometry* pRGInner);

	double GetAverage(CRavidImage* pImage, CRavidImage* pImageProcess, CRavidRect<int> rrROI);

	bool Mask(CRavidImage* pImage, CRavidImage* pImageProcess, CRavidRect<int> rrROI, BYTE cMaskGV);

	bool FindDoughnutDefect(CRavidImage* pImage, CRavidImage* pImageProcess, long nGVOffset, double dblExtend,  int nCount, _In_ _Out_ std::vector<SDefectInfo*> vctArea);

	bool PointInCheck(_In_ CRavidPoint<double> rp, _In_ CRavidQuadrangle<double> rqd);

	bool PointInCheck(_In_ CRavidPolygon rpg, _In_ CRavidQuadrangle<double> rqd);

	bool PointInCheck(CRavidPoint<double> rp, CRavidPolygon rpg);

	bool FindCellArea(CRavidImage *pImgInfo,  int nChannel,  CRavidQuadrangle<double>& rqdArea);

	
	// 양끝 포함 6개의 검사 영역을 찾는다. 블랍, 또는 라인게이지.
	// 6개의 영역을 왼쪽을 기준으로 정렬한다.
	// 5개의 테이프 영역을 찾는다
	// 찾은 테이프 영역도 왼쪽을 기준으로 정렬한다.
	// 찾은 테이프의 라인게이지 성분을 벡터에 담는다. 상하 씩 세트로
	// 찾은 테이프 오버랩을 이용하여, 한 검사영역당 3개의 영역으로 나눈다.
	// 3개의 영역은 번호를 붙여, 총 18개의 영역으로 벡터에 담는다.

	std::vector<CRavidQuadrangle<double>> FindCellInspectionAreaInside(CRavidImage *pImgInfo, int nChannel, CImageCameraView * pImageView);
	std::vector<CRavidQuadrangle<double>> FindCellInspectionAreaOutskirt(CRavidImage *pImgInfo, int nChannel, CImageCameraView * pImageView);

	CRavidLine<double> GetLineTapeOverlap(CRavidImage *pImgInfo, int nChannel, CImageCameraView * pImageView, std::vector<CRavidQuadrangle<double>> vecNotapLine, int nPosition, bool bTop);
	
	CRavidLine<double> GetLineTapeOverlapSide(CRavidImage *pImgInfo, int nChannel, CImageCameraView * pImageView, std::vector<CRavidQuadrangle<double>> vecNotapLine, int nPosition, bool bLeft);


	std::vector<CInspection::SFindAreaInfo> FindCellAreasNoTaper(CRavidImage *pImgInfo,  int nChannel, CImageCameraView * pImageView);


	CRavidQuadrangle<double> GetTeachingBox(CRavidQuadrangle<double> rqdSrc, eTeachingBoxDir eType);

	CRavidQuadrangle<double> FindVirtualCellArea(int nChannel, CImageCameraView * pImageView, CRavidQuadrangle<double> rqdcc, CRavidLine<double> rl[4], bool bResult[4]);

	CRavidQuadrangle<double> GetAlignOffsetAdjusted(SFindEdgeLine sLineParam, sCellAlignData sData);

	CRavidLine<double> GetLineGaugeMesurement(int nChannel, CRavidImage *pImgInfo, SFindEdgeLine sLineParam);

	sLineMeasurmentResult GetLineGaugeMesurement(CRavidImage *pImgInfo, SFindEdgeLine sLineParam);

	sLineMeasurmentResult GetLineGaugeMesurement_FromOev(CRavidImage *pImgInfo, SFindEdgeLine sLineParam);
	sLineMeasurmentResult GetLineGaugeMesurement_FromRavid(CRavidImage *pImgInfo, SFindEdgeLine sLineParam);

	bool GetColorConversion(CRavidImage* riSrc, CRavidImage* pDst);
	bool GetColorComponent(CRavidImage* riSrc, CRavidImage* pDstm, eColorImageType eColor);

	CRavidLine<double> GetLineGaugeMeasureArea(CRavidRect<double> rr, eFindLineDir eType)
	{
		enum eQuadPointNumber
		{
			eLeftTop = 0,
			eRightTop,
			eRightBottom,
			eLeftBottom,

		};
		CRavidLine<double> rlReturn;

		CRavidQuadrangle<double> rqd(rr);

		CRavidLine<double> rlUseVector;
		switch(eType)
		{
		case CDefinition::eFindLineDir_TopToBottom:
			rlUseVector.SetLine(rqd.rpPoints[eLeftTop], rqd.rpPoints[eLeftBottom]);
			rlReturn.rpPoints[0] = rqd.rpPoints[eLeftTop] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
			rlReturn.rpPoints[1] = rqd.rpPoints[eRightTop] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
			break;
		case CDefinition::eFindLineDir_LeftToRight:
			rlUseVector.SetLine(rqd.rpPoints[eLeftTop], rqd.rpPoints[eRightTop]);
			rlReturn.rpPoints[0] = rqd.rpPoints[eLeftBottom] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
			rlReturn.rpPoints[1] = rqd.rpPoints[eLeftTop] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
			break;
		case CDefinition::eFindLineDir_BottomToTop:
			rlUseVector.SetLine(rqd.rpPoints[eLeftTop], rqd.rpPoints[eLeftBottom]);
			rlReturn.rpPoints[1] = rqd.rpPoints[eLeftTop] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
			rlReturn.rpPoints[0] = rqd.rpPoints[eRightTop] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
			break;
		case CDefinition::eFindLineDir_RightToLeft:
			rlUseVector.SetLine(rqd.rpPoints[eLeftTop], rqd.rpPoints[eRightTop]);
			rlReturn.rpPoints[1] = rqd.rpPoints[eLeftBottom] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
			rlReturn.rpPoints[0] = rqd.rpPoints[eLeftTop] + rlUseVector.GetUnitVector() * (rlUseVector.GetScalar() / 2.f);
			break;
		default:
			break;
		}

		return rlReturn;
	}
	void GetMeasurementForRegister(CRavidImage *pImgInfo, CRavidImageView *pImageView, SMeasurementKind sParam);

	SMeasuredData GetMeasurement(CRavidImage *pImgInfo, CImageCameraView *pImageView, SMeasurementKind sParam);

	CRavidLine<double> GetDistanceLine(sLineMeasurmentResult s1, sLineMeasurmentResult s2);

	bool FindInsideLineOfROI(CRavidLine<double> rlIn, CRavidQuadrangle<double> rqdArea, CRavidLine<double>& rlOut, CRavidPoint<double>& rpLineCenterOut)
	{
		CRavidGeometryArray Rga;
		rqdArea.GetIntersection(rlIn.GetInfiniteLine(), &Rga);

		if(Rga.GetCount() != 2)
			return false;

		Rga.GetAt(0)->GetCenter(rlOut.rpPoints[0]);
		Rga.GetAt(1)->GetCenter(rlOut.rpPoints[1]);
		rpLineCenterOut = rlOut.rpPoints[0];
		rpLineCenterOut += rlOut.GetUnitVector() * (rlOut.GetScalar() / 2.f);

		return true;
	}

	bool AssignRavidImageToSherpaImage(CRavidImage * pRI, CImageInfo * pSI)
	{
		bool bReturn = false;

		do
		{
			if(!pRI || !pRI->GetBuffer())
				break;

			if(!pSI)
				break;

			bReturn = pSI->SetImagePtr(pRI->GetBuffer(), pRI->GetSizeX(), pRI->GetSizeY(), pRI->GetPixelSizeByte() * 8, pRI->IsColor(), false);
		}
		while(false);

		return bReturn;
	}
	bool AssignSherpaImageToRavidImage(CImageInfo * pSI, CRavidImage * pRI)
	{
		bool bReturn = false;

		do
		{
			if(!pSI || !pSI->GetBuffer())
				break;

			if(!pRI)
				break;

			if(pSI->IsColor())
				bReturn = !pRI->SetImagePtr(pSI->GetBuffer(), pSI->GetSizeX(), pSI->GetSizeY(), CRavidImage::EValueFormat_3C_U8);
			else
				bReturn = !pRI->SetImagePtr(pSI->GetBuffer(), pSI->GetSizeX(), pSI->GetSizeY(), CRavidImage::EValueFormat_1C_U8);
		}
		while(false);

		return bReturn;
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Load Parameter

	void LoadInspectionParameter(int nChannel, SdefaultModelParam sParam);
	
protected:
	/////////////////////////////////////////////////////////////////
	// 1 . Defect 검사 파라미터
	long m_nDefectUse[eDefectColor_count] = {0,};
	CString m_strDefectRegionOffset[eDefectColor_count] = {_T(""),};
	unsigned char m_cDefectAbsGV[eDefectColor_count] = {0,};
	long m_nDefectBlockSize[eDefectColor_count] = {0,};
	long m_nDefectConstant[eDefectColor_count] = {0,};


	long m_nClusterUse = 0;
	double m_dblClusterCandidateSize = 0.f;
	double m_dblClusterInflateOffset = 0.f;

	long m_nDefectCondition1Operation = 0;
	double m_dblDefectCondition1Size = 0.f;

	long m_nDefectCondition2Operation = 0;
	double m_dblDefectCondition2Size = 0.f;
	long m_nDefectCondition2Count = 0;

	long m_nDefectCondition3Operation = 0;
	double m_dblDefectCondition3Size = 0.f;
	long m_nDefectCondition3Count = 0;
	double m_dblDefectCondition3Distance = 0.f;

	BYTE m_nElectrodeGV[3] ={0,0,0} ;
	double m_dblElectroadSize = 0.f;

	// Out suburb Area
	long m_nSuburbAreaLimit = 0;
	BYTE m_nSuburbAreaGV = 0;
	long m_nCreaseAreaLimit = 0;
	double m_dblCreaseRatio = 0.f;

	//Filtering_Defect Option
	CString m_strFDOptionGV;

	// 2 Align
	/////////////////////////////////////////////////////////////////
	CRavidPoint<double> m_BlobQuadranglePtPos[4];

	std::vector<SDefectInfo*> m_vctDefectAll[eDefectColor_count];	
	std::vector<SDefectInfo*> m_vctDefectCluster[eDefectColor_count];

	CCriticalSection m_cs;

	sCellAlignData m_sAlignData;

	// 
	/*
	검사용 
	3. 카메라 확인 
	4 . 비동기 확인
	*/

};

