#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

int main(void)
{
	OLED_Init();
	OLED_ShowChar(1, 1, 'a');
	OLED_ShowChar(2, 1, 'b');
	OLED_ShowChar(3, 1, 'c');

	while(1)
	{
	}
	
	return 0;
}
