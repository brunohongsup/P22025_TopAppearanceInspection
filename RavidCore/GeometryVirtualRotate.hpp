public:

#pragma region [Rotate]
	/**
	* ��� ��ġ�� �������� ȸ������ ��ŭ ���� ��ġ�� ȸ���մϴ�.
	* 
	* param[in] dblAngle : ȸ������
	* param[in] center : �߽� ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<int>& center);
	/**
	* ��� ��ġ�� �������� ȸ������ ��ŭ ���� ��ġ�� ȸ���մϴ�.
	* 
	* param[in] dblAngle : ȸ������
	* param[in] pCenter : �߽� ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<int>* pCenter);
	/**
	* ��� ��ġ�� �������� ȸ������ ��ŭ ���� ��ġ�� ȸ���մϴ�.
	* 
	* param[in] dblAngle : ȸ������
	* param[in] center : �߽� ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<long long>& center);
	/**
	* ��� ��ġ�� �������� ȸ������ ��ŭ ���� ��ġ�� ȸ���մϴ�.
	* 
	* param[in] dblAngle : ȸ������
	* param[in] pCenter : �߽� ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<long long>* pCenter);
	/**
	* ��� ��ġ�� �������� ȸ������ ��ŭ ���� ��ġ�� ȸ���մϴ�.
	* 
	* param[in] dblAngle : ȸ������
	* param[in] center : �߽� ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<float>& center);
	/**
	* ��� ��ġ�� �������� ȸ������ ��ŭ ���� ��ġ�� ȸ���մϴ�.
	* 
	* param[in] dblAngle : ȸ������
	* param[in] pCenter : �߽� ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<float>* pCenter);
	/**
	* ��� ��ġ�� �������� ȸ������ ��ŭ ���� ��ġ�� ȸ���մϴ�.
	* 
	* param[in] dblAngle : ȸ������
	* param[in] center : �߽� ��ǥ (Reference)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<double>& center);
	/**
	* ��� ��ġ�� �������� ȸ������ ��ŭ ���� ��ġ�� ȸ���մϴ�.
	* 
	* param[in] dblAngle : ȸ������
	* param[in] pCenter : �߽� ��ǥ (Pointer)
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Rotate(_In_ double dblAngle, _In_ CRavidPoint<double>* pCenter);
#pragma endregion