#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first input
 * @b: second input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
