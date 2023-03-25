#include<stdio.h>
#include"main.h"
/**
 * print_triangle -  function that prints a triangle
 * @size:the character tha print
 * Return: 0 if successfully
 **/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
