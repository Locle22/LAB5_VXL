/*
 * command_parser_fsm.h
 *
 *  Created on: Nov 8, 2025
 *      Author: ADMIN
 */

#ifndef INC_COMMAND_PARSER_FSM_H_
#define INC_COMMAND_PARSER_FSM_H_
#define MAX_BUFFER_SIZE 30
#include "main.h"
#include "string.h"
#include "uart_communiation_fsm.h"
#include <stdint.h>
extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern int approve;
extern uint8_t run;
void command_parser_fsm();

#endif /* INC_COMMAND_PARSER_FSM_H_ */
