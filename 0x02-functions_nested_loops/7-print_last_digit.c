#include "main.h"
/**
 *print_last_digit -  prints the last digit of input
 *@c: input value
 *Return: always 0
 */
int print_last_digit(int c)
{
	int num = c % 10;

	if (num < 0)
	{
		num *= -1;
	}
	_putchar(num + '0');
	return (num);
}
