#include <avr/io.h>
uint8_t MS4B (uint8_t operated_8B ){
uint8_t MS4B_result = (operated_8B>>4);
return (MS4B_result);
}
uint8_t LS4B(uint8_t operated_8B)
{
uint8_t LS4B_result=(operated_8B<<4);
LS4B_result=(LS4B_result>>4);
return (LS4B_result);
}

