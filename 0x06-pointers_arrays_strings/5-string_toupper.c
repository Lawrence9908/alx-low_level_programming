#include "main.h"
/**
 * string_toupper - function changes all lowercases letters of a string to uppercase
 * @str: input
 * Return: returns a character
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
