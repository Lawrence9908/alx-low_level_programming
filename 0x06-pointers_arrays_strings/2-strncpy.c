#include "main.h"
/**
 * _strncpy -function copies a string
 * @dest: buffer storing the string copy
 * @src: the input source string
 * @n: maximum nummber of byte copied
 * Return: returns character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
