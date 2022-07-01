#include <stdio.h>
#include <ctype.h>
/**
 *main - entry point of the program
 *The program will print all alphabet in lowercase except q and e
 *Return: return 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if ((alphabet != 'e') && (alphabet != 'q'))
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
