#include "main.h"
/**
 * _strcmp - the function compare two strings
 * @s1: 1st string 
 * @s2: 2nd string 
 * Return: returns integer
 */
int _strcmp(char *s1, char *s2)
{
	int d = 0;
	int i = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else if (s1[i] == '\0')
		{
			d = s2[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			d = s1[i];
			break;
		}
		else
		{
			i++;
		}
	}

	return (d);
}
