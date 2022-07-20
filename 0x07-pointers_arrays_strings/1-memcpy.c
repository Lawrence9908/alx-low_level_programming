#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: input source string
 * @src: input string for  filling
 * @n: input length of buffer
 * Return: return new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
