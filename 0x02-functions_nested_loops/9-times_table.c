#include "main.h"
/**
 *prints 9 times table
 *
 *
 *Return: Always 0
 */
void times_table(void)
{
	int multi, x , y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			multi = x * y;
			if (x == 0)
			{
				_putchar(multi + '0');
			}
			else if (multi >= 10)
			{
				_putchar('\n');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
