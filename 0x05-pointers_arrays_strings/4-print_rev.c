#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Returns: void
 */
void print_rev(char *s)
{
	int l = 0, index = 0;

	l = _strlen(s);

	for (index = l - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
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
