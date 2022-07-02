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
	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;

	if (b == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else if (b > 5)
	{
		printf("Last digit of %d is %d and greator than 5\n", n, b);
	}
	else if (b < 6 && b != 0)
	{
		printf("Last digit of %n is %d and is less than 6 and not 0\n", n, b)
	}
	return (0);
}
