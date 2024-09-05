#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <vector>

#include "RavidLine.h"
#include "RavidRect.h"
#include "RavidCircle.h"
#include "RavidEllipse.h"
#include "RavidPolygon.h"

#include "DxfReader.h"

using namespace Ravid;
using namespace Ravid::Algorithms;
using namespace Ravid::Framework;
using namespace Ravid::Miscellaneous;

enum ECadImageDxfEntityType
{
	ECadImageDxfEntityType_Point = 0,
	ECadImageDxfEntityType_Line,
	ECadImageDxfEntityType_Arc,
	ECadImageDxfEntityType_Circle,
	ECadImageDxfEntityType_Ellipse,
	ECadImageDxfEntityType_HatchMain,
	ECadImageDxfEntityType_HatchSub,
};

enum ELayerColor
{
	EColor_black = 250,
	EColor_green = 3,
	EColor_red = 1,
	EColor_brown = 15,
	EColor_yellow = 2,
	EColor_cyan = 4,
	EColor_magenta = 6,
	EColor_gray = 8,
	EColor_blue = 5,
	EColor_l_blue = 163,
	EColor_l_green = 121,
	EColor_l_cyan = 131,
	EColor_l_red = 23,
	EColor_l_magenta = 221,
	EColor_l_gray = 252,
	EColor_white = 7,
	EColor_bylayer = 256,
	EColor_byblock = 0
};

/**
* DXF ������ �����ϴ� Ŭ�����Դϴ�.
* DXF ������ ����, �����մϴ�.
* ���� ���� �������Դϴ�.
*/
class AFX_EXT_CLASS CCadImage
{
public:
	CCadImage::CCadImage()
	{
	};

	virtual CCadImage::~CCadImage()
	{
		ClearDxf();
	};

	// DXF �ļ�
	CDxfReader dxf;

	void ClearDxf();

	bool OpenDxf();
	bool OpenDxf(CString filename);

	// DXF �Ľ� ���� ���� ȸ��
	void RotatePoint(double angle, CRavidPoint<double> &point);

	// DXF ��ü�� ����� ������ ROI �� ����� �� �ֵ��� ��ȯ
	// �Ϲ� ��ü �� HATCH ��ü ��ȯ ����
	void ConvertDxfToRavidPolygon(double dxfScale, double dxfAngle, CRavidPoint<double> dxfOffset);


	// �Ľ� ���� ����Ǵ� HATCH ��ü ����
	std::vector<std::vector<CRavidGeometry*>> vctVctDxfHatch;

	// �� ���Ҹ� �̷�� ��ü�� ���� �����Ͱ� vctVctDxfHatch �� �ش��ϴ� �����Ϳ� �����ϹǷ�, ���� �޸� ���� �� �����Ͽ��� �Ѵ�.
	// convert �� HATCH ��ü ����
	// �� Array�� 0��: ���� �ܰ��� ��ü
	// �� Array�� 1�� ����: �ܰ��� ��ü�� �վ��ִ� ��ü
	std::vector<CRavidGeometryArray> vctGaDxfHatch;

	// ROI ������ ���� ��ü�� ������ �ٲٴ� �Լ�
	// ���� �������� Erase ��� flag ���� ������� ����
	void ProcDxf(std::vector<CRavidGeometry*> &vctGeometrys, CRavidGeometryArray &gaDxfRsult);
	// ROI�� Teaching Object ��Ͻ� ����� ������ �ߺ� ���� �����ϴ� �Լ�
	void TerminateDuplcatedPoint(CRavidGeometryArray &ga);
	
//////////////////////////////////////////////////////////////////////////
/*
���� Save �Լ� -> DXF file ���� ����(AutoCad ���� Open ����), Layer ���� �Ұ�
�Լ� �̸��� ����� ������ �����ϳ�, ���� �� ������ ������ ���� �����ͼ� ���� ���
*/
//////////////////////////////////////////////////////////////////////////
private:
	std::ofstream m_fOut_OldVer;

public:
	bool SaveDxf(CString file);

protected:
	bool WriteDxfHeader();
	bool WriteDxfTail();

