#include <ctype.h>
#include "main.h"
/**
 *isalpha check wether input is alphabet or not
 *Return: 1 if true  0 if false
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
