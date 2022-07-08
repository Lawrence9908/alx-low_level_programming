#include "main.h"
/**
 * print_square - prints squares
 * @size: input
 * Return: void
 */
void print_square(int size)
{
	int side1, side2;

	if (size > 0)
	{
		for (side1 = 0; side1 < size; side++)
		{
			for (side2 = 0; side2 < (size - 1); side2++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
