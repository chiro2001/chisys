/*
 * test_gui.c
 *
 *  Created on: Jul 9, 2021
 *      Author: Chiro
 */

#include "test_gui.h"

#include <stdio.h>

#include "TouchAdjust.h"
#include "fatfs.h"
#include "touch.h"

// void TestGUI() {
//   // GUI_SetLayerVisEx(1, 0);
//   GUI_SetBkColor(GUI_BLACK);
//   GUI_Clear();
//   // GUI_SetColor(GUI_WHITE);
//   // GUI_SetFont(&GUI_Font32_1);
//   // GUI_DispStringAt("Hello world!", (LCD_GetXSize() - 100) / 2,
//   // 		(LCD_GetYSize() - 20) / 2);
//   GUI_SetFont(&GUI_Font8x16);
//   GUI_SetBkColor(GUI_BLUE);
//   GUI_Clear();
//   GUI_SetPenSize(10);
//   GUI_SetColor(GUI_RED);
//   GUI_DrawLine(80, 10, 240, 90);
//   GUI_DrawLine(80, 90, 240, 10);
//   GUI_SetBkColor(GUI_BLACK);
//   GUI_SetColor(GUI_WHITE);
//   GUI_SetTextMode(GUI_TM_NORMAL);
//   GUI_DispStringHCenterAt("GUI_TM_NORMAL", 160, 10);
//   GUI_SetTextMode(GUI_TM_REV);
//   GUI_DispStringHCenterAt("GUI_TM_REV", 160, 26);
//   GUI_SetTextMode(GUI_TM_TRANS);
//   GUI_DispStringHCenterAt("GUI_TM_TRANS", 160, 42);
//   GUI_SetTextMode(GUI_TM_XOR);
//   GUI_DispStringHCenterAt("GUI_TM_XOR", 160, 58);
//   GUI_SetTextMode(GUI_TM_TRANS | GUI_TM_REV);
//   GUI_DispStringHCenterAt("GUI_TM_TRANS | GUI_TM_REV", 160, 74);
// 	// GUI_SetPenSize(1);
// 	GUI_DrawLine(0, 0, 480, 320);
//   while (1) {
//     osDelay(1000);
//   };
// }

/*********************************************************************
 *                                                                    *
 *                SEGGER Microcontroller GmbH & Co. KG                *
 *        Solutions for real time microcontroller applications        *
 *                                                                    *
 **********************************************************************
 *                                                                    *
 * C-file generated by:                                               *
 *                                                                    *
 *        GUI_Builder for emWin version 5.44                          *
 *        Compiled Nov 10 2017, 08:53:57                              *
 *        (c) 2017 Segger Microcontroller GmbH & Co. KG               *
 *                                                                    *
 **********************************************************************
 *                                                                    *
 *        Internet: www.segger.com  Support: support@segger.com       *
 *                                                                    *
 **********************************************************************
 */

// USER START (Optionally insert additional includes)
// USER END
#include "DIALOG.h"

/*********************************************************************
 *
 *       Defines
 *
 **********************************************************************
 */
#define ID_FRAMEWIN_0 (GUI_ID_USER + 0x00)
#define ID_BUTTON_0 (GUI_ID_USER + 0x01)
#define ID_CHECKBOX_0 (GUI_ID_USER + 0x02)
#define ID_DROPDOWN_0 (GUI_ID_USER + 0x03)

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
 *
 *       Static data
 *
 **********************************************************************
 */

// USER START (Optionally insert additional static data)
// USER END
/*********************************************************************
 *
 *       _aDialogCreate
 */
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = { {
		FRAMEWIN_CreateIndirect, "TestGUI", ID_FRAMEWIN_0, 93, 21, 320, 240, 0,
		0x0, 0 }, { BUTTON_CreateIndirect, "Hello!", ID_BUTTON_0, 13, 14, 80,
		20, 0, 0x0, 0 }, { CHECKBOX_CreateIndirect, "Checkbox", ID_CHECKBOX_0,
		21, 45, 80, 20, 0, 0x0, 0 }, { DROPDOWN_CreateIndirect, "Dropdown",
		ID_DROPDOWN_0, 100, 10, 80, 18, 0, 0x0, 0 },
// USER START (Optionally insert additional widgets)
// USER END
		};

/*********************************************************************
 *
 *       Static code
 *
 **********************************************************************
 */