	// Basic(Hatch�� �ƴ� �Ϲ� ��ü) �� Hatch �� ũ�� ����
	void PrintDxfLine(std::ofstream &dxfOut, CRavidPoint<double> *rpPoint, int &index, int groupId);
	void PrintDxfCircle(std::ofstream &dxfOut, CRavidPoint<double> *rpCenter, double radius, int &index, int groupId);
	void PrintDxfArc(std::ofstream &dxfOut, CRavidPoint<double> *rpPoint, double radius, double *pRange, int &index, int groupId);
	void PrintDxfHatch(std::ofstream &dxfOut, std::vector<CRavidGeometryArray> *pVctGroup, int &index, int groupId);
	void PrintDxfBasic(std::ofstream &dxfOut, /*CRavidGeometryArray *pGaDxf, */int &index, int groupId); // ���� CRavidGeometryArray �� ���� �Ǿ� �ִ� �� �ٲ���







//////////////////////////////////////////////////////////////////////////
/*
���� �� ������ �籸�� -> DXF file ���� �� ������(Layer) ���� ���� : CString ������ ����
�ش� file �� �о�ͼ� Ravid Geometry �� ��ȯ �����ϳ�,

AutoCad ���� Open �Ұ���!!!!!!!!!!!! (File Format ���� ��)
*/
//////////////////////////////////////////////////////////////////////////
private:
	//////////////////////////////////////////////////////////////////////////
	// ���̾� �̸��� ���� ���� �־�� �ؼ� ���� �ٲ�
	// Pair ����
	//  - CString : dxf �� Layer ���� �̸�
	//  - CRavidGeometry : ��ü�� �̷�� �ϳ��ϳ��� ����
	//  - CRavidPolygon : Geometry �� ���� �̾��� ���Ҹ� ���� ��ü
	std::vector<std::pair<CString, CRavidGeometry*>> m_vctDxfEliment;
	std::vector<std::pair<CString, CRavidPolygon*>> m_vctDxfObjectInfo;

public:
	// SetDxfEliment ȣ�� �� ���ο��� m_vctDxfObjectInfo ������
	// ���� : Geometry ��ü�� ���� �Ҵ����� �ʱ� ������, �� �Լ� ȣ��ο��� �޸� ������ �ϸ� �ȵȴ�.
	bool SetDxfEliment(std::vector<std::pair<CString, CRavidGeometry*>>* pDxfEliment);

	// Dxf Entities ���� ���� ���� ��ȯ
	bool GetDxfEliment(_Out_ std::vector<std::pair<CString, CRavidGeometry*>>* pDxfEliment);
	bool GetDxfEliment(_Out_ std::vector<std::pair<CString, CRavidGeometry*>>& vctDxfEliment);

	bool GetDxfObject(_Out_ std::vector<std::pair<CString, CRavidPolygon*>>* pDxfObjet);
	bool GetDxfObject(_Out_ std::vector<std::pair<CString, CRavidPolygon*>>& vctDxfObjet);

	// SetDxfEliment �ʹ� �ٸ��� Geometry ��ü�� �Ҵ��Ͽ� �߰��Ѵ�.
	bool AddDxfEliment(CString strLayerName, CRavidLine<double>* prlEliment);
	bool AddDxfEliment(CString strLayerName, CRavidLine<double>& rlEliment);
	bool AddDxfEliment(CString strLayerName, CRavidCircle<double>* prcEliment);
	bool AddDxfEliment(CString strLayerName, CRavidCircle<double>& rcEliment);
	bool AddDxfEliment(CString strLayerName, CRavidEllipse<double>* preEliment);	//radius1 == radius2 �� ��츸 ������ �Ǿ� ����
	bool AddDxfEliment(CString strLayerName, CRavidEllipse<double>& reEliment);		//radius1 == radius2 �� ��츸 ������ �Ǿ� ����

	// Layer Name �� �ش��ϴ� Geometry �� ��ȯ
	bool GetDxfEntityEliment(CString strLayerName, _Out_ std::vector<CRavidGeometry*>* pDxfEliment);
	bool GetDxfEntityEliment(CString strLayerName, _Out_ std::vector<std::pair<CString, CRavidGeometry*>>* pDxfEliment);

	bool GetDxfLayerNames(_Out_ std::vector<CString>* pvctLayerName);

	bool DeleteDxfEliment(CString strLayerName);
	bool DeleteDxfEliment(int nDxfElimentIndex);
	bool DeleteDxfEliment(int nDeleteRangeBeginIdx, int nDeleteRangeEndIdx);

	void ClearDxf_NewVer();
	void ClearDxf_DxfEliment();
	void ClearDxf_DxfObject();

	size_t GetDxfElimentCount();

protected:
	//////////////////////////////////////////////////////////////////////////
	// ���� �Լ��� �̸�, ����� ������ (�Ű����� -> ���� ������ ��������� ����)
	void ProcDxf();
	void TerminateDuplcatedPoint();

	// ���� �Լ����� ����ϴ� �ǵ��� �𸣰����� �ϴ� ������ �ٲ����� ����
	void GetMinMax_NewVer(bool bFirstFlag, double &leftMin, double &topMin, double &rightMax, double &bottomMax);

//////////////////////////////////////////////////////////////////////////
//	���� save �Լ��� ��������� �������ڷ� ���°͵� ���� �ϵ��ڵ� �����ؼ� ����ü�� �����Ҽ��� ����. �� �� ��� ��ħ
//		-> ���� �߻� : AutoCad ���� ���� FILE OPEN �Ұ�
public:
	bool SaveDxf_NewVer(CString strFilePathName, bool bOverWriteFile = true);
private:
	mutable std::ofstream m_fSaveFile;
	   
protected:
	bool SaveDxf_OpenFile(std::string strPath);
	bool SaveDxf_OpenFile(CString strPath);
	bool SaveDxf_CloseFile();

	void SaveDxf_WriteHeader();
	void SaveDxf_WriteHeader_Variables(const char* strVariable);

