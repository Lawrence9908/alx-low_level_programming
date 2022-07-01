#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point of the program
 *The program will print all single digit of base 10
 *Return: return 0
 */
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit < 10; single_digit++)
	{
		printf("%d", single_digit);
	}
	printf("\n");
	return (0);
}
