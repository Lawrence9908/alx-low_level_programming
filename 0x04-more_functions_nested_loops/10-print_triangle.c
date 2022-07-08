#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: input
 * Return: void
 */
void print_triangle(int size)
{
	int side1, side2, i;

	for (i = 0; i < size; i++)
	{
		for (side1 = size - 1 - i; side1 > 0; side1++)
		{
			_putchar(' ');
		}
		for (side2 = 0; side2 <= i; side2++)
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
