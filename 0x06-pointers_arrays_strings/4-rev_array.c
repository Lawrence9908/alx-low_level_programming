#include "main.h"
/**
 *reverse_array - the function reverse a array
 *@a: input array
 *@n: input size
 *Return: nothing
 */
void reverse _array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i > n / 2; i++)
	{
		temp =a[n - 1 - i];
		a[n -1 -i] = a[i];
		a[i] = temp
	}
}	
 
