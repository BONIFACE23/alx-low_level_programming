#include"main.h"
#include <stddef.h>
#include<stdlib.h>
/**
 *malloc_checked - fuction that allocates memory
 *@b:allocated memory
 *Return:pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}


