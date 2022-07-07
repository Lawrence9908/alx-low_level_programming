#include <stdio.h>
/**
 *
 **main - prints out first 50
 *
 *
 * Return: return 0
 *
 * */
int main(void)
{
	int number;
	unsigned long num1 = 0, num2 = 1, num3;

	for (number = 0; number < 50; number++)
	{
		num3 = num1 + num2;
		printf("%lu", num3);
		num1 = num2;
		num2 = num3;
		if (number == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
