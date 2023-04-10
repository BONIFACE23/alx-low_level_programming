#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success
 **/
int main(int argc, char *argv[])
{
	(void)argv;

	int count = 0;

	int i;

	for (i = 0; i < argc; i++)
		count++;

	printf("%d\n", count - 1);

	return (0);
}

