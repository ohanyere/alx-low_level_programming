#include "main.h"

/**
 * jack_bauer - prints every minute of the dayof jack Bauer, 
 * starting from 00:00 tto 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (minute = 0; minute <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
