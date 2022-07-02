#include <stdio.h>
#include <ctype.h>
/**
 *main  - entry point of the program
 *The program will print alphabet in lowercase and uppercase
 *
 *Return: return 0
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
		if (alphabet == 'z')
		{
			alphabet = 'A';
			for (; alphabet <= 'Z'; alphabet++)
			{
				putchar(alphabet);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
