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
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}


