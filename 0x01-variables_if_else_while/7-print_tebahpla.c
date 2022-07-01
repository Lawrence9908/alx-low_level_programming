#include <stdio.h>
#include <ctype.h>
/**
 *main - entry point of the program
 *The program will print the alphabets in reversed order
 *
 *Return: return 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
