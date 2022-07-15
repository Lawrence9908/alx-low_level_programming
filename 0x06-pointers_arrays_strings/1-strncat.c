#include "main.h"
/**
 * _strncat - concatenate two strings but add inputted number of bytes
 * @dest: the string to be appended upon
 * @src: the string to be completed at end of dest
 * @n: input
 * Return: returns a a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
	{
		dest_length++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_length++] = src[i];
	}

	return (dest);
}
