#include "main.h"
/**
 * _strcpy - Copy paste string
 * @dest: destination
 * @src: source
 * Return: returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';

	return (dest);
}