// USER START (Optionally insert additional static code)
// USER END
/*********************************************************************
 *
 *       _cbDialog
 */
static void _cbDialog(WM_MESSAGE *pMsg) {
	WM_HWIN hItem;
	int NCode;
	int Id;
	// USER START (Optionally insert additional variables)
	// USER END

	switch (pMsg->MsgId) {
	case WM_INIT_DIALOG:
		//
		// Initialization of 'Checkbox'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_CHECKBOX_0);
		CHECKBOX_SetText(hItem, "Check");
		// USER START (Optionally insert additional code for further widget
		// initialization) USER END
		break;
	case WM_NOTIFY_PARENT:
		Id = WM_GetId(pMsg->hWinSrc);
		NCode = pMsg->Data.v;
		switch (Id) {
		case ID_BUTTON_0:  // Notifications sent by 'Hello!'
			switch (NCode) {
			case WM_NOTIFICATION_CLICKED:
				// USER START (Optionally insert code for reacting on notification
				// message) USER END
				uprint("Hello!!!\r\n")
				;
				break;
			case WM_NOTIFICATION_RELEASED:
				// USER START (Optionally insert code for reacting on notification
				// message) USER END
				break;
				// USER START (Optionally insert additional code for further
				// notification handling) USER END
			}
			break;
		case ID_CHECKBOX_0:  // Notifications sent by 'Checkbox'
			switch (NCode) {
			case WM_NOTIFICATION_CLICKED:
				// USER START (Optionally insert code for reacting on notification
				// message) USER END
				break;
			case WM_NOTIFICATION_RELEASED:
				// USER START (Optionally insert code for reacting on notification
				// message) USER END
				break;
			case WM_NOTIFICATION_VALUE_CHANGED:
				// USER START (Optionally insert code for reacting on notification
				// message) USER END
				break;
				// USER START (Optionally insert additional code for further
				// notification handling) USER END
			}
			break;
		case ID_DROPDOWN_0:  // Notifications sent by 'Dropdown'
			switch (NCode) {
			case WM_NOTIFICATION_CLICKED:
				// USER START (Optionally insert code for reacting on notification
				// message) USER END
				break;
			case WM_NOTIFICATION_RELEASED:
				// USER START (Optionally insert code for reacting on notification
				// message) USER END
				break;
			case WM_NOTIFICATION_SEL_CHANGED:
				// USER START (Optionally insert code for reacting on notification
				// message) USER END
				break;
				// USER START (Optionally insert additional code for further
				// notification handling) USER END
			}
			break;
			// USER START (Optionally insert additional code for further Ids)
			// USER END
		}
		break;
		// USER START (Optionally insert additional message handling)
		// USER END
	default:
		WM_DefaultProc(pMsg);
		break;
	}
}

/*********************************************************************
 *
 *       Public code
 *
 **********************************************************************
 */
/*********************************************************************
 *
 *       CreateTestGUI
 */
WM_HWIN CreateTestGUI(void);
WM_HWIN CreateTestGUI(void) {
	WM_HWIN hWin;

	hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate),
			_cbDialog, WM_HBKWIN, 0, 0);
	return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/

/*****************************************************************************
 * @name       :void TP_Drow_Touch_Point(u16 x,u16 y,u16 color)
 * @date       :2018-08-09
 * @function   :Draw a touch point,Used to calibrate
 * @parameters :x:Read x coordinate of the touch screen
 y:Read y
 coordinate of the touch screen color:the color value of the touch point
 * @retvalue   :None
 ******************************************************************************/
void TP_Drow_Touch_Point(u16 x, u16 y, u32 color) {
	// POINT_COLOR = color;
	GUI_SetColor(color);
	GUI_DrawLine(x - 12, y, x + 13, y);  //??????
	GUI_DrawLine(x, y - 12, x, y + 13);  //??????
	GUI_DrawPoint(x + 1, y + 1);
	GUI_DrawPoint(x - 1, y + 1);
	GUI_DrawPoint(x + 1, y - 1);
	GUI_DrawPoint(x - 1, y - 1);
	// gui_circle(x, y, POINT_COLOR, 6, 0);  //????????????
	GUI_DrawCircle(x, y, 6);
}

/*****************************************************************************
 * @name       :void TP_Draw_Big_Point(u16 x,u16 y,u16 color)
 * @date       :2018-08-09
 * @function   :Draw a big point(2*2)
 * @parameters :x:Read x coordinate of the point
 y:Read y
 coordinate of the point color:the color value of the point
 * @retvalue   :None
 ******************************************************************************/
