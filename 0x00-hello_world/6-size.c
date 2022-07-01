#include <stdio.h>
/**
 *main: is the main function of the programm
 *The programme will print out the sizes of (char, int , float,double)
 *The output will be displayed using prinrf() function
 *Return: return 0
 */
int main(void)
{
	printf("Size of long int %lu",(unsigned long)sizeof(long int));
	printf("Size of long long int %lu",(unsigned long)sizeof(long long int));
	printf("Size of int %lu",(unsigned long)sizeof(int));
	printf("Size of float %lu",(unsigned long)sizeof(float));
	printf("Size of char %lu",(unsigned long)sizeof(char));
	printf("Size of double %lu",(unsigned long)sizeof(double));
	return 0;
}
