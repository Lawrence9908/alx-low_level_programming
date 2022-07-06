#include "main.h"
/**
 *main - check the code
 *
 *
 *Return: always 0
 */
void print_alphabet_x10(void)
{
	int outer_loop;
	char inner_loop;

	for (outer_loop = 1; outer_loop <= 10; outer_loop++)
	{
		for (inner_loop = 'a'; inner_loop <= 'z'; inner_loop++)
		{
			_putchar(inner_loop);
		}
		_putchar('\n');
	}
}
