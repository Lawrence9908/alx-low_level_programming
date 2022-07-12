#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: returns integer lenght;
 */
int _strlen(char *s)
{
	int count, i;
	i = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		i++;
	}

	return (i);
}
