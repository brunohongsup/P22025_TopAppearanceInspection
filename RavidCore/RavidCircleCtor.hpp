public:

#pragma region [CRavidCircle]
	CRavidCircle(_In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ T x, _In_ T y, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const POINT& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ POINT* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const SIZE& size, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ SIZE* pSize, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<int>& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<int>* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<long long>& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<long long>* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<float>& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<float>* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<double>& point, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<double>* pPoint, _In_ Ravid::Algorithms::CRavidImage& ri, _In_opt_ double angle = 0.0, _In_opt_ double startDeg = 0.0, _In_opt_ double deltaDeg = 360.0, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ T x, _In_ T y, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const POINT& point, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ POINT* pPoint, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const SIZE& size, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ SIZE* pSize, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<int>& point, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<int>* pPoint, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<long long>& point, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<long long>* pPoint, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<float>& point, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<float>* pPoint, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidPoint<double>& point, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidPoint<double>* pPoint, _In_ T radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const RECT& rect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ RECT* pRect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidRect<int>& rect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidRect<int>* pRect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidRect<long long>& rect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidRect<long long>* pRect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidRect<float>& rect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidRect<float>* pRect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidRect<double>& rect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ CRavidRect<double>* pRect, _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	CRavidCircle(_In_ const CRavidCircle<int>& cir);
	CRavidCircle(_In_ CRavidCircle<int>* pCir);
	CRavidCircle(_In_ const CRavidCircle<long long>& cir);
	CRavidCircle(_In_ CRavidCircle<long long>* pCir);
	CRavidCircle(_In_ const CRavidCircle<float>& cir);
	CRavidCircle(_In_ CRavidCircle<float>* pCir);
	CRavidCircle(_In_ const CRavidCircle<double>& cir);
	CRavidCircle(_In_ CRavidCircle<double>* pCir);
#pragma endregion

#pragma region [SetCircle]
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : ��ü �߽� x ��
	* param[in] y : ��ü �߽� y ��
	* param[in] radius : ������ ��
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ int x, _In_ int y, _In_ double radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : ��ü �߽� x ��
	* param[in] y : ��ü �߽� y ��
	* param[in] radius : ������ ��
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ long long x, _In_ long long y, _In_ double radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : ��ü �߽� x ��
	* param[in] y : ��ü �߽� y ��
	* param[in] radius : ������ ��
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ float x, _In_ float y, _In_ double radius, _In_opt_ double angle = 0., _In_opt_ double startDeg = 0., _In_opt_ double deltaDeg = 360., _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x : ��ü �߽� x ��
	* param[in] y : ��ü �߽� y ��
	* param[in] radius : ������ ��
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ double x, _In_ double y, _In_ double radius, _In_opt_ double angle, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : CRavidCircle �� ���� (Reference)
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidCircle<int>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : CRavidCircle �� ���� (Pointer)
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidCircle<int>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : CRavidCircle �� ���� (Reference)
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidCircle<long long>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : CRavidCircle �� ���� (Pointer)
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidCircle<long long>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : CRavidCircle �� ���� (Reference)
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidCircle<float>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : CRavidCircle �� ���� (Pointer)
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidCircle<float>* pGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry : CRavidCircle �� ���� (Reference)
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidCircle<double>& refGeometry);
	/*
	* ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry : CRavidCircle �� ���� (Pointer)
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidCircle<double>* pGeometry);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x1 : ������ ��� 1��° x ��
	* param[in] y1 : ������ ��� 1��° y ��
	* param[in] x2 : ������ ��� 2��° x ��
	* param[in] y2 : ������ ��� 2��° y ��
	* param[in] x3 : ������ ��� 3��° x ��
	* param[in] y3 : ������ ��� 3��° y ��
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2, _In_ int x3, _In_ int y3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x1 : ������ ��� 1��° x ��
	* param[in] y1 : ������ ��� 1��° y ��
	* param[in] x2 : ������ ��� 2��° x ��
	* param[in] y2 : ������ ��� 2��° y ��
	* param[in] x3 : ������ ��� 3��° x ��
	* param[in] y3 : ������ ��� 3��° y ��
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ long long x1, _In_ long long y1, _In_ long long x2, _In_ long long y2, _In_ long long x3, _In_ long long y3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x1 : ������ ��� 1��° x ��
	* param[in] y1 : ������ ��� 1��° y ��
	* param[in] x2 : ������ ��� 2��° x ��
	* param[in] y2 : ������ ��� 2��° y ��
	* param[in] x3 : ������ ��� 3��° x ��
	* param[in] y3 : ������ ��� 3��° y ��
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ float x1, _In_ float y1, _In_ float x2, _In_ float y2, _In_ float x3, _In_ float y3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] x1 : ������ ��� 1��° x ��
	* param[in] y1 : ������ ��� 1��° y ��
	* param[in] x2 : ������ ��� 2��° x ��
	* param[in] y2 : ������ ��� 2��° y ��
	* param[in] x3 : ������ ��� 3��° x ��
	* param[in] y3 : ������ ��� 3��° y ��
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ double x1, _In_ double y1, _In_ double x2, _In_ double y2, _In_ double x3, _In_ double y3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry1 : CRavidPoint ������ ��� 1��° x, y �� (Reference)
	* param[in] refGeometry2 : CRavidPoint ������ ��� 2��° x, y �� (Reference)
	* param[in] refGeometry3 : CRavidPoint ������ ��� 3��° x, y �� (Reference)
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidPoint<int>& refGeometry1, _In_ CRavidPoint<int>& refGeometry2, _In_ CRavidPoint<int>& refGeometry3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry1 : CRavidPoint ������ ��� 1��° x, y �� (Pointer)
	* param[in] pGeometry2 : CRavidPoint ������ ��� 2��° x, y �� (Pointer)
	* param[in] pGeometry3 : CRavidPoint ������ ��� 3��° x, y �� (Pointer)
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidPoint<int>* pGeometry1, _In_ CRavidPoint<int>* pGeometry2, _In_ CRavidPoint<int>* pGeometry3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry1 : CRavidPoint ������ ��� 1��° x, y �� (Reference)
	* param[in] refGeometry2 : CRavidPoint ������ ��� 2��° x, y �� (Reference)
	* param[in] refGeometry3 : CRavidPoint ������ ��� 3��° x, y �� (Reference)
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidPoint<long long>& refGeometry1, _In_ CRavidPoint<long long>& refGeometry2, _In_ CRavidPoint<long long>& refGeometry3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry1 : CRavidPoint ������ ��� 1��° x, y �� (Pointer)
	* param[in] pGeometry2 : CRavidPoint ������ ��� 2��° x, y �� (Pointer)
	* param[in] pGeometry3 : CRavidPoint ������ ��� 3��° x, y �� (Pointer)
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidPoint<long long>* pGeometry1, _In_ CRavidPoint<long long>* pGeometry2, _In_ CRavidPoint<long long>* pGeometry3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry1 : CRavidPoint ������ ��� 1��° x, y �� (Reference)
	* param[in] refGeometry2 : CRavidPoint ������ ��� 2��° x, y �� (Reference)
	* param[in] refGeometry3 : CRavidPoint ������ ��� 3��° x, y �� (Reference)
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidPoint<float>& refGeometry1, _In_ CRavidPoint<float>& refGeometry2, _In_ CRavidPoint<float>& refGeometry3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry1 : CRavidPoint ������ ��� 1��° x, y �� (Pointer)
	* param[in] pGeometry2 : CRavidPoint ������ ��� 2��° x, y �� (Pointer)
	* param[in] pGeometry3 : CRavidPoint ������ ��� 3��° x, y �� (Pointer)
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidPoint<float>* pGeometry1, _In_ CRavidPoint<float>* pGeometry2, _In_ CRavidPoint<float>* pGeometry3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] refGeometry1 : CRavidPoint ������ ��� 1��° x, y �� (Reference)
	* param[in] refGeometry2 : CRavidPoint ������ ��� 2��° x, y �� (Reference)
	* param[in] refGeometry3 : CRavidPoint ������ ��� 3��° x, y �� (Reference)
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidPoint<double>& refGeometry1, _In_ CRavidPoint<double>& refGeometry2, _In_ CRavidPoint<double>& refGeometry3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
	/*
	* �������� �̿��� ���� ��ü�� �����ϴ� ����Դϴ�.
	*
	* param[in] pGeometry1 : CRavidPoint ������ ��� 1��° x, y �� (Pointer)
	* param[in] pGeometry2 : CRavidPoint ������ ��� 2��° x, y �� (Pointer)
	* param[in] pGeometry3 : CRavidPoint ������ ��� 3��° x, y �� (Pointer)
	* param[in_opt] angle : ��ü ȸ�� ���� ��
	* param[in_opt] startDeg : ��ü ���� ��ġ ���� ��
	* param[in_opt] deltaDeg : ��ü ���� �����κ��� ǥ�� ���� ��
	* param[in_opt] eRACM : ���� ó�� ���
	* 
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetCircle(_In_ CRavidPoint<double>* pGeometry1, _In_ CRavidPoint<double>* pGeometry2, _In_ CRavidPoint<double>* pGeometry3, _In_opt_ double angle = 0, _In_opt_ double startDeg = 0, _In_opt_ double deltaDeg = 360, _In_opt_ ERavidArcClosingMethod eRACM = ERavidArcClosingMethod_EachOther);
#pragma endregion