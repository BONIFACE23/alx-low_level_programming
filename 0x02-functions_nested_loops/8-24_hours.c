#include"main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: always 0
 **/
void jack_bauer(void)
{
	int i:
	int j:

		for (i = 0 : i < 24 : i++)
		{
			for (b = 0 : b < 60 : j++)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
				_putchar('\n');
			}
		}
}
