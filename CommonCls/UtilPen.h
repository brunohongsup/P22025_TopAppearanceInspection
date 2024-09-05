#pragma once
using namespace Ravid::Framework;
using namespace Ravid;

class CUtilPen : public CRavidImageView
{
public:

	//��ӹ޾Ƽ� ���.
	//����
	//1. Use Pen���� ���� ����
	//2. ChioceColor�� RGB��������, �̹������� GV������ �����ϰ� �׸��� ��.
	//3. LButton Down up / RButton Down up / MouseMove �̺�Ʈ�� ������������ ImageView.Cpp�� �־��ٰ�.


	CUtilPen();
	~CUtilPen();


	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);

	BOOL PreTranslateMessage(MSG* pMsg);
	void OnDraw(CDC* pDC);

public:
	void UsePen(bool bUse);
	void ChoiceColor();
	bool IsUsePen();

	void SetPenGV(BYTE cGV){m_nSelectGV = cGV;}
	BYTE GetPenGV(){return m_bGV;}

private:
	struct sColor
	{
		BYTE bRed;
		BYTE bGreen;
		BYTE bBlue;
	};
	sColor m_sColor;

	BYTE m_bGV = 0;

	bool m_bSelectGV = false;
	BYTE m_nSelectGV = 0;

	bool m_bUsePen = false;

	CPoint m_cpWheelStart;
	CPoint m_cpWheelEnd;

	bool IsLButtonClicking();
	bool m_bLButtonClicking = false;

	void SelectDialogColor();
	void SelectImageColor();

	BYTE ChangeRGBtoGray(BYTE bR, BYTE bG, BYTE bB);

};


// class CSingletonCheck 
// {
// private:
// 	CSingletonCheck() { bUse = false; }
// 	~CSingletonCheck();
// 
// 	static bool bFlag;
// 	static CSingletonCheck* cSingleInstance;
// 
// 	bool bUse = false;
// public:
// 
// 	static CSingletonCheck* GetInstance();
// 
// 
// 
// 	void SetUse(bool bUsePen) { bUse = bUsePen; }
// 	bool IsUsePen() { return bUse; }
// 
// };




