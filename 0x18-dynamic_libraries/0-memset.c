#include"main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s:starting address
 * @b: desired value
 * @n:number of byte
 * Return:main memory s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
