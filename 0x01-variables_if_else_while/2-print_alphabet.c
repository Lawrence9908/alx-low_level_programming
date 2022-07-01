#include <stdio.h>
#include <ctype.h>
/**
 *main - entry poin of the program
 *The program will print alphabet in lowcase
 *
 *Return: return 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
