#include "main.h"

void main(void)
{
	//MCAL Enable
	PORT_voidInit();
	//ADC_voidInit();
	//ULTRASONIC_u8Init();
	USART_voidRecieveSetCallBack(StartSystem_UartISR);
	USART_voidInit();

	//HAL Enable
	CLCD_voidInit();
	GIF_voidEnable();

	//CLCD initial display
	CLCD_voidGoToxy(0,3);
	CLCD_voidSendString("AUTOPARKING");
	CLCD_voidGoToxy(1,4);
	CLCD_voidSendString("NOT WORK");
	while(1)
	{

	}
}

//start system
void StartSystem_UartISR(u8 copy_u8received)
{
	switch(copy_u8received)
	{
	//the car control functions
	//start
	case'S':H_BRIDGE_Start(30,30);break;
	//forward
	case'f':H_BRIDGE_Forword();break;
	//stop
	case's':H_BRIDGE_Stop();break;
	//right
	case'r':H_BRIDGE_Right();break;
	//left
	case'l':H_BRIDGE_Left();break;
	//backward
	case'b':H_BRIDGE_Backword();break;
	//increase speed
	case'i':H_BRIDGE_IncreaseSpeed(5,5);break;
	//decrease speed
	case'd':H_BRIDGE_DecreaseSpeed(5,5);break;
	//auto parking system start
	case'p':
		ParkingSystem();break;

/*	case'f':break;
	case'f':break;
	case'f':break;
	case'f':break;
	case'f':break;
	case'f':break;*/
	}
}

void ParkingSystem()
{
	UART_disable();
	CLCD_voidGoToxy(1,4);
	CLCD_voidSendString("   WORK   ");
	H_BRIDGE_SetSpeed(20,20);
	UART_disable();
}
