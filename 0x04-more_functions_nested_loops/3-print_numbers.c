#include "main.h"
/**
 * print_numbers - function prints numbers from 0 to 9
 * Return: returns 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}