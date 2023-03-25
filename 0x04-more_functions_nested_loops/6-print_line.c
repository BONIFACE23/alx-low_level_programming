#include<stdio.h>
#include"main.h"
/**
 * print_line -  function that draws a straight line
 * @n:the character that print
 * Return: 0 if success
 **/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
