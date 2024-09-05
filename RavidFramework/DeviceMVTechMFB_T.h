#pragma once

#include "DeviceTrigger.h"

namespace MFB_T
{
	// ChannelCount : Channels
	// OutportCount : DIO outputs
	// InportCount : DIO inputs
	// QueueCount : memory queue position
	// QueueStatusCount : queue free status (bit operator)
	// EncoderCount : input encoder line
	// TriggerCount : output trigger line
	// RegisterCount : PCI internal register lines
	// PCI_BASE_CS0 : User extension area 0 (MVTech Only used)
	// PCI_BASE_CS1 : User extension area 1
	// PCI_BASE_CS2 : User extension area 2
	// PCI_BASE_CS3 : User extension area 3
	enum class BoardInfo
	{
		ChannelCount = 1,
		InportCount = 16,
		OutportCount = 16,
		QueueCount = 8,
		QueueStatusCount = 1,
		EncoderCount = 1,
		TriggerCount = 1,

		RegisterCount = 22,

		MAX_BASE_ADDR_NUMS = 4,

		PCI_BASE_CS0 = 0,
		PCI_BASE_CS1 = 1,
		PCI_BASE_CS2 = 2,
		PCI_BASE_CS3 = 3,
	};

	enum class AddressMap
	{
		// �Է� ��Ʈ
		Input = 0x00, // R
		// ��� ��Ʈ
		Output = 0x80, // W

		// ���� Queue�� ���� �Ǿ����� Ȯ���մϴ�.
		// �����Ǹ� 0b0000 0000 �� ��Ʈ ���� 0->1�� ����˴ϴ�.
		// ��� �����ϸ� 255
		// ���ڴ��� �����Ͽ� Ʈ���Ÿ� �߻���Ű�� 0->1���� ����˴ϴ�.
		// ��� �Ϸ�Ǹ� 0
		QueueStatus = 0x40, // R

		// Ʈ���Ÿ� �߻��� ���ڴ� ���� �����մϴ�.
		// DWORD ���� �Է��ϸ� �˴ϴ�.
		QueuePosition0 = 0xC0, // R/W 
		QueuePosition1 = 0xC4, // R/W 
		QueuePosition2 = 0xC8, // R/W 
		QueuePosition3 = 0xCC, // R/W 
		QueuePosition4 = 0xD0, // R/W 
		QueuePosition5 = 0xD4, // R/W 
		QueuePosition6 = 0xD8, // R/W 
		QueuePosition7 = 0xDC, // R/W 

		// Queue Position �� ������ Ʈ���� ��� ��Ʈ�� �����մϴ�.
		// 0 ~ 255 �� ������ 0b0000 0000 �� �����ϸ� ����
		// ��Ʈ�������� ����� ��Ʈ�� 1 �� ��ȯ�ϸ� �˴ϴ�.
		// Queue Position �� �������� �ʾҴٸ� �������� �ʽ��ϴ�.
		QueueOrder0 = 0x200, // W
		QueueOrder1 = 0x204, // W
		QueueOrder2 = 0x208, // W
		QueueOrder3 = 0x20C, // W
		QueueOrder4 = 0x210, // W
		QueueOrder5 = 0x214, // W
		QueueOrder6 = 0x218, // W
		QueueOrder7 = 0x21C, // W

		// ���� ���ڴ� ���� �����ɴϴ�.
		EncoderRead = 0x04, // R

		// ���� Ʈ���� ���� �����ɴϴ�.
		TriggerRead = 0x08, // R

		// ���ڴ�, Ʈ���� ���� �ʱ�ȭ �մϴ�.
		// ��Ʈ�� ��������� ��� �ʱ�ȭ �˴ϴ�.
		// �ʱ�ȭ�� �Ϸ�Ǹ� 0���� ��Ʈ�� ��Ȱ��ȭ�մϴ�.
		// 0 -> 1 -> 0 �� �Է��մϴ�.
		ResetCounter = 0x84, // W

		// Ʈ���� ���� ������ �����մϴ�.
		// 0x04 : ������, 0x08 : ������, 0x0C : �����
		TriggerEnable = 0x88, // W

		// ���ڴ� ���� ����
		// 0x00 : ������ , 0x01 : ������
		EncoderDirection = 0xA4, // W

