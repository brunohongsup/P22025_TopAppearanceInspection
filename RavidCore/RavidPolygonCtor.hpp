public:

#pragma region [CRavidPolygon]
	CRavidPolygon(_In_ const CRavidPolygon& poly);
	CRavidPolygon(_In_ CRavidPolygon* pPoly);
#pragma endregion

#pragma region [SetPolygon]
	/**
	* ���� ��ü�� �Էµ� ��ü�� �����մϴ�.
	*
	* param[in] refGeometry : �߰� ��ü (Reference)
	*
	* return value : �߰��� �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPolygon(_In_ CRavidPolygon& refGeometry);
	/**
	* ���� ��ü�� �Էµ� ��ü�� �����մϴ�.
	*
	* param[in] pGeometry : �߰� ��ü (Pointer)
	*
	* return value : �߰��� �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetPolygon(_In_ CRavidPolygon* pGeometry);
#pragma endregion