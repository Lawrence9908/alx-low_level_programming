#include "main.h"
/**
 * _isupper - function check if characher is uppercase or not
 * @c: input
 * Return: returns 1if condition is true and 0 if false
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
