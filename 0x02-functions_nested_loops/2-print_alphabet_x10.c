#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet a-z 10 times
 *
 *
 *Return: returns void
 */
void print_alphabet_x10(void)
{
	int outer_loop;
	int inner_loop;

	for (outer_loop = 1; outer_loop <= 10; outer_loop++)
	{
		for (inner_loop = 'a'; inner_loop <= 'z'; inner_loop++)
		{
			_putchar(inner_loop);
		}
		_putchar('\n');
	}
}
