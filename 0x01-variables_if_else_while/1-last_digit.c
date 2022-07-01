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
	int n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit %d is %d and  is", n, last);
	if (last > 5)
	{
		printf("greator than 5\n");
	}
	else if (last < 6 && last !=0)
	{
		printf("less than 6 and not 0\n");
	}
	else if (last == 0)
	{
		printf("0\n");
	}
	return (0);
}
