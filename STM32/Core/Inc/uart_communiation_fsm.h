/*
 * uart_communiation_fsm.h
 *
 *  Created on: Nov 8, 2025
 *      Author: ADMIN
 */

#ifndef INC_UART_COMMUNIATION_FSM_H_
#define INC_UART_COMMUNIATION_FSM_H_

#include "command_parser_fsm.h"
#include <stdio.h>
#include "main.h"
extern uint32_t ADC_value;
extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart1;
void uart_communiation_fsm();


#endif /* INC_UART_COMMUNIATION_FSM_H_ */
