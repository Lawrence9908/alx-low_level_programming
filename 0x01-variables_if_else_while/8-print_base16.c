#include <stdio.h>
#include <ctype.h>
/**
 *main - entry point of the program
 *The program pints hexidecimal digits
 *
 *Return: return 0
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number == '9')
		{
			for (number = 'a'; number <= 'f'; number ++)
			{
				putchar(number);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
