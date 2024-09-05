#pragma once

#include "RavidImage.h"

namespace Ravid
{
	namespace Algorithms
	{
		/**
		* 3D �����͸� �̿��Ͽ� ���� ��ȯ ����� �����ϴ� Ŭ�����Դϴ�.
		* �� Ŭ������ ���� �׽�Ʈ�� �Ϸ���� �ʾҽ��ϴ�.
		*/
		class AFX_EXT_CLASS CRavidImage3DProfile : public CRavidImage
		{
		public:
			CRavidImage3DProfile();
			virtual ~CRavidImage3DProfile();

			enum EInnermostPosition
			{
				EInnermostPosition_FirstPixel = 0,
				EInnermostPosition_LastPixel,
			};

			/**
			* ���� ��ü�� �Էµ� ũ��� �ʱ�ȭ �մϴ�.
			* ���� �����ʹ� float Ÿ������ �����մϴ�.
			*
			* param[in] st3DSizeX : x �� ����
			* param[in_opt] st3DSizeY : y�� ���� (Default : 1)
			*/
			virtual void Initialize(size_t st3DSizeX, size_t st3DSizeY = 1);
			
			/**
			* ���� ��ü�� �����մϴ�.
			*/
			virtual void Terminate();
			
			/**
			* ���� ��ü�� �Էµ� ���� ���̸� �����ɴϴ�.
			*
			* return value : size_t ���·� ��ȯ�մϴ�.
			*/
			size_t Get3DSizeX();
			
			/**
			* ���� ��ü�� �Էµ� ���� ���̸� �����ɴϴ�.
			*
			* return value : size_t ���·� ��ȯ�մϴ�.
			*/
			size_t Get3DSizeY();
			
			/**
			* ���� ��ü�� ���� ������ ��ġ�� �����ɴϴ�.
			*
			* return value : float* ���·� ��ȯ�մϴ�.
			*/
			virtual float* GetRawData();
			
			/**
			* ���� ����� �Ұ����մϴ�.
			*/
			virtual EAlgorithmResult CalculateData(_In_ double dblCameraAngle, _In_ double dblLaserAngle, _In_ double dblCameraAccuracyX, _In_ double dblMotionAccuracyY, _Out_ CRavidImage* pResult3D, _In_opt_ CRavidImage3DProfile* pBase = nullptr);
			
			/**
			* ���� ����� �Ұ����մϴ�.
			*/
			virtual EAlgorithmResult CalculateDataForRotaryStage(_In_ double dblCameraAngle, _In_ double dblLaserAngle, _In_ double dblCameraAccuracy, _In_ double dblInnermostAccuracy, _In_ double dblInnermostRadius, _In_ EInnermostPosition eInnermostPosition, _Out_ CRavidImage* pResult3D, _In_opt_ CRavidImage3DProfile* pBase = nullptr);
			
			/**
			* ���� ����� �Ұ����մϴ�.
			*/
			virtual EAlgorithmResult CalculateDataTest(_In_ double dblCameraAngle, _In_ double dblLaserAngle, _In_ double dblCameraAccuracy, _In_ double dblInnermostAccuracy, _In_ double dblInnermostRadius, _In_ EInnermostPosition eInnermostPosition, _Out_ CRavidImage* pResult3D, _In_opt_ CRavidImage3DProfile* pBase = nullptr);
			
		protected:
			size_t m_st3DSizeX = 0;
			size_t m_st3DSizeY = 0;
			
			float* m_pfPeak = nullptr;

		};
	}
}

