#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Th program will check whether n is zero 
 *negative or positive
 *Return : returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("is positive\n");
	}
	else if(n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
