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
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchr(alphabet + '\n');
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet + '\n');
	}
	return (0);
}
