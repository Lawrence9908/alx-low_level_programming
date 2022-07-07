#include "main.h"
/**
 * _isdigit - function checks whether input is digit or not
 * @c: input
 * Return: returns 1 if it is digit , 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
