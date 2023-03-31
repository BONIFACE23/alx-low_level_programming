#include"main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: string
 * Return: 0
 **/

char *rot13(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			c = (c - 'a' + 13) % 26 + 'a';
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c = (c - 'A' + 13) % 26 + 'A';
		}
		str[i] = c;
	}
	return (str);
}


