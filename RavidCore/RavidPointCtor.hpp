public:
#pragma region [CRavidPoint]
	CRavidPoint(_In_ int x, _In_ int y);
	CRavidPoint(_In_ int x, _In_ long long y);
	CRavidPoint(_In_ int x, _In_ float y);
	CRavidPoint(_In_ int x, _In_ double y);
	CRavidPoint(_In_ long long x, _In_ int y);
	CRavidPoint(_In_ long long x, _In_ long long y);
	CRavidPoint(_In_ long long x, _In_ float y);
	CRavidPoint(_In_ long long x, _In_ double y);
	CRavidPoint(_In_ float x, _In_ int y);
	CRavidPoint(_In_ float x, _In_ long long y);
	CRavidPoint(_In_ float x, _In_ float y);
	CRavidPoint(_In_ float x, _In_ double y);
	CRavidPoint(_In_ double x, _In_ int y);
	CRavidPoint(_In_ double x, _In_ long long y);
	CRavidPoint(_In_ double x, _In_ float y);
	CRavidPoint(_In_ double x, _In_ double y);
	CRavidPoint(_In_ const POINT& point);
	CRavidPoint(_In_ POINT* pPoint);
	CRavidPoint(_In_ const SIZE& size);
	CRavidPoint(_In_ SIZE* pSize);
	CRavidPoint(_In_ const CRavidPoint<int>& point);
	CRavidPoint(_In_ CRavidPoint<int>* pPoint);
	CRavidPoint(_In_ const CRavidPoint<long long>& point);
	CRavidPoint(_In_ CRavidPoint<long long>* pPoint);
	CRavidPoint(_In_ const CRavidPoint<float>& point);
	CRavidPoint(_In_ CRavidPoint<float>* pPoint);
	CRavidPoint(_In_ const CRavidPoint<double>& point);
	CRavidPoint(_In_ CRavidPoint<double>* pPoint);
#pragma endregion
	
#pragma region [SetPoint]
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ int x, _In_ int y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ int x, _In_ long long y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ int x, _In_ float y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ int x, _In_ double y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ long long x, _In_ int y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ long long x, _In_ long long y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ long long x, _In_ float y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ long long x, _In_ double y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ float x, _In_ int y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ float x, _In_ long long y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ float x, _In_ float y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ float x, _In_ double y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ double x, _In_ int y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ double x, _In_ long long y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ double x, _In_ float y);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ double x, _In_ double y);	
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : POINT x, y ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ POINT& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : POINT x, y ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ POINT* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : SIZE x, y ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ SIZE& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : SIZE x, y ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ SIZE* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : CRavidPoint x, y ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ CRavidPoint<int>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : CRavidPoint x, y ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ CRavidPoint<int>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : CRavidPoint x, y ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ CRavidPoint<long long>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : CRavidPoint x, y ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ CRavidPoint<long long>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : CRavidPoint x, y ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ CRavidPoint<float>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : CRavidPoint x, y ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ CRavidPoint<float>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : x, y ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ CRavidPoint<double>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : CRavidPoint x, y ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPoint(_In_ CRavidPoint<double>* pGeometry);
#pragma endregion
