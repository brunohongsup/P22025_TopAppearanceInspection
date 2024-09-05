#pragma once

namespace Ravid
{
	namespace Miscellaneous
	{
		/**
		* ������ ���� üũ�� ���� ��ȯ�ߺ��˻�(CRC) ���� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CCyclicRedundancyCheck : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CCyclicRedundancyCheck);

		public:
			CCyclicRedundancyCheck();
			virtual ~CCyclicRedundancyCheck();
			
			/**
			* CRC8 �� ����� ����մϴ�.
			*
			* param[in] pSrcData : �Է� ������ (Pointer)
			* param[in_opt] stLength : �Է� ������ ���� (Pointer)
			*
			* return value : BYTE (8 bit) �� ����� ��ȯ�մϴ�.
			*/
			BYTE MakeCRC8(_In_ unsigned char* pSrcData, _In_ size_t stLength);
			
			/**
			* CRC16 �� ����� ����մϴ�.
			*
			* param[in] pSrcData : �Է� ������ (Pointer)
			* param[in_opt] stLength : �Է� ������ ���� (Pointer)
			*
			* return value : unsigned short (16 bit) �� ����� ��ȯ�մϴ�.
			*/
			unsigned short MakeCRC16(_In_ unsigned char* pSrcData, _In_ size_t stLength);
			
			/**
			* CRC32 �� ����� ����մϴ�.
			*
			* param[in] pSrcData : �Է� ������ (Pointer)
			* param[in_opt] stLength : �Է� ������ ���� (Pointer)
			*
			* return value : unsigned int (32 bit) �� ����� ��ȯ�մϴ�.
			*/
			unsigned int MakeCRC32(_In_ unsigned char* pSrcData, _In_ size_t stLength);
		};
	}
}

