#pragma once

#include <vector>

namespace Ravid
{
	namespace Miscellaneous
	{
		class CInternalPerformanceCounter;
		
		/**
		* ���� �ð��� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CPerformanceCounter : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CPerformanceCounter);

		public:
			CPerformanceCounter(void);
			virtual ~CPerformanceCounter(void);
			
			/**
			* ���α׷� ī��Ʈ�� �����մϴ�.
			*/
			void Start();

			/**
			* ȣ��� ������ ����մϴ�.
			*
			* return value : bool �� ��� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool CheckPoint();
			
			/**
			* ȣ��� ������ �����ɴϴ�.
			*
			* return value : float �� ���� �ð��� ��ȯ�մϴ�.
			*/
			float GetElapsedTime();
			
			/**
			* ��ϵ� ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[in] pReturn : ��� ��ϵ� �ð� ����Ʈ
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetCheckPoints(_Out_ std::vector<float>* pReturn);

		private:
			CInternalPerformanceCounter* m_pInternal = nullptr;
			
		};
	}
}

