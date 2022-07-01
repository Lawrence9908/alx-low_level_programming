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

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

