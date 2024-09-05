public:
	
#pragma region [GetCenter]
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] x : �߽� x ��ǥ (Reference)
	* param[in] y : �߽� y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ int& x, _Out_ int& y);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �߽� x ��ǥ (Pointer)
	* param[in] y : �߽� y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ int* x, _Out_ int* y);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] x : �߽� x ��ǥ (Reference)
	* param[in] y : �߽� y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ long long& x, _Out_ long long& y);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �߽� x ��ǥ (Pointer)
	* param[in] y : �߽� y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ long long* x, _Out_ long long* y);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] x : �߽� x ��ǥ (Reference)
	* param[in] y : �߽� y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ float& x, _Out_ float& y);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �߽� x ��ǥ (Pointer)
	* param[in] y : �߽� y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ float* x, _Out_ float* y);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] x : �߽� x ��ǥ (Reference)
	* param[in] y : �߽� y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ double& x, _Out_ double& y);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �߽� x ��ǥ (Pointer)
	* param[in] y : �߽� y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ double* x, _Out_ double* y);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] point : �߽� x, y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ POINT& point);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] pPoint : �߽� x, y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ POINT* pPoint);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] size : �߽� x, y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ SIZE& size);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] pSize : �߽� x, y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ SIZE* pSize);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] point : �߽� x, y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ CRavidPoint<int>& point);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] pPoint : �߽� x, y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] point : �߽� x, y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ CRavidPoint<long long>& point);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] pPoint : �߽� x, y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] point : �߽� x, y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ CRavidPoint<float>& point);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] pPoint : �߽� x, y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] point : �߽� x, y ��ǥ (Reference)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ CRavidPoint<double>& point);
	/**
	* ���� ��ü�� �߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	* 
	* param[in] pPoint : �߽� x, y ��ǥ (Pointer)
	*
	* return value : ��� ���н� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetCenter(_Out_ CRavidPoint<double>* pPoint);
#pragma endregion
	
#pragma region [GetCenterOfGravity]
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �����߽� x ��ǥ (Reference)
	* param[in] y : �����߽� y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ int& x, _Out_ int& y);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �����߽� x ��ǥ (Pointer)
	* param[in] y : �����߽� y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ int* x, _Out_ int* y);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �����߽� x ��ǥ (Reference)
	* param[in] y : �����߽� y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ long long& x, _Out_ long long& y);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �����߽� x ��ǥ (Pointer)
	* param[in] y : �����߽� y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ long long* x, _Out_ long long* y);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �����߽� x ��ǥ (Reference)
	* param[in] y : �����߽� y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ float& x, _Out_ float& y);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �����߽� x ��ǥ (Pointer)
	* param[in] y : �����߽� y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ float* x, _Out_ float* y);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �����߽� x ��ǥ (Reference)
	* param[in] y : �����߽� y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ double& x, _Out_ double& y);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] x : �����߽� x ��ǥ (Pointer)
	* param[in] y : �����߽� y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ double* x, _Out_ double* y);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] point : �����߽� x, y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ POINT& point);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pPoint : �����߽� x, y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ POINT* pPoint);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] size : �����߽� x, y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ SIZE& size);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pSize : �����߽� x, y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ SIZE* pSize);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] point : �����߽� x, y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<int>& point);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pPoint : �����߽� x, y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] point : �����߽� x, y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<long long>& point);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pPoint : �����߽� x, y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] point : �����߽� x, y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<float>& point);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pPoint : �����߽� x, y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] point : �����߽� x, y ��ǥ (Reference)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<double>& point);
	/**
	* ���� ��ü�� �����߽��� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pPoint : �����߽� x, y ��ǥ (Pointer)
	*
	* return value : ���� ��ġ���� �̵��� ��ǥ�� ��ȯ�մϴ�.
	*/
	virtual bool GetCenterOfGravity(_Out_ CRavidPoint<double>* pPoint);
#pragma endregion

