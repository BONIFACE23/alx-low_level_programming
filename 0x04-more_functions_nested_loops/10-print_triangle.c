#include<stdio.h>
#include"main.h"
/**
 * print_triangle -  function that prints a triangle
 * @size:the character tha print
 * Return: 0 if successfully
 **/
void print_triangle(int size)
{
	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			putchar('#');
			ii++;
		}
		putchar('\n');
		ii++;
	}
	if (i == 1)
		putchar('\n');
}
