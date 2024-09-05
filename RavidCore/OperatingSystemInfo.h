#pragma once

namespace Ravid
{
	namespace Miscellaneous
	{
		/**
		* ���� OS �� ������ �������� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS COperatingSystemInfo : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(COperatingSystemInfo);

		public:
			COperatingSystemInfo();
			virtual ~COperatingSystemInfo();
			
			/**
			* ���� �������� OS �� ��Ű��ó�� Ȯ���մϴ�.			
			*
			* return value : bool �� x64 ���θ� ��ȯ�մϴ�.
			* x86 �� false, x64 �� true �� ��ȯ�մϴ�.
			*/
			bool IsX64OperatingSystem();
			
			/**
			* �Էµ� ���μ����� ��Ű��ó�� Ȯ���մϴ�.
			* �Էµ� ���� 0�� ��� ���� ���μ����� ����� Ȯ���մϴ�.
			*
			* param[in] hProcess : ���μ��� �ڵ鰪 (Default = 0)
			* 
			* return value : bool �� x64 ���θ� ��ȯ�մϴ�.
			* x86 �� false, x64 �� true �� ��ȯ�մϴ�.
			*/
			bool IsX64Process(HANDLE hProcess = 0);

			EOperatingSystemType GetOperatingSystemType();
		};
	}
}

