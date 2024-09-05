#pragma once

namespace Ravid
{
	namespace Miscellaneous
	{
		/**
		* ���� �ϵ���� ������ �������� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CHardwareInfo : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CHardwareInfo);

		public:
			CHardwareInfo();
			virtual ~CHardwareInfo();
			
			/**
			* CPU ���� �����ϴ� ��ɾ� ��Ʈ�� �����ɴϴ�.
			*
			* return value : ECPUInstructionType enum �� ����� ��ȯ�մϴ�.
			*	SSE, SSE2, SSE3, SSE4, XOP, AVX, AVX2 �� ���յ� ����� ��ȯ�մϴ�.
			*/
			static ECPUInstructionType GetCPUInstruction();
			
			/**
			* ��ġ�� �� �޸� ũ�⸦ �����ɴϴ�.
			*
			* return value : ULONGLONG �� �� �޸� ũ�⸦ ��ȯ�մϴ�.
			*/
			static ULONGLONG GetTotalMemory();
			
			/**
			* ���� ��� ������ �޸� ũ�⸦ �����ɴϴ�.
			*
			* return value : ULONGLONG �� �� �޸� ũ�⸦ ��ȯ�մϴ�.
			*/
			static ULONGLONG GetAvailableMemory();
			
			/**
			* ���� CPU ��뷮�� �����ɴϴ�.
			*
			* return value : double �� CPU ��뷮�� ��ȯ�մϴ�.
			*/
			static double GetCPUUsage();
			
			/**
			* ������ ��Ű���� ���� �����ɴϴ�.
			* �� ���μ����� ������ ��Ű���� �����մϴ�.
			*
			* return value : int �� �ھ� ���� ��ȯ�մϴ�.
			*/
			static int GetProcessorPackageCount();
			
			/**
			* CPU ������ ���� �����ɴϴ�.
			*
			* return value : int �� �ھ� ���� ��ȯ�մϴ�.
			*/
			static int GetNumaNodeCount();
			
			/**
			* ������ ���μ����� ���� �����ɴϴ�.
			*
			* return value : int �� ĳ�� ���� ��ȯ�մϴ�.
			*/
			static int GetPhysicalProcessorCoreCount();
			
			/**
			* ���� ���μ����� ���� �����ɴϴ�.
			*
			* return value : int �� ĳ�� ���� ��ȯ�մϴ�.
			*/
			static int GetLogicalProcessorCoreCount();
			
			/**
			* L1 ĳ�� ���� �����ɴϴ�.
			* ���� ������ �ھ� ���� 2�� (������ ĳ��, ��� ĳ��) �Դϴ�.
			*
			* return value : int �� ĳ�� ���� ��ȯ�մϴ�.
			*/
			static int GetProcessorL1CacheCount();
			
			/**
			* L2 ĳ�� ���� �����ɴϴ�.
			* ���� ������ �ھ� ���� �����մϴ�.
			*
			* return value : int �� ĳ�� ���� ��ȯ�մϴ�.
			*/
			static int GetProcessorL2CacheCount();
			
			/**
			* L3 ĳ�� ���� �����ɴϴ�.
			* �ھ� ���� ������� CPU �� 1�� Ȥ�� ���κ��� 1���� �����˴ϴ�.
			*
			* return value : int �� ĳ�� ���� ��ȯ�մϴ�.
			*/
			static int GetProcessorL3CacheCount();
			
			/**
			* L1 ĳ�� ����� �����ɴϴ�.
			* CPU �� �޸𸮷κ��� �����͸� ������ �� ĳ�� ������ ��ŭ ����� �����մϴ�.
			*
			* return value : int �� ĳ�� ����� ��ȯ�մϴ�.
			*/
			static int GetProcessorL1CacheSize();
			
			/**
			* L2 ĳ�� ����� �����ɴϴ�.
			* CPU �� �޸𸮷κ��� �����͸� ������ �� ĳ�� ������ ��ŭ ����� �����մϴ�.
			*
			* return value : int �� ĳ�� ����� ��ȯ�մϴ�.
			*/
			static int GetProcessorL2CacheSize();
			
			/**
			* L3 ĳ�� ����� �����ɴϴ�.
			* CPU �� �޸𸮷κ��� �����͸� ������ �� ĳ�� ������ ��ŭ ����� �����մϴ�.
			*
			* return value : int �� ĳ�� ����� ��ȯ�մϴ�.
			*/
			static int GetProcessorL3CacheSize();
			
			/**
			* L1 ĳ�ö��� ����� �����ɴϴ�.
			* CPU �� �޸𸮷κ��� �����͸� ������ �� ĳ�ö��� ������ ��ŭ �����ɴϴ�.
			*
			* return value : int �� ĳ�ö��� ����� ��ȯ�մϴ�.
			*/
			static int GetProcessorL1LineSize();
			
			/**
			* L2 ĳ�ö��� ����� �����ɴϴ�.
			* CPU �� �޸𸮷κ��� �����͸� ������ �� ĳ�ö��� ������ ��ŭ �����ɴϴ�.
			*
			* return value : int �� ĳ�ö��� ����� ��ȯ�մϴ�.
			*/
			static int GetProcessorL2LineSize();
			
			/**
			* L3 ĳ�ö��� ����� �����ɴϴ�.
			* CPU �� �޸𸮷κ��� �����͸� ������ �� ĳ�ö��� ������ ��ŭ �����ɴϴ�.
			*
			* return value : int �� ĳ�ö��� ����� ��ȯ�մϴ�.
			*/
			static int GetProcessorL3LineSize();
		};
	}
}

