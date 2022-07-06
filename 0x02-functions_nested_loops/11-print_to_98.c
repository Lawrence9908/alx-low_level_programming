#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print natural numbers from n to 98
 *
 *
 *Return: return void
 */
void print_to_98(int number)
{
	if (number >= 98)
	{
		while (number > 98)
		{
			printf("%d, ", number--);
		}
		printf("%d\n", number);
	}
	else
	{
		while (number < 98)
		{
			printf("%d, ", number++);
		}
		printf("%d, ", number);
	}
}
