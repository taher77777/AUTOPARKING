
#ifndef MAIN_H_
#define MAIN_H_

/************************************************
					PINS
	"H_BRIDGE"
	#B3 -->PWM -->timer0 --->output--->MOTOR1_ENA
	#D7 -->PWM -->timer2 --->output--->MOTOR2_ENB
	#N1--->output-->B0
	#N2--->output-->B1
	#N3--->output-->B2
	#N4--->output-->B4

	"BLUETOOTH"
	D0 -->RX -->input
	D1 -->TX -->output

	"LCD"
	PORTA "A0 to A6"----->output

	"ULTRASONIC four "
	T1-------> C0 ---->output
	T2-------> C1----->output
	T3-------> C2----->output
	T4-------> C3----->output
	four echos -->ICU--->TIMER1-->D6-->output

	"LEDS"
	B5--->output
	B6--->output

	"Buzzer"
	B7--->output

	"ADC"
	A7--->input
************************************************/

/************************************************
					Includes
************************************************/
#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "PORT_interface.h"
#include "ADC_interface.h"
#include "USART_interface.h"
#include "GIE_interface.h"
#include "CLCD_interface.h"
#include "ULTRASONIC.h"
#include "H_bridge.h"
#include "util/delay.h"

/************************************************
					Prototypes
************************************************/

void StartSystem_UartISR(u8 copy_u8received);
void ParkingSystem();
#endif /* MAIN_H_ */
