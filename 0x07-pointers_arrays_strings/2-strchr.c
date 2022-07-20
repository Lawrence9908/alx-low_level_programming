#include "main.h"
/**
 * _strchr - function that locate charcter in a string
 * @: string: targeted
 * @c: charcter targeted
 * Return: return pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		if (s[i] == c)
			return (s + i);
		else
			return (NULL);
}
