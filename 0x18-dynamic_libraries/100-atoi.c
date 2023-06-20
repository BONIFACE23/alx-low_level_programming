#include"main.h"
#include<stdio.h>
/**
 * _atoi - function that convert a string to an integer
 * @s: the character that print
 * Return:0 is successfully
 **/
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !started)
		{
			sign = -1;
		}
		else if (*s == '+' && !started)
		{
			sign = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (sign * num);
}
