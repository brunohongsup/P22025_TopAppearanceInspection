public:

#pragma region [CRavidGeometryArray]
	CRavidGeometryArray(_In_ const CRavidGeometryArray& refGeometryArray);
	CRavidGeometryArray(_In_ CRavidGeometryArray* pGeometryArray);
#pragma endregion
		
#pragma region [SetArray]
	/**
	* ���� ��ü�� �Էµ� ��ü�� �����մϴ�.
	*
	* param[in] refGeometryArray : ���� ��ü (Reference)
	*
	* return value : ������ �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetArray(_In_ CRavidGeometryArray& refGeometryArray);
	/**
	* ���� ��ü�� �Էµ� ��ü�� �����մϴ�.
	*
	* param[in] pGeometryArray : ���� ��ü (Pointer)
	*
	* return value : ������ �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetArray(_In_ CRavidGeometryArray* pGeometryArray);
#pragma endregion