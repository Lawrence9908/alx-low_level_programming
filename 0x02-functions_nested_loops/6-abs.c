#include <ctype.h>
#include "main.h"
/**
 *abs - -print the absolute value of the input
 *
 *Rertun: returns the abs value
 *
 */
int _abs(int c)
{
	if (c < 0)
	{
		return -(c);
	}
	else
	{
		return c;
	}
}
