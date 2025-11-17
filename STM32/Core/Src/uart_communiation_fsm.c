/*
 * uart_communiation_fsm.c
 *
 *  Created on: Nov 8, 2025
 *      Author: ADMIN
 */
#include "uart_communiation_fsm.h"

uint32_t last=0;
uint32_t ADC_value=0;
static char str[100];

void uart_communiation_fsm (){
	if(run){
	if(approve){
		ADC_value = HAL_ADC_GetValue(&hadc1);
		HAL_GPIO_TogglePin(LED_PINK_GPIO_Port, LED_PINK_Pin);
		HAL_UART_Transmit(&huart1,(void*)str,sprintf(str,"!ADC= %lu#\r\n",ADC_value),1000);
		last= HAL_GetTick();
		approve=0;
	}
	else if(HAL_GetTick()- last>=3000){
		approve=1;
		last= HAL_GetTick();
	}
	}
}

