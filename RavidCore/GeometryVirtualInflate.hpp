public:
	
#pragma region [Inflate]
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] nRadius : left, top, right, bottom 4 ���� ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ int nRadius);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] llRadius : left, top, right, bottom 4 ���� ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ long long llRadius);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] fRadius : left, top, right, bottom 4 ���� ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ float fRadius);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] dblRadius : left, top, right, bottom 4 ���� ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ double dblRadius);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] left : left ���� Ȯ�� ��
	* param[in] top : top ���� Ȯ�� ��
	* param[in] right : right ���� Ȯ�� ��
	* param[in] bottom : bottom ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ int left, _In_ int top, _In_ int right, _In_ int bottom);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] left : left ���� Ȯ�� ��
	* param[in] top : top ���� Ȯ�� ��
	* param[in] right : right ���� Ȯ�� ��
	* param[in] bottom : bottom ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ long long left, _In_ long long top, _In_ long long right, _In_ long long bottom);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] left : left ���� Ȯ�� ��
	* param[in] top : top ���� Ȯ�� ��
	* param[in] right : right ���� Ȯ�� ��
	* param[in] bottom : bottom ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ float left, _In_ float top, _In_ float right, _In_ float bottom);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] left : left ���� Ȯ�� ��
	* param[in] top : top ���� Ȯ�� ��
	* param[in] right : right ���� Ȯ�� ��
	* param[in] bottom : bottom ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ double left, _In_ double top, _In_ double right, _In_ double bottom);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] width : x �� ����� ���� Ȯ�� ��
	* param[in] height : y �� ����� ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ int width, _In_ int height);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] width : x �� ����� ���� Ȯ�� ��
	* param[in] height : y �� ����� ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ long long width, _In_ long long height);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] width : x �� ����� ���� Ȯ�� ��
	* param[in] height : y �� ����� ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ float width, _In_ float height);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] width : x �� ����� ���� Ȯ�� ��
	* param[in] height : y �� ����� ���� Ȯ�� ��
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ double width, _In_ double height);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] point : x, y �� �� ����� ���� Ȯ�� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ POINT& point);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pPoint : x, y �� �� ����� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ POINT* pPoint);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] size : x, y �� �� ����� ���� Ȯ�� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ SIZE& size);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pSize : x, y �� �� ����� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ SIZE* pSize);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] point : x, y �� �� ����� ���� Ȯ�� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidPoint<int>& point);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pPoint : x, y �� �� ����� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] point : x, y �� �� ����� ���� Ȯ�� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidPoint<long long>& point);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pPoint : x, y �� �� ����� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] point : x, y �� �� ����� ���� Ȯ�� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidPoint<float>& point);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pPoint : x, y �� �� ����� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] point : x, y �� �� ����� ���� Ȯ�� �� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidPoint<double>& point);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pPoint : x, y �� �� ����� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidPoint<double>* pPoint);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ RECT& rect);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ RECT* pRect);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidRect<int>& rect);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidRect<int>* pRect);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidRect<long long>& rect);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidRect<long long>* pRect);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidRect<float>& rect);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidRect<float>* pRect);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidRect<double>& rect);
	/**
	* ���� ��ü�� �߽��� �������� �Էµ� �� ��ŭ ũ�⸦ Ȯ���մϴ�.
	*
	* param[in] pRect : left, top, right, bottom �� ���� Ȯ�� �� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Inflate(_In_ CRavidRect<double>* pRect);
#pragma endregion