void TP_Draw_Big_Point(u16 x, u16 y, u32 color) {
	// POINT_COLOR = color;
	GUI_SetColor(color);
	GUI_DrawPoint(x, y);  //?????????
	GUI_DrawPoint(x + 1, y);
	GUI_DrawPoint(x, y + 1);
	GUI_DrawPoint(x + 1, y + 1);
}

#define TP_SAVE_FILENAME "0:/tp_data.bin"

//////////////////////////////////////////////////////////////////////////
/*****************************************************************************
 * @name       :void TP_Save_Adjdata(void)
 * @date       :2018-08-09
 * @function   :Save calibration parameters
 * @parameters :None
 * @retvalue   :None
 ******************************************************************************/
void TP_Save_Adjdata(void) {
	// s32 temp;
	// //??????????????????!
	// temp = tp_dev.xfac * 100000000;  //??????x????????????
	// AT24CXX_WriteLenByte(SAVE_ADDR_BASE, temp, 4);
	// temp = tp_dev.yfac * 100000000;  //??????y????????????
	// AT24CXX_WriteLenByte(SAVE_ADDR_BASE + 4, temp, 4);
	// //??????x?????????
	// AT24CXX_WriteLenByte(SAVE_ADDR_BASE + 8, tp_dev.xoff, 2);
	// //??????y?????????
	// AT24CXX_WriteLenByte(SAVE_ADDR_BASE + 10, tp_dev.yoff, 2);
	// //??????????????????
	// AT24CXX_WriteOneByte(SAVE_ADDR_BASE + 12, tp_dev.touchtype);
	// temp = 0X0A;  //??????????????????
	// AT24CXX_WriteOneByte(SAVE_ADDR_BASE + 13, temp);
	FIL f;
	FRESULT res;
	UINT written = 0;
	_m_tp_dev tmp = tp_dev;
	signed long temp = 0;
	// ????????????????????????
	temp = tp_dev.xfac * 100000000;  //??????x????????????
	memcpy(&tmp.xfac, &temp, sizeof(temp));
	temp = tp_dev.yfac * 100000000;  //??????y????????????
	memcpy(&tmp.yfac, &temp, sizeof(temp));

	res = f_open(&f, TP_SAVE_FILENAME, FA_WRITE | FA_CREATE_ALWAYS);
	if (res) {
		uprint("Cannot save TP Data!\r\n");
		return;
	}
	f_write(&f, &tmp, sizeof(tmp), &written);
	f_close(&f);
}

/*****************************************************************************
 * @name       :u8 TP_Get_Adjdata(void)
 * @date       :2018-08-09
 * @function   :Gets the calibration values stored in the EEPROM
 * @parameters :None
 * @retvalue   :1-get the calibration values successfully
 0-get the
 calibration values unsuccessfully and Need to recalibrate
 ******************************************************************************/
u8 TP_Get_Adjdata(void) {
	signed long tempfac;
	FIL f;
	FRESULT res;
	_m_tp_dev tmp;
	UINT read;
	// ????????????
	res = f_open(&f, TP_SAVE_FILENAME, FA_READ);
	if (res) {
		uprint("Cannot open " TP_SAVE_FILENAME "!\r\n");
		return 0;
	}
	res = f_read(&f, &tmp, sizeof(tmp), &read);
	f_close(&f);
	if (res) {
		uprint("Cannot read " TP_SAVE_FILENAME "!\r\n");
		return 0;
	}

	tempfac = tmp.adjusted;  //???????????????,?????????????????????
	if (tempfac == 0X0A)     //???????????????????????????
			{
		memcpy(&tempfac, &tmp.xfac, sizeof(tempfac));
		tp_dev.xfac = (float) tempfac / 100000000;  //??????x????????????
		memcpy(&tempfac, &tmp.yfac, sizeof(tempfac));
		tp_dev.yfac = (float) tempfac / 100000000;  //??????y????????????
													//??????x?????????
		if (tp_dev.touchtype)                      // X,Y?????????????????????
		{
			CMD_RDX = 0X90;
			CMD_RDY = 0XD0;
		} else  // X,Y?????????????????????
		{
			CMD_RDX = 0XD0;
			CMD_RDY = 0X90;
		}
		return 1;
	}
	return 0;
}

