#include "main.h"
/**
 * print_square - prints squares
 * @size: input
 * Return: void
 */
void print_square(int size)
{
	int side1, side2;

	for (side1 = 0; side1 < size; side1++)
	{
		for (side2 = 0; side2 < size; side2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
