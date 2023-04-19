#include"3-calc.h"
#include<stdlib.h>
/**
 *grt_op_func - select the correct function to perform
 *the function asked by the user
 *@s:the operator passed as argument
 *Return: a pointer to the function corresponding
 *to the character given as parameter
 **/
int (*grt_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

