public:

#pragma region [IsValid]
	/**
	* ���� ��ü�� ������ ���� ��ȿ���� Ȯ���մϴ�.
	*
	* return value : ���� ������ ����ų� ��ȿ���� ���� ���Ѵ��� ���� ��쿡 false �� ��ȯ�մϴ�.
	*/
	virtual bool __fastcall IsValid() override;
#pragma endregion

#pragma region [IsShapeValid]
	/**
	* ���� ��ü�� ���°� ��ȿ���� Ȯ���մϴ�.
	*
	* return value : ���°� �������ų� ���� ũ�Ⱑ ���� ���� ��쿡 false �� ��ȯ�մϴ�.
	*/
	virtual bool IsShapeValid();
#pragma endregion

#pragma region [GetShapeType]
	/**
	* ���� ��ü�� ���¸� ��ȯ�մϴ�.
	*
	* return value : ERavidGeometryShapeType enum ���� ��ȯ�˴ϴ�.
	* ERavidGeometryShapeType_Unknown : �� �� ���� ��ü
	* ERavidGeometryShapeType_Point : �� ��ü
	* ERavidGeometryShapeType_Line : ���� �Ǵ� ���� ��ü
	* ERavidGeometryShapeType_Rectangle : ���簢�� ��ü
	* ERavidGeometryShapeType_Quadrangle : �簢�� ��ü
	* ERavidGeometryShapeType_Circle : �� ��ü
	* ERavidGeometryShapeType_Ellipse : Ÿ�� ��ü
	* ERavidGeometryShapeType_Polygon : ������ ��ü
	* ERavidGeometryShapeType_Array : ��ü ����Ʈ ����
	*/
	virtual ERavidGeometryShapeType GetShapeType();
#pragma endregion

#pragma region [GetTemplateType]
	/**
	* ���� ��ü�� ������ Ÿ���� ��ȯ�մϴ�.
	*
	* return value : ERavidGeometryTemplateType enum ���� ��ȯ�Ǹ�, ���ø����� ������ ��ü�� Ÿ���� ��ȯ�մϴ�.
	* RavidPolygon �Ǵ� RavidGeometryArray �� ERavidGeometryTemplateType_Unknown �� ��ȯ�մϴ�.
	* ERavidGeometryTemplateType_Unknown : �� �� ���� ������ Ÿ��
	* ERavidGeometryTemplateType_Int : ������ 32bit ������ Ÿ��
	* ERavidGeometryTemplateType_LongLong : ������ 64 bit ������ Ÿ��
	* ERavidGeometryTemplateType_Float : �Ǽ��� 32 bit ������ Ÿ��
	* ERavidGeometryTemplateType_Double : �Ǽ��� 64 bit ������ Ÿ��
	*/
	virtual ERavidGeometryTemplateType GetTemplateType();
#pragma endregion

#pragma region [MakeDifferentTemplateType]
	/**
	* ���� ��ü�� ������ Ÿ���� �Էµ� ���·� ��ȯ�Ͽ� ���� �Ҵ�� ��ü�� ��ȯ�մϴ�.
	* �� �Լ��� ����� ��� �����ڴ� ���� �޸𸮸� �����ؾ� �մϴ�.
	*
	* return value : ��ȯ�� ��ü�� �޸𸮸� ��ȯ�մϴ�. ������ ��� nullptr �� ��ȯ�մϴ�.
	*/
	virtual CRavidGeometry* MakeDifferentTemplateType(ERavidGeometryTemplateType eType);
#pragma endregion

