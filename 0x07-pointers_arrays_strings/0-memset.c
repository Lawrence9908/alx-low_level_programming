#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: input source string
 * @b: input constant byte for filling
 * @n: input length of buffer
 * Return: return new  string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

