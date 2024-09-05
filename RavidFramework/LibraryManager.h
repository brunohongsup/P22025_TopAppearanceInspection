#pragma once

#include "RavidObjectEx.h"

#include <vector>
#include <memory>

namespace Ravid
{
	namespace Framework
	{
		/**
		* �ܺ� ���̺귯��(dll) ���¸� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CLibraryManager : public CRavidObjectEx
		{
		private:
			CLibraryManager();

		public:
			virtual ~CLibraryManager();
			
			/**
			* �ܺ� ���̺귯�� ��� �� ���¸� �ʱ�ȭ�մϴ�.
			*/
			static bool Initialize();
			
			/**
			* �ܺ� ���̺귯�� ����� �����մϴ�.
			*/
			static bool Terminate();
			
			/**
			* �ܺ� ���̺귯�� ���� Ŭ������ �ʱ�ȭ ���¸� �����ɴϴ�.
			*/
			static bool IsInitialized();

			static EDeviceLibraryStatus GetFoundLibrary(CString strLib);
			static bool SetFoundLibrary(CString strLib, bool bStatus);

		protected:
			static CLibraryManager* GetInstance();

			bool m_bInitialized = false;
			std::vector<std::pair<CString, bool>> m_vctLibraryStatus;

		};
	}
}