		// ���� ���ڴ� ���� ����
		SetEncoder = 0xE0, // W

		// �Էµ� ���� ���� 8 ��Ʈ�� ����� ����
		// ex) 0b0000 0101 <- �� �������� ����
		// X00, X02 Live Out, CAM+ Out
		// ex) 0b0101 0101 <- �� �������� ���� 
		// X00, X02, Y00, X02 Live Out, CAM+ Out
		LiveMode = 0xA0, // W
	};
}

namespace Ravid
{
	namespace Device
	{
		class AFX_EXT_CLASS CDeviceMVTechMFB_T : public CDeviceTrigger
		{
		public:
			RavidUseDynamicCreation();

			RavidPreventCopySelf(CDeviceMVTechMFB_T);

			DECLARE_DYNAMIC(CDeviceMVTechMFB_T)
			
			CDeviceMVTechMFB_T();
			virtual ~CDeviceMVTechMFB_T();

			virtual ptrdiff_t OnMessage(_In_ Ravid::Framework::CMessageBase* pMessage);

			virtual EDeviceInitializeResult Initialize() override;
			virtual EDeviceTerminateResult Terminate() override;

			virtual bool LoadSettings() override;
			
			// override �Լ�
			virtual bool EnableTrigger() override;
			virtual bool DisableTrigger() override;

			virtual bool IsTriggerEnabled() override;

			virtual long GetEncoderCount() override;
			virtual long GetTriggerCount() override;
			virtual bool ResetCounter() override;

			//////////////////////////////////////////////////////////////////////////
			// IO
			virtual bool ReadOutBit(_In_ int nBit);
			virtual bool ReadInBit(_In_ int nBit);

			virtual BYTE ReadOutByte();
			virtual BYTE ReadInByte();

			virtual WORD ReadOutWord();
			virtual WORD ReadInWord();

			virtual DWORD ReadOutDword();
			virtual DWORD ReadInDword();

			virtual bool WriteOutBit(_In_ int nBit, _In_ bool bOn);

			virtual bool WriteOutByte(_In_ BYTE cByte);

			virtual bool WriteOutWord(_In_ WORD wWord);

			virtual bool WriteOutDword(_In_ DWORD dwDword);
 
 			virtual bool ClearOutPort();
 
			//////////////////////////////////////////////////////////////////////////
			
			/**
			* ���� Ʈ���� ť ���¸� �����ɴϴ�. (ť �������� �����ϸ� 8 ��Ʈ�� Ȯ���մϴ�.)
			* Queue Position �� ��ϵǸ� 0 -> 1 �� ��Ʈ�� Ȱ��ȭ�˴ϴ�.
			* Min 0 (0b0000 0000) ~ 255 (0b1111 1111)
			*/
			virtual DWORD GetQueuePosition(_In_ int nIndex);
			/**
			* Ʈ���� �߻� ���ڴ� ��ġ�� �����մϴ�.
			*/
			virtual bool SetQueuePosition(_In_ int nIndex, _In_ DWORD dwPos);
			
			/**
			* Ʈ���� �߻��� �ܺ� ��� ������ �����մϴ�.
			* 0b00000000 ���ڴ� 8 ��Ʈ�� ���� ��Ʈ�� �����մϴ�. 0 -> 1�� ������ ���� �־���մϴ�.
			*/
			virtual bool SetQueueOrder(_In_ int nIndex,_In_ DWORD dwCommand);
			
			/**
			* ���� Ʈ���� ť ���¸� �����ɴϴ�. (�ε����� 8 �� ť ���¸� Ȯ���մϴ�.)
			* Queue Position �� ��ϵǸ� 0 -> 1 �� ��Ʈ�� Ȱ��ȭ�˴ϴ�.
			* Min 0 (0b0000 0000) ~ 255 (0b1111 1111)
			*/
			virtual bool GetQueueStatus(_In_ int nIndex);
			
			/**
			* ���� Ʈ���� ť ���¸� �����ɴϴ�. (ť �������� �����ϸ� 8 ��Ʈ�� Ȯ���մϴ�.)
			* Queue Position �� ��ϵǸ� 0 -> 1 �� ��Ʈ�� Ȱ��ȭ�˴ϴ�.
			* Min 0 (0b0000 0000) ~ 255 (0b1111 1111)
			*/
			virtual DWORD GetQueueStatus();

