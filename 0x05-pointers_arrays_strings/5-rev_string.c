#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: input string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, len;
	len = _strlen(s) - 1;
	while (len > i)
	{
		swap_char(s + len, s + i);
		i++;
		len--;
	}
}
/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: returns integer length;
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
/**
 * swap_char - swap two characters
 * @a: input first character
 * @b: input second character
 * Return: nothing
 */
void swap_char(char *a, char *b)
{
	char tmp = *a;

	*a = *b;
	*b = tmp;
}
