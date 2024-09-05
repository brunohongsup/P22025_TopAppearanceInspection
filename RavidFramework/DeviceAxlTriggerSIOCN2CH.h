#pragma once

#include "DeviceTrigger.h"


namespace Ravid
{
	namespace Device
	{
		class AFX_EXT_CLASS CDeviceAxlTriggerSIOCN2CH : public CDeviceTrigger
		{
		public:
			RavidUseDynamicCreation();

			RavidPreventCopySelf(CDeviceAxlTriggerSIOCN2CH);

			DECLARE_DYNAMIC(CDeviceAxlTriggerSIOCN2CH)


			CDeviceAxlTriggerSIOCN2CH();
			virtual ~CDeviceAxlTriggerSIOCN2CH();

			virtual EDeviceInitializeResult Initialize() override;
			virtual EDeviceTerminateResult Terminate() override;

			virtual bool LoadSettings() override;

			virtual bool EnableTrigger() override;
			virtual bool DisableTrigger() override;

			virtual bool IsTriggerEnabled() override;

			virtual long GetEncoderCount() override;
			virtual long GetTriggerCount() override;
			virtual bool ResetCounter() override;

			/**
			* ī���� ����� ��ġ ������ �����Ѵ�.
			* ���� ��ġ �̵����� ���� �޽� ������ �����ϴµ�,
			* ex) 1mm �̵��� 1000�� �ʿ��ϴٸ�dMoveUnitPerPulse = 0.001�� �Է��ϰ�,
			*     ���� ��� �Լ��� ��ġ�� ���õ� ���� mm ������ �����ϸ� �ȴ�.
			*/
			virtual EAxlTriggerSIOCN2CHGetFunction GetUnitPerPulse(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetUnitPerPulse(_In_ double dblParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerFunction(_Out_ EDeviceAxlTriggerSIOCN2CTriggerFunction* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerFunction(_In_ EDeviceAxlTriggerSIOCN2CTriggerFunction eParam);
			
			/**
			* SIO-CN2CH/HPC4�� ���
			* dwMethod --> 0x00 : Up/Down ���, A phase : �޽�, B phase : ����
			* dwMethod --> 0x01 : Phase-A and phase-B pulses, x1 multiplication
			* dwMethod --> 0x02 : Phase-A and phase-B pulses, x2 multiplication
			* dwMethod --> 0x03 : Phase-A and phase-B pulses, x4 multiplication
			*/
			virtual EAxlTriggerSIOCN2CHGetFunction GetEncoderInputMethod(_Out_ EDeviceAxlTriggerSIOCN2CHEncoderInputMethod* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetEncoderInputMethod(_In_ EDeviceAxlTriggerSIOCN2CHEncoderInputMethod eParam);

			/**
			* ī���� ����� Encoder �Է� ��ȣ�� �����Ѵ�.
			* dwSource -->  0x00 : 2(A/B)-Phase ��ȣ.
			* dwSource -->  0x01 : Z-Phase ��ȣ.(���⼺ ����.)
			*/ 
			virtual EAxlTriggerSIOCN2CHGetFunction GetEncoderSource(_Out_ EDeviceAxlTriggerSIOCN2CHEncoderSource* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetEncoderSource(_In_ EDeviceAxlTriggerSIOCN2CHEncoderSource eParam);
			
			/**
			* ī���� ����� ���ڴ� �Է� ī���͸� ���� ����� �����Ѵ�.
			* dwReverse --> 0x00 : �������� ����.
			* dwReverse --> 0x01 : ����.
			*/ 
			virtual EAxlTriggerSIOCN2CHGetFunction GetEncoderReverse(_Out_ bool* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetEncoderReverse(_In_ bool bParam);
			
			/**
			* SIO-CN2CH�� ���
			* dwMode -->  0x00 : ���� ��ġ Ʈ���� �Ǵ� �ֱ� ��ġ Ʈ����. 
			*/
			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerMode(_Out_ EDeviceAxlTriggerSIOCN2CHTriggerMode* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerMode(_In_ EDeviceAxlTriggerSIOCN2CHTriggerMode eParam);
			
			/**
			* ī���� ����� Ʈ���� ��� �޽��� ��� ������ �����Ѵ�.
			* dwLevel -->  0x00 : Ʈ���� ��½� 'Low' ���� ���.
			* dwLevel -->  0x01 : Ʈ���� ��½� 'High' ���� ���.
			*/
			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerActiveLevel(_Out_ EDeviceAxlTriggerSIOCN2CHActiveLevel* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerActiveLevel(_In_ EDeviceAxlTriggerSIOCN2CHActiveLevel eParam);
			
			/**
			* ī���� ����� ��ġ �ֱ� ��� Ʈ���� ���� ��ġ ������ ���� ��ȿ����� �����Ѵ�.
			* dwDirection -->  0x00 : ī������ ��/���� ���Ͽ� Ʈ���� �ֱ� ���� ���.
			* dwDirection -->  0x01 : ī���Ͱ� ���� �Ҷ��� Ʈ���� �ֱ� ���� ���.
			* dwDirection -->  0x02 : ī���Ͱ� ���� �Ҷ��� Ʈ���� �ֱ� ���� ���.
			*/
			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerDirectionCheck(_Out_ EDeviceAxlTriggerSIOCN2CHTriggerDirectionCheck* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerDirectionCheck(_In_ EDeviceAxlTriggerSIOCN2CHTriggerDirectionCheck eParam);
			
			/**
			* ī���� ����� Ʈ���� ��� �޽� ���� �����Ѵ�.
			* ���� : uSec
			*/
			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerPulseWidth(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerPulseWidth(_In_ double dblParam);
			
			/**
			* ī���� ����� Ʈ���� ��� ���� �� ���� ���� �����Ѵ�.
			* ��ġ �ֱ� Ʈ���� ��ǰ�� ��� ��ġ �ֱ�� Ʈ���� ����� �߻���ų ���� �� ���� ���� �����Ѵ�.
			* ���� ��ġ Ʈ���� ��ǰ�� ��� Ram ���� ������ Ʈ���� ������ ���� ���� ��ġ�� �����Ѵ�.
			* ���� : AxcMotSetMoveUnitPerPulse�� ������ ����.
			* Note : ���Ѱ��� ���Ѱ����� �������� �����Ͽ��� �մϴ�.
			*/
			virtual EAxlTriggerSIOCN2CHGetFunction GetStartPosition(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetStartPosition(_In_ double dblParam);
			
			/**
			* ī���� ����� Ʈ���� ��� ���� �� ���� ���� �����Ѵ�.
			* ��ġ �ֱ� Ʈ���� ��ǰ�� ��� ��ġ �ֱ�� Ʈ���� ����� �߻���ų ���� �� ���� ���� �����Ѵ�.
			* ���� ��ġ Ʈ���� ��ǰ�� ��� Ʈ���� ������ ������ Ram �� ������ ������ Ʈ���� ������ ����Ǵ� ��ġ�� ���ȴ�.
			* ���� : AxcMotSetMoveUnitPerPulse�� ������ ����.
			* Note : ���Ѱ��� ���Ѱ����� ū���� �����Ͽ��� �մϴ�.
			*/
			virtual EAxlTriggerSIOCN2CHGetFunction GetEndPosition(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetEndPosition(_In_ double dblParam);
			
			/**
			* ī���� ����� ��ġ �ֱ� ��� Ʈ���ſ� ���Ǵ� ��ġ �ֱ⸦ �����Ѵ�.
			* ���� : AxcMotSetMoveUnitPerPulse�� ������ ����.
			*/
			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerPeriod(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerPeriod(_In_ double dblParam);

			/**
			* 1. AXT_SIO_CN2CH�� ���
			* dwTrigNum	--> 131072(=0x20000) ������ ���� ����
			* dwTrigPos	--> DWORD�� Data �Է� ����
			* dwDirection	--> 0x0(default) : dwTrigPos[0], dwTrigPos[1] ..., dwTrigPos[dwTrigNum - 1] ������ Data�� Write �Ѵ�.
			* 				0x1			 : dwTrigPos[dwTrigNum - 1], dwTrigPos[dwTrigNum - 2], ..., dwTrigPos[0] ������ Data�� Write �Ѵ�.
			* *����* 1) dwDirection: Data Write ������ �ٸ� �� ��ɻ��� ���� ����
			* 	  2) AXC Manual�� AxcTriggerSetAbs - Description�� �����Ͽ� data�� ���� �� ����ؾ� ��
			*/
			virtual bool ClearAbsolutePosition();
			virtual bool SetAbsoluteTriggerPosition(_In_ std::vector<DWORD>& refvctPositions);
			virtual bool SetAbsoluteTriggerPosition(_In_ std::vector<DWORD>* pvctPositions);

			virtual bool OnParameterChanged(_In_ int nParam, _In_ CString strValue) override;

		public:
			DECLARE_MESSAGE_MAP()

		protected:
			virtual bool DoesModuleExist();

		protected:
			bool m_bTriggerEnabled = false;

			std::vector<DWORD> m_vctTrigPos;
		};
	}
}

