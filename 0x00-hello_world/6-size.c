#include <stdio.h>
/**
 *main - main functions
 *
 *
 *Return: return 0
 */
int main(void)
{
	printf("Size of an int: %lu\n bytes(s)", sizeof(int));
	printf("Size of a long int: %lu\n bytes(s)", sizeof(long int));
	printf("Size of a long long int: %lu\n bytes(s)", sizeof(long long int));
	printf("Size of a float: %lu\n bytes(s)", sizeof(float));
	printf("Size of a char: %lu\n bytes(s)", sizeof(char));
	printf("Size of a double: %lu\n bytes(s)", sizeof(double));
	return (0);
}
