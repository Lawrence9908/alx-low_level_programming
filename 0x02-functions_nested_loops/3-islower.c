#include "main.h"
/**
 *_islower - check if input is lowercase or not
 *@c: input
 *Return: returns 0 if the input isupper
 *1 if the input islower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
