#include <stdio.h>
/**
 * main - entry point of the program
 * Return: returns 0
 */
int main(void)
{
	int number;
	while (number++ < 100)
		if ((number % 3 == 0) && (number % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((number % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((number % 5) == 0)
		{
			if (number != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", number);
		}
	printf("\n");
	return (0);
}
