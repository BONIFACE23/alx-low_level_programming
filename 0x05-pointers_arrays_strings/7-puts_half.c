#include"main.h"
#include<string.h>
/**
 * puts_half -  function that prints half of a string
 * @str: the character that print
 * Return:always 0
 **/
void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;
	int i;

	if (len % 2 != 0)
	{
		start = (len - 1) / 2;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
