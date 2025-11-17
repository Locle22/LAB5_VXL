/*
 * command_parser_fsm.c
 *
 *  Created on: Nov 8, 2025
 *      Author: ADMIN
 */

#include "command_parser_fsm.h"
#include "main.h"
int approve=0;
uint8_t run=0;
void command_parser_fsm() {
    if (strcmp((char*)buffer, "!RST#") == 0) {
        run = 1;
        approve = 1;
    }
    else if (strcmp((char*)buffer, "!OK#") == 0) {
        run = 0;
    }
    memset(buffer, 0, sizeof(buffer));
    index_buffer = 0;
}
