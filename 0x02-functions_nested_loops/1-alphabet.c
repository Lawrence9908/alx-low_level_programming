#include "main.h"
/**
 *main - entry level of the program
 *The program print the alphabets in lower case
 *Return: return 0
 */

void print_alphabet(void)
{
	int alphabet;
	
	for (alphabet = 'a'; alphabet <='z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar(10);
}
