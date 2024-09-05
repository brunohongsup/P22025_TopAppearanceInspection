public:

#pragma region [CRavidQuadrangle]
	CRavidQuadrangle(_In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ T x1, _In_ T y1, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const SIZE& size, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ SIZE* pSize, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const POINT& point, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ POINT* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const CRavidPoint<int>& point, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ CRavidPoint<int>* pPoint, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const CRavidPoint<long long>& po, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ CRavidPoint<long long>* pPoint, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const CRavidPoint<float>& point, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ CRavidPoint<float>* pPoint, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ const CRavidPoint<double>& point, Ravid::Algorithms::CRavidImage& ri);
	CRavidQuadrangle(_In_ CRavidPoint<double>* pPoint, Ravid::Algorithms::CRavidImage& ri);

	CRavidQuadrangle(_In_ T x1, _In_ T y1, _In_ T x2, _In_ T y2, _In_ T x3, _In_ T y3, _In_ T x4, _In_ T y4);
	CRavidQuadrangle(_In_ const SIZE& size);
	CRavidQuadrangle(_In_ SIZE* pSize);
	CRavidQuadrangle(_In_ const POINT& point1, _In_ const POINT& point2, _In_ const POINT& point3, _In_ const POINT& point4);
	CRavidQuadrangle(_In_ POINT* pPoint1, _In_ POINT* pPoint2, _In_ POINT* pPoint3, _In_ POINT* pPoint4);
	CRavidQuadrangle(_In_ const CRavidPoint<int>& point1, _In_ const CRavidPoint<int>& point2, _In_ const CRavidPoint<int>& point3, _In_ const CRavidPoint<int>& point4);
	CRavidQuadrangle(_In_ CRavidPoint<int>* pPoint1, _In_ CRavidPoint<int>* pPoint2, _In_ CRavidPoint<int>* pPoint3, _In_ CRavidPoint<int>* pPoint4);
	CRavidQuadrangle(_In_ const CRavidPoint<long long>& point1, _In_ const CRavidPoint<long long>& point2, _In_ const CRavidPoint<long long>& point3, _In_ const CRavidPoint<long long>& point4);
	CRavidQuadrangle(_In_ CRavidPoint<long long>* pPoint1, _In_ CRavidPoint<long long>* pPoint2, _In_ CRavidPoint<long long>* pPoint3, _In_ CRavidPoint<long long>* pPoint4);
	CRavidQuadrangle(_In_ const CRavidPoint<float>& point1, _In_ const CRavidPoint<float>& point2, _In_ const CRavidPoint<float>& point3, _In_ const CRavidPoint<float>& point4);
	CRavidQuadrangle(_In_ CRavidPoint<float>* pPoint1, _In_ CRavidPoint<float>* pPoint2, _In_ CRavidPoint<float>* pPoint3, _In_ CRavidPoint<float>* pPoint4);
	CRavidQuadrangle(_In_ const CRavidPoint<double>& point1, _In_ const CRavidPoint<double>& point2, _In_ const CRavidPoint<double>& point3, _In_ const CRavidPoint<double>& point4);
	CRavidQuadrangle(_In_ CRavidPoint<double>* pPoint1, _In_ CRavidPoint<double>* pPoint2, _In_ CRavidPoint<double>* pPoint3, _In_ CRavidPoint<double>* pPoint4);
	CRavidQuadrangle(_In_ const RECT& rect);
	CRavidQuadrangle(_In_ RECT* pRect);
	CRavidQuadrangle(_In_ const CRavidRect<int>& rect);
	CRavidQuadrangle(_In_ CRavidRect<int>* pRect);
	CRavidQuadrangle(_In_ const CRavidRect<long long>& rect);
	CRavidQuadrangle(_In_ CRavidRect<long long>* pRect);
	CRavidQuadrangle(_In_ const CRavidRect<float>& rect);
	CRavidQuadrangle(_In_ CRavidRect<float>* pRect);
	CRavidQuadrangle(_In_ const CRavidRect<double>& rect);
	CRavidQuadrangle(_In_ CRavidRect<double>* pRect);
	CRavidQuadrangle(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle(_In_ CRavidQuadrangle<int>* pQuad);
	CRavidQuadrangle(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle(_In_ CRavidQuadrangle<long long>* pQuad);
	CRavidQuadrangle(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle(_In_ CRavidQuadrangle<float>* pQuad);
	CRavidQuadrangle(_In_ const CRavidQuadrangle<double>& quad);
	CRavidQuadrangle(_In_ CRavidQuadrangle<double>* pQuad);
#pragma endregion

#pragma region [SetQuadrangle]
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x1 : 1��° x�� ��
	* param[in] y1 : 1��° y�� ��
	* param[in] x2 : 2��° x�� ��
	* param[in] y2 : 2��° y�� ��
	* param[in] x3 : 3��° x�� ��
	* param[in] y3 : 3��° y�� ��
	* param[in] x4 : 4��° x�� ��
	* param[in] y4 : 4��° y�� ��
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2, _In_ int x3, _In_ int y3, _In_ int x4, _In_ int y4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x1 : 1��° x�� ��
	* param[in] y1 : 1��° y�� ��
	* param[in] x2 : 2��° x�� ��
	* param[in] y2 : 2��° y�� ��
	* param[in] x3 : 3��° x�� ��
	* param[in] y3 : 3��° y�� ��
	* param[in] x4 : 4��° x�� ��
	* param[in] y4 : 4��° y�� ��
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ long long x1, _In_ long long y1, _In_ long long x2, _In_ long long y2, _In_ long long x3, _In_ long long y3, _In_ long long x4, _In_ long long y4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x1 : 1��° x�� ��
	* param[in] y1 : 1��° y�� ��
	* param[in] x2 : 2��° x�� ��
	* param[in] y2 : 2��° y�� ��
	* param[in] x3 : 3��° x�� ��
	* param[in] y3 : 3��° y�� ��
	* param[in] x4 : 4��° x�� ��
	* param[in] y4 : 4��° y�� ��
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ float x1, _In_ float y1, _In_ float x2, _In_ float y2, _In_ float x3, _In_ float y3, _In_ float x4, _In_ float y4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x1 : 1��° x�� ��
	* param[in] y1 : 1��° y�� ��
	* param[in] x2 : 2��° x�� ��
	* param[in] y2 : 2��° y�� ��
	* param[in] x3 : 3��° x�� ��
	* param[in] y3 : 3��° y�� ��
	* param[in] x4 : 4��° x�� ��
	* param[in] y4 : 4��° y�� ��
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ double x1, _In_ double y1, _In_ double x2, _In_ double y2, _In_ double x3, _In_ double y3, _In_ double x4, _In_ double y4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry1 : 1��° POINT �� x, y �� (Reference)
	* param[in] refGeometry2 : 2��° POINT �� x, y �� (Reference)
	* param[in] refGeometry3 : 3��° POINT �� x, y �� (Reference)
	* param[in] refGeometry4 : 4��° POINT �� x, y �� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ POINT& refGeometry1, _In_ POINT& refGeometry2, _In_ POINT& refGeometry3, _In_ POINT& refGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry1 : 1��° POINT �� x, y �� (Pointer)
	* param[in] pGeometry2 : 2��° POINT �� x, y �� (Pointer)
	* param[in] pGeometry3 : 3��° POINT �� x, y �� (Pointer)
	* param[in] pGeometry4 : 4��° POINT �� x, y �� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ POINT* pGeometry1, _In_ POINT* pGeometry2, _In_ POINT* pGeometry3, _In_ POINT* pGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry1 : 1��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry2 : 2��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry3 : 3��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry4 : 4��° CRavidPoint �� x, y �� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidPoint<int>& refGeometry1, _In_ CRavidPoint<int>& refGeometry2, _In_ CRavidPoint<int>& refGeometry3, _In_ CRavidPoint<int>& refGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry1 : 1��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry2 : 2��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry3 : 3��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry4 : 4��° CRavidPoint �� x, y �� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidPoint<int>* pGeometry1, _In_ CRavidPoint<int>* pGeometry2, _In_ CRavidPoint<int>* pGeometry3, _In_ CRavidPoint<int>* pGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry1 : 1��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry2 : 2��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry3 : 3��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry4 : 4��° CRavidPoint �� x, y �� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidPoint<long long>& refGeometry1, _In_ CRavidPoint<long long>& refGeometry2, _In_ CRavidPoint<long long>& refGeometry3, _In_ CRavidPoint<long long>& refGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry1 : 1��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry2 : 2��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry3 : 3��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry4 : 4��° CRavidPoint �� x, y �� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidPoint<long long>* pGeometry1, _In_ CRavidPoint<long long>* pGeometry2, _In_ CRavidPoint<long long>* pGeometry3, _In_ CRavidPoint<long long>* pGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry1 : 1��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry2 : 2��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry3 : 3��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry4 : 4��° CRavidPoint �� x, y �� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidPoint<float>& refGeometry1, _In_ CRavidPoint<float>& refGeometry2, _In_ CRavidPoint<float>& refGeometry3, _In_ CRavidPoint<float>& refGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry1 : 1��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry2 : 2��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry3 : 3��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry4 : 4��° CRavidPoint �� x, y �� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidPoint<float>* pGeometry1, _In_ CRavidPoint<float>* pGeometry2, _In_ CRavidPoint<float>* pGeometry3, _In_ CRavidPoint<float>* pGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry1 : 1��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry2 : 2��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry3 : 3��° CRavidPoint �� x, y �� (Reference)
	* param[in] refGeometry4 : 4��° CRavidPoint �� x, y �� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidPoint<double>& refGeometry1, _In_ CRavidPoint<double>& refGeometry2, _In_ CRavidPoint<double>& refGeometry3, _In_ CRavidPoint<double>& refGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry1 : 1��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry2 : 2��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry3 : 3��° CRavidPoint �� x, y �� (Pointer)
	* param[in] pGeometry4 : 4��° CRavidPoint �� x, y �� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidPoint<double>* pGeometry1, _In_ CRavidPoint<double>* pGeometry2, _In_ CRavidPoint<double>* pGeometry3, _In_ CRavidPoint<double>* pGeometry4);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : RECT ���簢�� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ RECT& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : RECT ���簢�� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ RECT* pGeometry);
	/*
	* �Էµ� ��ü�� ������ �̿��Ͽ� 4 ��ǥ�� ����Ͽ� �����մϴ�.
	*
	* param[in] refGeometry : CRavidRect ���簢�� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidRect<int>& refGeometry);
	/*
	* �Էµ� ��ü�� ������ �̿��Ͽ� 4 ��ǥ�� ����Ͽ� �����մϴ�.
	*
	* param[in] pGeometry : CRavidRect ���簢�� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidRect<int>* pGeometry);
	/*
	* �Էµ� ��ü�� ������ �̿��Ͽ� 4 ��ǥ�� ����Ͽ� �����մϴ�.
	*
	* param[in] refGeometry : CRavidRect ���簢�� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidRect<long long>& refGeometry);
	/*
	* �Էµ� ��ü�� ������ �̿��Ͽ� 4 ��ǥ�� ����Ͽ� �����մϴ�.
	*
	* param[in] pGeometry : CRavidRect ���簢�� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidRect<long long>* pGeometry);
	/*
	* �Էµ� ��ü�� ������ �̿��Ͽ� 4 ��ǥ�� ����Ͽ� �����մϴ�.
	*
	* param[in] refGeometry : CRavidRect ���簢�� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidRect<float>& refGeometry);
	/*
	* �Էµ� ��ü�� ������ �̿��Ͽ� 4 ��ǥ�� ����Ͽ� �����մϴ�.
	*
	* param[in] pGeometry : CRavidRect ���簢�� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidRect<float>* pGeometry);
	/*
	* �Էµ� ��ü�� ������ �̿��Ͽ� 4 ��ǥ�� ����Ͽ� �����մϴ�.
	*
	* param[in] refGeometry : CRavidRect ���簢�� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidRect<double>& refGeometry);
	/*
	* �Էµ� ��ü�� ������ �̿��Ͽ� 4 ��ǥ�� ����Ͽ� �����մϴ�.
	*
	* param[in] pGeometry : CRavidRect ���簢�� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidRect<double>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : �簢���� ��ġ �� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidQuadrangle<int>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : �簢���� ��ġ �� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidQuadrangle<int>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : �簢���� ��ġ �� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidQuadrangle<long long>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : �簢���� ��ġ �� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidQuadrangle<long long>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : �簢���� ��ġ �� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidQuadrangle<float>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : �簢���� ��ġ �� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidQuadrangle<float>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : �簢���� ��ġ �� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidQuadrangle<double>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : �簢���� ��ġ �� (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetQuadrangle(_In_ CRavidQuadrangle<double>* pGeometry);
#pragma endregion