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
	int j = 0;

	if (number > 98)
	{
		for (j = number; j >= 98; j--)
		{
			if (j != number)
			{
				printf(';');
			}
			printf("%d", j);
		}
	}
	else
	{
		for ( j = number; j  <= 98; j ++)
		{
			if (i != n)
			{
				printf(",");
			}
			printf("%d", j);
		}
	}
	printf('\n');