	void SaveDxf_WriteClasses();

	void SaveDxf_WriteTable(std::vector<CString>& vctLayerNames, std::vector<CString>& vctBlockRecordName);
	void SaveDxf_WriteTable_LineType(CString strDataName);
	void SaveDxf_WriteTable_LineType(std::string strDataName);
	void SaveDxf_WriteTable_Layer(CString strLayerName);
	void SaveDxf_WriteTable_Layer(std::string strLayerName);
	//bool SaveDxf_WriteHeader_LayerSetting(std::ofstream &fOut, std::vector<CString>& vctLayerNames, int &nIndex);
	void SaveDxf_WriteTable_Style(unsigned long &styleHandleStd);
	void SaveDxf_WriteTable_View();
	void SaveDxf_WriteTable_Ucs();
	void SaveDxf_WriteTable_Appid();
	void SaveDxf_WriteTable_DimStyle(unsigned long styleHandleStd);
	void SaveDxf_WriteTable_BlockRecord(std::vector<CString> vctBlockRecordNames);
	void SaveDxf_WriteTable_BlockRecord(std::vector<std::string> vctBlockRecordNames);

	void SaveDxf_WriteBlocks(std::vector<CString>& vctBlockRecordNames);
	void SaveDxf_WriteBlocks_Block(CString strBlockName);
	void SaveDxf_WriteBlocks_Block(std::string strBlockName);

	//������ �Ȱǵ帲. ��ġ�� ����� �ȵ� ���ɼ� ����
	bool SaveDxf_WriteHatch(int &nIndex);
	bool SaveDxf_WriteHatch_Head(int nPolygonElimentCountOfTargetEntity, CString strEntitiesLayerName, int &nIndex);
	bool SaveDxf_WriteHatch_Line(CRavidLine<double> *prl);
	bool SaveDxf_WriteHatch_Arc(CRavidCircle<double> *prc);
	bool SaveDxf_WriteHatch_Tail();

	void SaveDxf_WriteEntities(std::vector<std::pair<CString, CRavidGeometry *>>& vctEntities);
	void SaveDxf_WriteEntities_Line(CRavidLine<double> *prl, CString strEntitiesLayerName);
	void SaveDxf_WriteEntities_Circle(CRavidCircle<double> *prc, CString strEntitiesLayerName);
	void SaveDxf_WriteEntities_Circle(CRavidPoint<double> *prcCenterPoint, double dblRadius, CString strEntitiesLayerName);	//Ellipse �� ���� �� Circle �� �־ �����ε�
	void SaveDxf_WriteEntities_Arc(CRavidCircle<double> *prc, double *pAngleRange, CString strEntitiesLayerName);
	void SaveDxf_WriteEntities_Arc(CRavidPoint<double> *prcCenterPoint, double dblRadius, double *pAngleRange, CString strEntitiesLayerName);	//Ellipse ���ڷ� ���� �� Arc �� �־ �����ε�
	void SaveDxf_WriteEntities_Entity_LayerType(CString strEntitiesLayerName);
	void SaveDxf_WriteEntities_Entity_LayerType(std::string strEntitiesLayerName);

	//bool SaveDxf_WriteBasic(std::ofstream &fOut, int &nIndex);
	//bool SaveDxf_WriteBasic_Line(std::ofstream &fOut, CRavidLine<double> *prl, CString strEntitiesLayerName, int&nIndex);
	//bool SaveDxf_WriteBasic_Circle(std::ofstream &fOut, CRavidCircle<double> *prc, CString strEntitiesLayerName, int&nIndex);
	//bool SaveDxf_WriteBasic_Circle(std::ofstream &fOut, CRavidPoint<double> *prcCenterPoint, double dblRadius, CString strEntitiesLayerName, int&nIndex);	//Ellipse �� ���� �� Circle �� �־ �����ε�
	//bool SaveDxf_WriteBasic_Arc(std::ofstream &fOut, CRavidCircle<double> *prc, double *pAngleRange, CString strEntitiesLayerName, int&nIndex);
	//bool SaveDxf_WriteBasic_Arc(std::ofstream &fOut, CRavidPoint<double> *prcCenterPoint, double dblRadius, double *pAngleRange, CString strEntitiesLayerName, int&nIndex);	//Ellipse ���ڷ� ���� �� Arc �� �־ �����ε�

	void SaveDxf_WriteObject(CString strAppDictionaryName);
	void SaveDxf_WriteObject(std::string strAppDictionaryName);
	
	void SaveDxf_WriteEnd();

	//bool SaveDxf_WriteTail(std::ofstream &fOut);

private:
	void dxfReal(int gc, double value) const;
	void dxfInt(int gc, int value) const;
	void dxfHex(int gc, int value) const;
	void dxfString(int gc, const char* value) const;
	void dxfString(int gc, const std::string& value) const;
	void comment(const char* text) const;

	unsigned long m_ulHandle = 0x30;
	unsigned long dxfHandle(int nGroupCode = 5);

	unsigned long m_ulAppDictionaryHandle = 0;
};