			/**
			* ���ڴ� ���� �Է°����� �����մϴ�.
			*/
			virtual bool WriteEncoder(_In_ DWORD dwCommand);
			
			/**
			* ���� �ֱ�� �ܺ� ��� ���ο� ��ȣ�� �������ϴ�. (�ֱ�� ������ �Ұ����մϴ�.)
			*/
			virtual bool WriteLive(_In_ DWORD dwCommand);
			//////////////////////////////////////////////////////////////////////////

			virtual void SetPCIVendorID(_In_ unsigned short vendorId);
			virtual void SetPCIDeviceID(_In_ unsigned short deviceId);
			
		public:
			/**
			* ����̽� �ʱ�ȭ �� ��� ��Ʈ ���¸� ���ϴ�.
			*/
			virtual EGetFunction GetUseClearInitalize(_Out_ bool * pParam);
			virtual ESetFunction SetUseClearInitalize(_In_ bool bParam);

			/**
			* ����̽� ���� �� ��� ��Ʈ ���¸� ���ϴ�. (Ʈ���� ����� IO ��� ���¸� Ŭ���� ������ �����մϴ�. ����̽� �ּ� ����.)
			*/
			virtual EGetFunction GetUseClearTerminate(_Out_ bool * pParam);
			virtual ESetFunction SetUseClearTerminate(_In_ bool bParam);
						
			/**
			* Ʈ���� �߻� ������ �����մϴ�. (����̽� �ʱ�ȭ ���� �����ϼ���.)
			*/
			virtual EGetFunction GetTriggerDirection(_Out_ EDeviceDuplexDirection* pParam);
			virtual ESetFunction SetTriggerDirection(_In_ EDeviceDuplexDirection eParam);
						
			/**
			* ���ڴ� ���� ������ �����մϴ�.
			*/
			virtual EGetFunction GetEncoderDirection(_Out_ EDeviceSimplexDirection* pParam);
			virtual ESetFunction SetEncoderDirection(_In_ EDeviceSimplexDirection eParam);

			virtual bool OnParameterChanged(_In_ int nParam, _In_ CString strValue) override;

		public:
			DECLARE_MESSAGE_MAP()

			virtual BOOL OnInitDialog();
			afx_msg void OnDestroy();
			afx_msg void OnTimer(UINT_PTR nIDEvent);

			afx_msg void OnBnClickedOutLed(_In_ UINT nID);

		protected:
			virtual bool DoesModuleExist();

			virtual bool AddControls();
			virtual bool AddQueues(double dblDPIScale, int nStartID, CFont * pBaseFont, CPoint cpLeftTopPt, CPoint cpRightBottomPt, CPoint * pResultGroupBox);
			virtual bool CreateLedArray(_In_ double dblDPIScale, _In_ CFont* pBaseFont, _In_ CPoint rpLeftTopPt, _In_ CPoint rpRightTopPt, _Out_ CRect& rrResultGroupBox);

			void AllocateIO(_In_ long nInputSize, _In_ long nOutputSize);
			void FreeIO();

		public:
			virtual bool PCIWrite(_In_ DWORD dwAddr, _In_ DWORD dwData);
			virtual DWORD PCIRead(_In_ DWORD dwAddr);

			virtual bool PCIWrite(_In_ DWORD dwCS, _In_ DWORD dwAddr, _In_ DWORD dwData);
			virtual DWORD PCIRead(_In_ DWORD dwCS, _In_ DWORD dwAddr);

			virtual DWORD PciReadReg(_In_ DWORD dwOffset);
			virtual bool PciWriteReg(_In_ DWORD dwOffset, _In_ DWORD dwData);

		protected:
			// Ctrl Trigger
			bool m_bTriggerEnabled;

			// Ctrl DIO
			DWORD m_dwInStatus;
			DWORD m_dwOutStatus;

			bool* m_pUsedInput;
			bool* m_pUsedOutput;

			CString* m_pStrInputName;
			CString* m_pStrOutputName;

			// Ctrl Device
			DWORD* m_pDwCS;
			DWORD* m_pDwCSLen;

			// Device Object
			void* m_pDeviceObject;

			// Board Info
			unsigned short m_vendorId;
			unsigned short m_deviceId;
		};
	}
}

