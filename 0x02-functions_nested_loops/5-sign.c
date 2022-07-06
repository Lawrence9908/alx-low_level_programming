#include "main.h"
/**
 *print_sign - prints the sign of the input 
 *
 *Return: returns 0 if the input is 0,
 * -1 if the input is negative and
 * 1 if the input is positive
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
}
