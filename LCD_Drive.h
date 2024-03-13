
#include <avr/io.h>
#include "logic_&_numerical_functions.h"
void initial_LCD();
#define func_set 0x21
#define clear 0x01
#define return_cursor 0x02
#define entry_mode 0x06
#define display_control 0x0f
#define cursor_or_display_shift 0x10
void send_command (uint8_t command);
void send_DATA (char *DATA);
void send_number(int num); 