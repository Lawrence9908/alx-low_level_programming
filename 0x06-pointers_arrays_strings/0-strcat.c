#include "main.h"
/**
 * _strcat - the function concatenates two strings
 * @dest: String that src will be concatinated to
 * @src: string to be concatinated to dest string
 * Return: returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
	{
		dest_length++;
	}

	for (i = 0; src[i]; i++)
	{	
		dest[dest_length++] = src[i];
	}

	return (dest);
}
