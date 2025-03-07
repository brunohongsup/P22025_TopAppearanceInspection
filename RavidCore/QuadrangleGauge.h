#pragma once

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalQuadrangleGauge;

		class CRavidImage;
		
		/**
		* 이미지의 사각형 객체를 측정하여 추정된 결과를 제공하는 클래스입니다.
		*/
		class AFX_EXT_CLASS CQuadrangleGauge : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CQuadrangleGauge);

		public:
			CQuadrangleGauge();
			virtual ~CQuadrangleGauge();
			
			/**
			* 특징을 찾기 위한 화소 값의 변화 방법입니다.
			*/
			enum ETransitionType
			{
				ETransitionType_BW = 0,
				ETransitionType_WB,
				ETransitionType_BWorWB,
				ETransitionType_BWB,
				ETransitionType_WBW,
			};
			/**
			* 특징이 나타난 위치를 보정하는 방법입니다.
			*/
			enum ETransitionChoice
			{
				ETransitionChoice_Begin = 0,
				ETransitionChoice_End,
				ETransitionChoice_Closest,
				ETransitionChoice_LargestAmplitude,
				ETransitionChoice_LargestArea,
			};

			/**
			* 알고리즘을 실행합니다.
			*
			* param[in] pImgInfo : 입력 이미지 (Pointer)
			* param[in_opt] pGeometry : CRavidRect 검사 ROI (Pointer)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>* pGeometry);

			/**
			* 알고리즘을 실행합니다.
			*
			* param[in] refImgInfo : 입력 이미지 (Reference)
			* param[in_opt] pGeometry : CRavidRect 검사 ROI (Pointer)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<int>* pGeometry);

			/**
			* 알고리즘을 실행합니다.
			*
			* param[in] pImgInfo : 입력 이미지 (Pointer)
			* param[in_opt] pGeometry : CRavidRect 검사 ROI (Pointer)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<long long>* pGeometry);

			/**
			* 알고리즘을 실행합니다.
			*
			* param[in] refImgInfo : 입력 이미지 (Reference)
			* param[in_opt] pGeometry : CRavidRect 검사 ROI (Pointer)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<long long>* pGeometry);

			/**
			* 알고리즘을 실행합니다.
			*
			* param[in] pImgInfo : 입력 이미지 (Pointer)
			* param[in_opt] pGeometry : CRavidRect 검사 ROI (Pointer)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<float>* pGeometry);

			/**
			* 알고리즘을 실행합니다.
			*
			* param[in] refImgInfo : 입력 이미지 (Reference)
			* param[in_opt] pGeometry : CRavidRect 검사 ROI (Pointer)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<float>* pGeometry);

			/**
			* 알고리즘을 실행합니다.
			*
			* param[in] pImgInfo : 입력 이미지 (Pointer)
			* param[in_opt] pGeometry : CRavidRect 검사 ROI (Pointer)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>* pGeometry = nullptr);

			/**
			* 알고리즘을 실행합니다.
			*
			* param[in] refImgInfo : 입력 이미지 (Reference)
			* param[in_opt] pGeometry : CRavidRect 검사 ROI (Pointer)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<double>* pGeometry = nullptr);
			
			/**
			* 실행 전 사용합니다.
			* 측정하기 위한 위치, 형태를 설정합니다.
			*
			* param[in] refGeometry : 탐색 위치 (Reference)
			* param[in] dblTolerance : 탐색 너비
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidQuadrangle<double>& refGeometry, _In_ double dblTolerance);
			
			/**
			* 실행 전 사용합니다.
			* 측정하기 위한 위치, 형태를 설정합니다.
			*
			* param[in] pGeometry : 탐색 위치 (Pointer)
			* param[in] dblTolerance : 탐색 너비
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidQuadrangle<double>* pGeometry, _In_ double dblTolerance);
			
			/**
			* 설정된 탐색 중심 위치를 가져옵니다.
			*
			* return value : CRavidPoint 클래스로 반환합니다.
			*/
			CRavidPoint<double> GetCenter();
			
			/**
			* 설정된 탐색 영역 범위를 가져옵니다.
			*
			* return value : double 값으로 반환합니다.
			*/
			double GetTolerance();
			
			/**
			* 설정된 탐색 영역 각도를 가져옵니다.
			*
			* return value : double 값으로 반환합니다.
			*/
			double GetAngle();
			
			/**
			* 설정된 탐색 영역 각도를 Radian 으로 가져옵니다.
			*
			* return value : double 값으로 반환합니다.
			*/
			double GetRadian();
			
			/**
			* 설정된 탐색 영역 면적을 가져옵니다.
			*
			* return value : double 값으로 반환합니다.
			*/
			double GetArea();
			
			/**
			* 설정된 화소값 탐색 방법을 가져옵니다.
			*
			* return value : enum ETransitionType 타입을 반환합니다.
			*/
			ETransitionType GetTransitionType();
						
			/**
			* 실행 전 사용합니다.
			* 화소값 변화 탐색 방법을 설정함니다.
			*
			* param[in] eTransitionType : 화소값 변화 탐색 방법
			*/
			void SetTransitionType(_In_ ETransitionType eTransitionType);
			
			/**
			* 설정된 탐색 보정 방법을 가져옵니다.
			*
			* return value : enum ETransitionChoice 타입을 반환합니다.
			*/
			ETransitionChoice GetTransitionChoice();

			/**
			* 실행 전 사용합니다.
			* 탐색 보정 방법을 설정함니다.
			*
			* param[in] eTransitionChoice : 보정 방법
			*/
			void SetTransitionChoice(_In_ ETransitionChoice eTransitionChoice);
			
			/**
			* 설정된 변화 최소량을 가져옵니다.
			*
			* return value : long 값으로 반환합니다.
			*/
			long GetThreshold();

			/**
			* 실행 전 사용합니다.
			* 변화 최소량을 설정합니다.
			*
			* param[in] nThreshold : 밝기 변화량
			*/
			void SetThreshold(_In_ long nThreshold);
			
			/**
			* 설정된 변화 증폭량을 가져옵니다.
			*
			* return value : long 값으로 반환합니다.
			*/
			long GetMinimumAmplitude();

			/**
			* 실행 전 사용합니다.
			* 변화 증폭량을 설정합니다.
			*
			* param[in] nMinimumAmplitude : 변화 증폭량
			*/
			void SetMinimumAmplitude(_In_ long nMinimumAmplitude);
			
			/**
			* 현재 설정된 탐색 각도 간격을 가져옵니다.
			*
			* return value : double 값으로 반환합니다.
			*/
			double GetSamplingStep();

			/**
			* 실행 전 사용합니다.
			* 탐색 각도 간격을 설정합니다.
			*
			* param[in] dblSamplingStep : 간격
			*/
			void SetSamplingStep(_In_ double dblSamplingStep);
			
			/**
			* 설정된 객체 추정 유효 거리를 가져옵니다.
			*
			* return value : double 값으로 반환합니다.
			*/
			double GetOutLiersThreshold();

			/**
			* 실행 전 사용합니다.
			* 객체 추정 유효 거리를 설정합니다.
			*
			* param[in] dblOutLiersThreshold : 추정 유효 거리
			*/
			void SetOutLiersThreshold(_In_ double dblOutLiersThreshold);
			
			/**
			* 설정된 객체 추정 반복 횟수를 가져옵니다.
			*
			* return value : int 값으로 반환합니다.
			*/
			int GetNumOfPass();

			/**
			* 실행 전 사용합니다.
			* 객체 추정 반복 횟수를 설정합니다.
			*
			* param[in] nNumOfPass : 추정 유효 거리
			*/
			void SetNumOfPass(_In_ int nNumOfPass);			
			
			/**
			* 설정된 탐색 유효 주변 참조 데이터 수를 가져옵니다.
			*
			* return value : int 값으로 반환합니다.
			*/
			long GetThickness();

			/**
			* 실행 전 사용합니다.
			* 탐색 유효 주변 참조 데이터 수를 설정합니다.
			*
			* param[in] nThickness : 주변 참조 데이터 수
			*/
			void SetThickness(_In_ long nThickness);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체를 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : CRavidQuadrangle 클래스 형태로 반환합니다.
			*/
			CRavidQuadrangle<double> GetMeasuredObject(_In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체를 가져옵니다.
			*
			* param[out] refGeometry : 결과 객체 (Reference)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidQuadrangle<double>& refGeometry, _In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체를 가져옵니다.
			*
			* param[out] pGeometry : 결과 객체 (Pointer)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidQuadrangle<double>* pGeometry, _In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체 중심을 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : CRavidPoint 클래스 형태로 반환합니다.
			*/
			CRavidPoint<double> GetMeasuredCenter(_In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체 중심을 가져옵니다.
			*
			* param[out] refGeometry : 결과 객체 (Reference)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>& refGeometry, _In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체 중심을 가져옵니다.
			*
			* param[out] pGeometry : 결과 객체 (Pointer)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>* pGeometry, _In_opt_ int nIndex = 0);
						
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체 가로 길이을 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : double 형태로 반환합니다.
			*/
			double GetMeasuredWidth(_In_opt_ int nIndex = 0);
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체 세로 길이을 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : double 형태로 반환합니다.
			*/
			double GetMeasuredHeight(_In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체 면적을 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : double 형태로 반환합니다.
			*/
			double GetMeasuredArea(_In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체 회전 각도를 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : double 형태로 반환합니다.
			*/
			double GetMeasuredAngle(_In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 추정 객체 회전 각도를 Radian 으로 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : double 형태로 반환합니다.
			*/
			double GetMeasuredRadian(_In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 유효 점의 리스트를 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : std::vector<CRavidPoint<double> > 형태로 반환합니다.
			*/
			std::vector<CRavidPoint<double> > GetMeasuredValidPoints(_In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 유효 점의 리스트를 가져옵니다.
			*
			* param[out] refVctResult : 결과 객체 리스트 (Reference)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredValidPoints(_Out_ std::vector<CRavidPoint<double> >& refVctResult, _In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 유효 점의 리스트를 가져옵니다.
			*
			* param[out] pVctResult : 결과 객체 리스트 (Pointer)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredValidPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 무효 점의 리스트를 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : std::vector<CRavidPoint<double> > 형태로 반환합니다.
			*/
			std::vector<CRavidPoint<double> > GetMeasuredInvalidPoints(_In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 무효 점의 리스트를 가져옵니다.
			*
			* param[out] refVctResult : 결과 객체 리스트 (Reference)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredInvalidPoints(_Out_ std::vector<CRavidPoint<double> >& refVctResult, _In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 무효 점의 리스트를 가져옵니다.
			*
			* param[out] pVctResult : 결과 객체 리스트 (Pointer)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredInvalidPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 모든 점의 리스트를 가져옵니다.
			*
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : std::vector<CRavidPoint<double> > 형태로 반환합니다.
			*/
			std::vector<CRavidPoint<double> > GetMeasuredPoints(_In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 모든 점의 리스트를 가져옵니다.
			*
			* param[out] refVctResult : 결과 객체 리스트 (Reference)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<CRavidPoint<double> >& refVctResult, _In_opt_ int nIndex = 0);
			
			/**
			* 실행 후 사용합니다.
			* 입력된 인덱스의 모든 점의 리스트를 가져옵니다.
			*
			* param[out] pVctResult : 결과 객체 리스트 (Pointer)
			* param[in_opt] nIndex : 결과 인덱스 (Default : 0)
			*
			* return value : 실패하면 EAlgorithmResult_OK 이외의 값을 가집니다.
			*/
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);

		private:
			void ClearInternalData();

			CInternalQuadrangleGauge* m_pInternal = nullptr;
		};
	}
}

