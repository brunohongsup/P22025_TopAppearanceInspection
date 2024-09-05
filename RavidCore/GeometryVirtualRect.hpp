public:
		
#pragma region [GetRect]
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] left : �ּ� x �� �� (Reference)
	* param[in] top : �ּ� y �� �� (Reference)
	* param[in] right : �ִ� x �� �� (Reference)
	* param[in] bottom : �ִ� y �� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ int& left, _Out_ int& top, _Out_ int& right, _Out_ int& bottom);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pLeft : �ּ� x �� �� (Pointer)
	* param[in] pTop : �ּ� y �� �� (Pointer)
	* param[in] pRight : �ִ� x �� �� (Pointer)
	* param[in] pBottom : �ִ� y �� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ int* pLeft, _Out_ int* pTop, _Out_ int* pRight, _Out_ int* pBottom);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] left : �ּ� x �� �� (Reference)
	* param[in] top : �ּ� y �� �� (Reference)
	* param[in] right : �ִ� x �� �� (Reference)
	* param[in] bottom : �ִ� y �� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ long long& left, _Out_ long long& top, _Out_ long long& right, _Out_ long long& bottom);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pLeft : �ּ� x �� �� (Pointer)
	* param[in] pTop : �ּ� y �� �� (Pointer)
	* param[in] pRight : �ִ� x �� �� (Pointer)
	* param[in] pBottom : �ִ� y �� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ long long* pLeft, _Out_ long long* pTop, _Out_ long long* pRight, _Out_ long long* pBottom);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] left : �ּ� x �� �� (Reference)
	* param[in] top : �ּ� y �� �� (Reference)
	* param[in] right : �ִ� x �� �� (Reference)
	* param[in] bottom : �ִ� y �� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ float& left, _Out_ float& top, _Out_ float& right, _Out_ float& bottom);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pLeft : �ּ� x �� �� (Pointer)
	* param[in] pTop : �ּ� y �� �� (Pointer)
	* param[in] pRight : �ִ� x �� �� (Pointer)
	* param[in] pBottom : �ִ� y �� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ float* pLeft, _Out_ float* pTop, _Out_ float* pRight, _Out_ float*pBottom);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] left : �ּ� x �� �� (Reference)
	* param[in] top : �ּ� y �� �� (Reference)
	* param[in] right : �ִ� x �� �� (Reference)
	* param[in] bottom : �ִ� y �� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ double& left, _Out_ double& top, _Out_ double& right, _Out_ double& bottom);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pLeft : �ּ� x �� �� (Pointer)
	* param[in] pTop : �ּ� y �� �� (Pointer)
	* param[in] pRight : �ִ� x �� �� (Pointer)
	* param[in] pBottom : �ִ� y �� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ double* pLeft, _Out_ double* pTop, _Out_ double* pRight, _Out_ double* pBottom);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] rect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ RECT& rect);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pRect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ RECT* pRect);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] rect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ CRavidRect<int>& rect);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pRect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ CRavidRect<int>* pRect);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] rect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ CRavidRect<long long>& rect);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pRect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ CRavidRect<long long>* pRect);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] rect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ CRavidRect<float>& rect);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pRect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ CRavidRect<float>* pRect);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] rect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ CRavidRect<double>& rect);
	/**
	* ���� ��ü�� �����ϴ� �ּ� ������ ���簢��(���� 0)�� ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pRect : left = min X, top = min Y, right = max X, bottom = max Y ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRect(_Out_ CRavidRect<double>* pRect);
#pragma endregion