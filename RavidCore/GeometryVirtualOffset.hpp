public:

#pragma region [Offset]
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] x : x �� ����
	* param[in] y : y �� ����
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ int x, _In_ int y);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] x : x �� ����
	* param[in] y : y �� ����
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ long long x, _In_ long long y);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] x : x �� ����
	* param[in] y : y �� ����
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ float x, _In_ float y);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] x : x �� ����
	* param[in] y : y �� ����
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ double x, _In_ double y);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] point : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ POINT& point);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] pPoint : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ POINT* pPoint);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] size : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ SIZE& size);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] pSize : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ SIZE* pSize);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] point : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ CRavidPoint<int>& point);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] pSize : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] point : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ CRavidPoint<long long>& point);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] pSize : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] point : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ CRavidPoint<float>& point);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] pSize : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] point : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ CRavidPoint<double>& point);
	/**
	* ���� ��ü�� ���ڰ� ��ŭ �̵��մϴ�.
	*
	* param[in] pSize : x, y �� ���� (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Offset(_In_ CRavidPoint<double>* pPoint);
#pragma endregion

#pragma region [PowOffset]
	/**
	* ���� ��ü�� ���ڰ��� �� ��ŭ �̵��մϴ�.
	* 
	* param[in] powX : 
	* param[in] powY : 
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool PowOffset(_In_ double powX, _In_ double powY);
#pragma endregion

