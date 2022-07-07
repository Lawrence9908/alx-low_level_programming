#include <stdio.h>
/**
  *main - prints count of multiplesof 3 or 5 below 1024
  *
  *Return: return 0
  */
int main(void)
{

	int number, sum = 0;

	for (number = 0; number < 1024; number++)
	{
		if ((number % 3) == 0 || (number % 5) == 0)
		{
			sum += number;
		}
	}
	printf("%d\n", sum);
	return (0);
}
