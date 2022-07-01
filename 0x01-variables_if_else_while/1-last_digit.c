#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point of the program
 *The program will print last digit of random number
 *
 *Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last > 5)
	{
		printf("Last digit of  %d is %d and  is 0\n", last_digit);
	}
	else
	{
		if (last >5)
		{
			printf("Last digit of %d is %d and is  greater than 5\n", last_digit);
		}
		else if (last < 6)
		{
			printf("Last digit of %d is %d  and is less than 6 and not 0\n", last_digit);
		}
	}
	return (0);
}
