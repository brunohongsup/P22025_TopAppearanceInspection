public:
	
	/**
	* ���� ��ġ�� POINT ����ü�� �����ɴϴ�.
	*
	* return value : POINT ����ü�� ��ȯ�մϴ�.
	*/
	virtual operator POINT();
	/**
	* ���� ��ġ�� CPoint Ŭ������ �����ɴϴ�.
	*
	* return value : CPoint Ŭ������ ��ȯ�մϴ�.
	*/
	virtual operator CPoint();
	/**
	* ���� ��ġ�� RECT ����ü�� �����ɴϴ�.
	*
	* return value : RECT ����ü�� ��ȯ�մϴ�.
	*/
	virtual operator RECT();
	/**
	* ���� ��ġ�� CRect Ŭ������ �����ɴϴ�.
	*
	* return value : CRect Ŭ������ ��ȯ�մϴ�.
	*/
	virtual operator CRect();
	

#pragma region [GetRasterRegion]
	/**
	* (0, 0) ���� �Էµ� ũ�� ���ο� �ش� ��ü�� ������ Y�� 1 ������ X �� ����, �� ��ġ ����Ʈ�� ����մϴ�.
	*
	* param[out] RGA : �ش� ��ü�� ����� ����Ʈ (Reference)
	* param[in_opt] pRpImageSize : �̹���ũ�� Ȥ�� ����� ũ��. (0,0) ���� ����Ѵ�. (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray& RGA, _In_opt_ CRavidPoint<int>* pRpImageSize = nullptr);
	/**
	* (0, 0) ���� �Էµ� ũ�� ���ο� �ش� ��ü�� ������ Y�� 1 ������ X �� ����, �� ��ġ ����Ʈ�� ����մϴ�.
	*
	* param[out] RGA : �ش� ��ü�� ����� ����Ʈ (Pointer)
	* param[in_opt] pRpImageSize : ����� ũ�� ����. (0,0) ���� ����Ѵ�. (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray* pRGA, _In_opt_ CRavidPoint<int>* pRpImageSize = nullptr);
	/**
	* �Էµ� ũ�� ���ο� �ش� ��ü�� ������ Y�� 1 ������ X �� ����, �� ��ġ ����Ʈ�� ����մϴ�.
	*
	* param[out] pRGA : �ش� ��ü�� ����� ����Ʈ (Reference)
	* param[in_opt] pRpImageSize : ����� ���� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray& RGA, _In_opt_ CRavidRect<int>* pRrImageSize);
	/**
	* �Էµ� ũ�� ���ο� �ش� ��ü�� ������ Y�� 1 ������ X �� ����, �� ��ġ ����Ʈ�� ����մϴ�.
	*
	* param[out] RGA : �ش� ��ü�� ����� ����Ʈ (Reference)
	* param[in_opt] pRpImageSize : ����� ���� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRasterRegion(_Out_ CRavidGeometryArray* pRGA, _In_opt_ CRavidRect<int>* pRrImageSize);
#pragma endregion
