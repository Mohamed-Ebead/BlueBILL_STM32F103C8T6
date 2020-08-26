/*
 * main.c
 *
 *  Created on: Aug 16, 2020
 *      Author: Mohamed  Ebead
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "Led_interface.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"



#include "Interrupting_Button_interface.h"


void delay(void)
{
	for(int i = 0 ; i < 500 ; i++ )
{
	for(int j = 0 ; j < 600 ; j++ )
	{
		asm("NOP");
	}
}

}




int main(void)
{
	RCC_voidInitSysClock() ;

	RedLed_Init    () ;

//	NVIC_voidEnableInterrupt(6) ;
//	NVIC_voidSetPendingFlag(6) ;


	PushButton_voidInit();


	//RCC_void_EnableClock(RCC_APB2 , RCC_PORTA) ;




	//delay() ;


	while(1)
	{



	}
	return 0;
}


void EXTI0_IRQHandler (void)
{
	delay();
	//STK_voidDelay_ms_Polling(50) ;
 	PushButton_Handler () ;

}









