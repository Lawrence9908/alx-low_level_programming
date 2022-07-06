#include "main.h"
/**
 *print_alphabet - print a-z in lowercase
 *
 *Return: returns 0
 */

void print_alphabet(void)
{
	int alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar(10);
}
