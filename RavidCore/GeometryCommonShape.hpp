public:

#pragma region [GetIntersection]
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidPolygon& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidPolygon* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
#pragma endregion

#pragma region [DoesIgnoreInternalIntersection]
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<int>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<int>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<long long>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<long long>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<float>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<float>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<double>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidRect<double>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<int>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<int>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<long long>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<long long>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<float>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<float>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<double>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidQuadrangle<double>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<int>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<int>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<long long>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<long long>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<float>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<float>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<double>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidCircle<double>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<int>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<int>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<long long>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<long long>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<float>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<float>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<double>& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidEllipse<double>* pGeometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidPolygon& geometry);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool DoesIgnoreInternalIntersection(_In_ CRavidPolygon* pGeometry);
#pragma endregion

#pragma region [GetIgnoreInternalIntersection]
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidRect<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidQuadrangle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidCircle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidEllipse<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidPolygon& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIgnoreInternalIntersection(_In_ CRavidPolygon* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
#pragma endregion

#pragma region [GetIntersectionRegion]
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidRect<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidRect<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidRect<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidRect<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidRect<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidRect<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidRect<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidRect<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidQuadrangle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidCircle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidCircle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidCircle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidCircle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidCircle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidCircle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidCircle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidCircle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidEllipse<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidEllipse<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidEllipse<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidEllipse<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidEllipse<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidEllipse<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidEllipse<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidEllipse<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidPolygon& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionRegion(_In_ CRavidPolygon* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
#pragma endregion

#pragma region [GetUnionRegion]
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidRect<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidRect<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidRect<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidRect<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidRect<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidRect<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidRect<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidRect<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidQuadrangle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidQuadrangle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidQuadrangle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidQuadrangle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidQuadrangle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidQuadrangle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidQuadrangle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidQuadrangle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidCircle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidCircle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidCircle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidCircle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidCircle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidCircle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidCircle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidCircle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidEllipse<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidEllipse<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidEllipse<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidEllipse<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidEllipse<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidEllipse<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidEllipse<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidEllipse<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidPolygon& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetUnionRegion(_In_ CRavidPolygon* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
#pragma endregion

#pragma region [GetSubtractionRegion]
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidRect<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidRect<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidRect<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidRect<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidRect<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidRect<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidRect<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidRect<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidQuadrangle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidCircle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidCircle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidCircle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidCircle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidCircle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidCircle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidCircle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidCircle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidEllipse<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidEllipse<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidEllipse<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidEllipse<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidEllipse<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidEllipse<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidEllipse<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidEllipse<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidPolygon& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetSubtractionRegion(_In_ CRavidPolygon* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
#pragma endregion

#pragma region [GetExclusiveOrRegion]
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidRect<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidRect<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidRect<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidRect<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidRect<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidRect<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidRect<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidRect<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidQuadrangle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidCircle<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidCircle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidCircle<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidCircle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidCircle<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidCircle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidCircle<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidCircle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<int>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<long long>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<float>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<double>& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidEllipse<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] geometry : ����� ��� ��ü (Reference)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidPolygon& geometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ����� ��� ��ü (Pointer)
	* param[out] pGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetExclusiveOrRegion(_In_ CRavidPolygon* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
#pragma endregion