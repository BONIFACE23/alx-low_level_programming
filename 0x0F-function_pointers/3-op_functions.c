#include"3_calc.h"

int po_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - returns the sum of two numbers
 *@a:first number
 *@b:second number
 *Return:the sum of a and b
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - returns the difference of two numbers
 *@a:first number
 *@b:the second number
 *Return:the difference of a and b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - returns the product of two numbers
 *@a:first number
 *@b:second number
 *Return:the product of two number numbers
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - returns the division of two numbers
 *@a:first number
 *@b:second number
 *Return: the div. of two numbers
 **/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - return the mod. of two numbers
 *@a:first number
 *@b:second number
 *Return:the mod. of the two numbers
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
