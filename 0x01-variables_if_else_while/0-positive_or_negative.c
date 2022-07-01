#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point of the programs
 *Th program will check whether n is zero
 *negative or positive
 *Return : return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
	return (0);
}
