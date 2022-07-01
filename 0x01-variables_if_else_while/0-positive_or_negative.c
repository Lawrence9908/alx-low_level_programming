#include <stdio.h>
#include <time.h>
/**
 *The program prints whether the random number
 *is positive, negative or zero
 *The program returns zero is there no erro
 *
 */
int  main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("is positive\n");
	}
	if else(n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("ïs negative\n");
	}
	return (0);
}
