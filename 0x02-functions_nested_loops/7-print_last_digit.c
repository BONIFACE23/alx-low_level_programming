#include"main.h"
/**
 * print_last_digit - print last digit
 * @n: the character
 * Return: the value of last digit
 **/
int print_last_digit(int n)
{
	int a = n % 10;

	if (n < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
