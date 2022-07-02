#include <stdio.h>
#include <ctype.h>
/**
 *main - entry point of the program
 *The print combination of single digits
 *
 *Return: returns 0
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number == '9')
		{
			contionue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
