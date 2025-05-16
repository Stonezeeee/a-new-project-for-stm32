#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

int main(void)
{
	OLED_Init();
	OLED_ShowChar(1, 1, 'a');

	while(1)
	{
	}
	
	return 0;
}
