#include"main.h"
/**
 * _sqrt_recursion - fuction that returns square root
 * @n:integer
 * Return:0
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
			double sqrt(double n);

	return (_sqrt_helper(n, 1, n));
}

