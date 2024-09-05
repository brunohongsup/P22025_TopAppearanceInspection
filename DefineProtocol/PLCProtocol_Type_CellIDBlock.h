#pragma once
#include <string.h>
#include "Protocol_Type_LotID.h"
#include "Protocol_Type_CellID.h"
#include "PLCProtocol_Type_Header_Switch_Bit_Group.h"

#ifndef CELL_ID_NUMBER
#define	CELL_ID_NUMBER	2
#endif // !CELL_ID_NUMBER


namespace PLC_PROTOCOL_DEFINE
{
	using namespace PROTOCOL_DEFINE::LOT_ID;
	using namespace PROTOCOL_DEFINE::CELL_ID;
	using namespace SWITCH_BIT_GROUP;

#pragma pack(1)
	namespace Cell_ID_Block
	{
		struct stCellIDBlockUnit
		{
			unsigned short		_nCellIDNumber;					//�� id ����(1~2)
			stSwitch_Bit_Group	_stBitGroup;					//��Ʈ ������ ������ ����
			stLotIDUnit			_stLotID;						//LOT ID ó�� ����ü
			stCellIDUnit		_stCellID[CELL_ID_NUMBER];		//Cell ID ó�� ����ü

			stCellIDBlockUnit(unsigned short nCellIDNumber = 0)
			{
				_nCellIDNumber = nCellIDNumber;
				InitializeCellIDBlockUnit();
			}

			void InitializeCellIDBlockUnit(void)
			{
				_stBitGroup.InitializeSwitch_Bit_Group();
				_stLotID.InitializeASCII_Type_ID_10Byte();
				for (unsigned short i = 0; i < _nCellIDNumber; i++)
				{
					_stCellID[i].InitializeASCII_Type_ID_10Byte();
				}
			}

			/// <summary>
			/// ���Ź��� ������ �޼����� ��ȯ
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			CStringA GetLotID_CellID_ToString(void)
			{
				CStringA str;
				str.Format("CellNum=%u,LotID=%s,%s", _nCellIDNumber, _stLotID.GetLotID().GetString(), GetCellIDAll());
				return str;
			}

			CStringA GetCellIDAll(void) const
			{
				CStringA strCellAll;
				switch(_nCellIDNumber)
				{
				case 1:
					strCellAll.Format("CellID_1=%s", _stCellID[0].GetCellID().GetString());
					break;
				default:
				case 2:
					strCellAll.Format(("CellID_1=%s,CellID_2=%s"), _stCellID[0].GetCellID().GetString(), _stCellID[1].GetCellID().GetString());
					break;
				case 0:
					strCellAll= ("CellID_1=NULL,CellID_2=NULL");
					break;
				}
				return strCellAll;
			}

			CStringA GetCellIDAllOnly_4CSV(void) const
			{
				CStringA strOut;
				switch (_nCellIDNumber)
				{
				case 1:
					strOut.Format("%s", _stCellID[0].GetCellID().GetString());
					break;
				case 2:
				default:
					strOut.Format("%s,%s", _stCellID[0].GetCellID().GetString(), _stCellID[1].GetCellID().GetString());
					break;
				case 0:
					strOut = "NULL";
					break;
				}
				return strOut;
			}

			/// <summary>
			/// csv ���� ���ڿ� ���� ��ȯ
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			CStringA GetLotIDCell_4CSV(void) const
			{
				CStringA strOut;
				switch (_nCellIDNumber)
				{
				default:
				case 2:
					strOut.Format(("%u,%s,%s,%s"), _nCellIDNumber, _stLotID.GetLotID().GetString(), _stCellID[0].GetCellID().GetString(), _stCellID[1].GetCellID().GetString());
					break;
				case 1:
					strOut.Format(("%u,%s,%s"), _nCellIDNumber, _stLotID.GetLotID().GetString(), _stCellID[0].GetCellID().GetString());
					break;
				case 0:
					strOut.Format(("%u,NULL"), _nCellIDNumber);
					break;
				}

				return strOut;
			}

			/// <summary>
			/// �� id ����, lot id, cell id1, cell id2,short ����,ġ�� ����,ng ��ũ ��� ǥ��
			/// </summary>
			/// <param name="nQueueCount">Queue ���� ����</param>
			/// <returns>�ϼ��� ���ڿ�</returns>
			CStringA LotCellIDAndSwitchBitString(const INT_PTR& nQueueCount)
			{
				CStringA strOut;
#ifdef _WIN64
				strOut.Format("Count=%I64d,CellNum=%u,LotID=%s,%s,BitModeValue=%u", nQueueCount, _nCellIDNumber, _stLotID.GetLotID().GetString(), GetCellIDAll().GetString(), GetBitValue());
#else
				strOut.Format("Count=%d,CellNum=%u,LotID=%s,%s,BitModeValue=%u", nQueueCount, _nCellIDNumber, _stLotID.GetLotID().GetString(), GetCellIDAll().GetString(), GetBitValue());
#endif // _WIN64
				
				return strOut;
			}

			unsigned short GetBitValue(void) const
			{
				return _stBitGroup.GetBitValue();
			}

			stCellIDBlockUnit& operator=(const stCellIDBlockUnit& Input)
			{
				memcpy(this, &Input, sizeof(stCellIDBlockUnit));
				return *this;
			}

			bool operator==(const stCellIDBlockUnit& Input)
			{
				return 0 == memcmp(this, &Input, sizeof(stCellIDBlockUnit));
			}

			bool operator!=(const stCellIDBlockUnit& Input)
			{
				return !operator==(Input);
			}
		};
	}
#pragma pack()
}