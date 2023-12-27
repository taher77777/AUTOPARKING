
#ifndef H_BRIDGE_H_
#define H_BRIDGE_H_
/************************************************
					INCLUDES
************************************************/
#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "TIMER0_interface.h"
#include "TIMER2_interface.h"
/************************************************
					PINS
************************************************/
/*****TIMER TYPES******/
#define TIMER0     1
#define TIMER1     2
#define TIMER2     3

//MOTOR1
#define H_BRIDGE_ENA_TIMER         TIMER0
#define H_BRIDGE_N1_PORT		   DIO_u8PORTB
#define H_BRIDGE_N1_PIN			   DIO_u8PIN0
#define H_BRIDGE_N2_PORT           DIO_u8PORTB
#define H_BRIDGE_N2_PIN            DIO_u8PIN1
//MOTOR2
#define H_BRIDGE_ENB_TIMER         TIMER2
#define H_BRIDGE_N3_PORT           DIO_u8PORTB
#define H_BRIDGE_N3_PIN            DIO_u8PIN2
#define H_BRIDGE_N4_PORT           DIO_u8PORTB
#define H_BRIDGE_N4_PIN            DIO_u8PIN4

/************************************************
					functions
************************************************/


void H_BRIDGE_Start(u8 motor1_u8Speed,u8 motor2_u8Speed);

void H_BRIDGE_Stop(void);

void H_BRIDGE_Forword(void);

void H_BRIDGE_Backword(void);

void H_BRIDGE_Right(void);

void H_BRIDGE_Left(void);

void H_BRIDGE_SetSpeed(u8 motor1_u8Speed,u8 motor2_u8Speed);

void H_BRIDGE_IncreaseSpeed(u8 motor1_u8IncreaseValue,u8 motor2_u8IncreaseValue);

void H_BRIDGE_DecreaseSpeed(u8 motor1_u8DecreaseValue,u8 motor2_u8DecreaseValue);



#endif /* H_BRIDGE_H_ */