//???????????????
const char *TP_REMIND_MSG_TBL =
		"Please use the stylus click the cross on the screen.The cross will always "
				"move until the screen adjustment is completed.";

/*****************************************************************************
 * @name       :void TP_Adj_Info_Show(u16 x0,u16 y0,u16 x1,u16 y1,u16 x2,u16
 y2,u16 x3,u16 y3,u16 fac)
 * @date       :2018-08-09
 * @function   :Display calibration results
 * @parameters :x0:the x coordinates of first calibration point
 y0:the y
 coordinates of first calibration point x1:the x coordinates of second
 calibration point y1:the y coordinates of second calibration point x2:the x
 coordinates of third calibration point y2:the y coordinates of third
 calibration point x3:the x coordinates of fourth calibration point y3:the y
 coordinates of fourth calibration point fac:calibration factor
 * @retvalue   :None
 ******************************************************************************/

void GUI_ShowNum(u16 x, u16 y, u16 val) {
	static char buf[32];
	sprintf(buf, "%u", val);
	GUI_DispStringAt(buf, x, y);
}
void TP_Adj_Info_Show(u16 x0, u16 y0, u16 x1, u16 y1, u16 x2, u16 y2, u16 x3,
		u16 y3, u16 fac) {
	// POINT_COLOR = RED;
	GUI_SetColor(GUI_RED);
	GUI_SetFont(&GUI_Font8x16);
	GUI_DispStringAt("x1:", 40, 160);
	GUI_DispStringAt("y1:", 40 + 80, 160);
	GUI_DispStringAt("x2:", 40, 180);
	GUI_DispStringAt("y2:", 40 + 80, 180);
	GUI_DispStringAt("x3:", 40, 200);
	GUI_DispStringAt("y3:", 40 + 80, 200);
	GUI_DispStringAt("x4:", 40, 220);
	GUI_DispStringAt("y4:", 40 + 80, 220);

	GUI_ShowNum(40 + 24, 160, x0);       //????????????
	GUI_ShowNum(40 + 24 + 80, 160, y0);  //????????????
	GUI_ShowNum(40 + 24, 180, x1);       //????????????
	GUI_ShowNum(40 + 24 + 80, 180, y1);  //????????????
	GUI_ShowNum(40 + 24, 200, x2);       //????????????
	GUI_ShowNum(40 + 24 + 80, 200, y2);  //????????????
	GUI_ShowNum(40 + 24, 220, x3);       //????????????
	GUI_ShowNum(40 + 24 + 80, 220, y3);  //????????????
	GUI_ShowNum(40 + 56, LCD_GetXSize(), fac);  //????????????,??????????????????95~105????????????.
}

/*****************************************************************************
 * @name       :u8 TP_Get_Adjdata(void)
 * @date       :2018-08-09
 * @function   :Calibration touch screen and Get 4 calibration parameters
 * @parameters :None
 * @retvalue   :None
 ******************************************************************************/
