#pragma once

#include <vector>

namespace Ravid
{
	using namespace Algorithms;

	namespace Mathematics
	{
		/**
		* �Էµ� �����ͷ� �м��ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CStatistics : public CRavidObject
		{
			//RavidUseDynamicCreation(this);
			RavidPreventCopySelf(CStatistics);

		public:
			CStatistics() = delete;
						
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ּҰ��� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMin(_In_ std::vector<double>& vctData, _Out_ double &OutputData);
						
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �ִ밪�� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMax(_In_ std::vector<double>& vctData, _Out_ double &OutputData);
						
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �߾Ӱ��� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetMedian(_In_ std::vector<double>& vctData, _Out_ double &OutputData);
						
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� �л긦 ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetVariance(_In_ std::vector<double>& vctData, _Out_ double &OutputData);
						
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ float* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ float* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ double* pData, _In_ size_t stCount, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[in] stCount : �Է� ������ ��
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ double* pData, _In_ size_t stCount, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<float>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<float>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<double>* pData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] pData : �Է� ������ ����Ʈ (Pointer)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<double>* pData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<float>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<float>& vctData, _Out_ double &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<double>& vctData, _Out_ float &OutputData);
			
			/**
			* �Էµ� ��ü�� ǥ�������� ����մϴ�.
			*
			* param[in] vctData : �Է� ������ ����Ʈ (Reference)
			* param[out] OutputData : ��� ������ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			static EAlgorithmResult GetStandardDeviation(_In_ std::vector<double>& vctData, _Out_ double &OutputData);

		};
	}
}