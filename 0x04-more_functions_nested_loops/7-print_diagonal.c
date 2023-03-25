#include<stdio.h>
#include"main.h"
/**
 * print_diagonal -  function that draws a diagonal line
 * @n:the character that print
 *
 * :Return: 0 if successful
 **/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