void TP_Adjust(void) {
	u16 pos_temp[4][2];  //???????????????
	u8 cnt = 0;
	u16 d1, d2;
	u32 tem1, tem2;
	float fac;
	u16 outtime = 0;
	cnt = 0;
	// POINT_COLOR = BLUE;
	// BACK_COLOR = WHITE;
	GUI_SetBkColor(GUI_WHITE);
	GUI_Clear();  //??????
	// POINT_COLOR = RED;  //??????
	// GUI_Clear(GUI_WHITE);  //??????
	// POINT_COLOR = BLACK;
	GUI_DispStringAt("Please use the stylus click the", 10, 40);  //??????????????????
	GUI_DispStringAt("cross on the screen.The cross will", 10, 56);  //??????????????????
	GUI_DispStringAt("always move until the screen ", 10, 72);  //??????????????????
	GUI_DispStringAt("adjustment is completed.", 10, 88);  //??????????????????

	TP_Drow_Touch_Point(20, 20, GUI_RED);  //??????1
	tp_dev.sta = 0;                        //??????????????????
	tp_dev.xfac = 0;  // xfac???????????????????????????,??????????????????????????????!????????????
	while (1)  //????????????10??????????????????,???????????????
	{
		tp_dev.scan(1);  //??????????????????
		if ((tp_dev.sta & 0xc0) == TP_CATH_PRES)
		//?????????????????????(?????????????????????.)
		{
			outtime = 0;
			tp_dev.sta &= ~(1 << 6);  //?????????????????????????????????.

			pos_temp[cnt][0] = tp_dev.x;
			pos_temp[cnt][1] = tp_dev.y;
			cnt++;
			switch (cnt) {
			case 1:
				TP_Drow_Touch_Point(20, 20, GUI_WHITE);                 //?????????1
				TP_Drow_Touch_Point(LCD_GetXSize() - 20, 20, GUI_RED);  //??????2
				break;
			case 2:
				TP_Drow_Touch_Point(LCD_GetXSize() - 20, 20, GUI_WHITE);  //?????????2
				TP_Drow_Touch_Point(20, LCD_GetYSize() - 20, GUI_RED);    //??????3
				break;
			case 3:
				TP_Drow_Touch_Point(20, LCD_GetYSize() - 20, GUI_WHITE);  //?????????3
				TP_Drow_Touch_Point(LCD_GetXSize() - 20, LCD_GetYSize() - 20,
				GUI_RED);  //??????4
				break;
			case 4:  //???????????????????????????
					 //????????????
				tem1 = abs(pos_temp[0][0] - pos_temp[1][0]);  // x1-x2
				tem2 = abs(pos_temp[0][1] - pos_temp[1][1]);  // y1-y2
				tem1 *= tem1;
				tem2 *= tem2;
				d1 = sqrt(tem1 + tem2);  //??????1,2?????????

				tem1 = abs(pos_temp[2][0] - pos_temp[3][0]);  // x3-x4
				tem2 = abs(pos_temp[2][1] - pos_temp[3][1]);  // y3-y4
				tem1 *= tem1;
				tem2 *= tem2;
				d2 = sqrt(tem1 + tem2);  //??????3,4?????????
				fac = (float) d1 / d2;
				if (fac < 0.95 || fac > 1.05 || d1 == 0 || d2 == 0)  //?????????
						{
					cnt = 0;
					TP_Drow_Touch_Point(LCD_GetXSize() - 20,
							LCD_GetYSize() - 20,
							GUI_WHITE);        //?????????4
					TP_Drow_Touch_Point(20, 20, GUI_RED);  //??????1
					TP_Adj_Info_Show(pos_temp[0][0], pos_temp[0][1],
							pos_temp[1][0], pos_temp[1][1], pos_temp[2][0],
							pos_temp[2][1], pos_temp[3][0], pos_temp[3][1],
							fac * 100);  //????????????
					continue;
				}
				tem1 = abs(pos_temp[0][0] - pos_temp[2][0]);  // x1-x3
				tem2 = abs(pos_temp[0][1] - pos_temp[2][1]);  // y1-y3
				tem1 *= tem1;
				tem2 *= tem2;
				d1 = sqrt(tem1 + tem2);  //??????1,3?????????

				tem1 = abs(pos_temp[1][0] - pos_temp[3][0]);  // x2-x4
				tem2 = abs(pos_temp[1][1] - pos_temp[3][1]);  // y2-y4
				tem1 *= tem1;
				tem2 *= tem2;
				d2 = sqrt(tem1 + tem2);  //??????2,4?????????
				fac = (float) d1 / d2;
				if (fac < 0.95 || fac > 1.05)  //?????????
						{
					cnt = 0;
					TP_Drow_Touch_Point(LCD_GetXSize() - 20,
							LCD_GetYSize() - 20,
							GUI_WHITE);        //?????????4
					TP_Drow_Touch_Point(20, 20, GUI_RED);  //??????1
					TP_Adj_Info_Show(pos_temp[0][0], pos_temp[0][1],
							pos_temp[1][0], pos_temp[1][1], pos_temp[2][0],
							pos_temp[2][1], pos_temp[3][0], pos_temp[3][1],
							fac * 100);  //????????????
					continue;
				}  //?????????

				//???????????????
				tem1 = abs(pos_temp[1][0] - pos_temp[2][0]);  // x1-x3
				tem2 = abs(pos_temp[1][1] - pos_temp[2][1]);  // y1-y3
				tem1 *= tem1;
				tem2 *= tem2;
				d1 = sqrt(tem1 + tem2);  //??????1,4?????????

				tem1 = abs(pos_temp[0][0] - pos_temp[3][0]);  // x2-x4
				tem2 = abs(pos_temp[0][1] - pos_temp[3][1]);  // y2-y4
				tem1 *= tem1;
				tem2 *= tem2;
				d2 = sqrt(tem1 + tem2);  //??????2,3?????????
				fac = (float) d1 / d2;
				if (fac < 0.95 || fac > 1.05)  //?????????
						{
					cnt = 0;
					TP_Drow_Touch_Point(LCD_GetXSize() - 20,
							LCD_GetYSize() - 20,
							GUI_WHITE);        //?????????4
					TP_Drow_Touch_Point(20, 20, GUI_RED);  //??????1
					TP_Adj_Info_Show(pos_temp[0][0], pos_temp[0][1],
							pos_temp[1][0], pos_temp[1][1], pos_temp[2][0],
							pos_temp[2][1], pos_temp[3][0], pos_temp[3][1],
							fac * 100);  //????????????
					continue;
				}  //?????????
				   //????????????
				tp_dev.xfac = (float) (LCD_GetXSize() - 40)
						/ (pos_temp[1][0] - pos_temp[0][0]);  //??????xfac
				tp_dev.xoff = (LCD_GetXSize()
						- tp_dev.xfac * (pos_temp[1][0] + pos_temp[0][0])) / 2; //??????xoff

				tp_dev.yfac = (float) (LCD_GetYSize() - 40)
						/ (pos_temp[2][1] - pos_temp[0][1]);  //??????yfac
				tp_dev.yoff = (LCD_GetYSize()
						- tp_dev.yfac * (pos_temp[2][1] + pos_temp[0][1])) / 2; //??????yoff
				if (abs(tp_dev.xfac) > 2 || abs(tp_dev.yfac) > 2)  //???????????????????????????.
						{
					cnt = 0;
					TP_Drow_Touch_Point(LCD_GetXSize() - 20,
							LCD_GetYSize() - 20,
							GUI_WHITE);        //?????????4
					TP_Drow_Touch_Point(20, 20, GUI_RED);  //??????1
					GUI_DispStringAt("TP Need readjust!", 40, 26);
					tp_dev.touchtype = !tp_dev.touchtype;  //??????????????????.
					if (tp_dev.touchtype)                  // X,Y?????????????????????
					{
						CMD_RDX = 0X90;
						CMD_RDY = 0XD0;
					} else  // X,Y?????????????????????
					{
						CMD_RDX = 0XD0;
						CMD_RDY = 0X90;
					}
					continue;
				}
				// POINT_COLOR = BLUE;
				GUI_SetBkColor(GUI_WHITE);
				GUI_Clear();  //??????
				GUI_DispStringAt("Touch Screen Adjust OK!", 35, 110);
				//???????????? HAL_Delay(1000); TP_Save_Adjdata(); LCD_Clear(WHITE);
				//?????? return;            //????????????
				uprint("TP Adj OK!\r\n")
				;
				tp_dev.adjusted = 0x0A;
				TP_Save_Adjdata();
				HAL_Delay(10);
				GUI_Clear();
				return;
			}
		}
		HAL_Delay(10);
		outtime++;
		if (outtime > 1000) {
			TP_Get_Adjdata();
			uprint("To Save TP data!\r\n");
			break;
		}
	}
}

void TestGUI() {
	char buf[64];
	WM_HWIN hDlg;
	GUI_PID_STATE State;
	// TP_Adjust();
//	FRESULT res = FR_OK;
//	DIR dp;
//	retSD = f_mount(&SDFatFS, SDPath, 0);
//	if (retSD != FR_OK)
//		Error_Handler();
//	do {
//		HAL_Delay(100);
//		res = f_opendir(&dp, "0:/");
//	} while (res == FR_NOT_READY);
//	f_closedir(&dp);

	TP_Init();
	hDlg = CreateTestGUI();
//  Touch_MainTask();
	//  GUI_CURSOR_Show();
	while (1) {
//    GUI_TOUCH_Exec();
//    GUI_TOUCH_Exec();
//    int count = GUI_Exec();
//    if (count) uprint("GUI_Exec() !!\r\n");
		GUI_TOUCH_GetState(&State);
		if (State.Pressed) {
			sprintf(buf, "(%d, %d)\r\n", State.x, State.y);
			taskENTER_CRITICAL();
			uprint(buf);
			taskEXIT_CRITICAL();
		}
		GUI_Delay(500);
		// osDelay(100);
	}
}
