#include<stdio.h>
/**
 *main - entry point
 *
 *Fuction: Always zero in success
 **/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
