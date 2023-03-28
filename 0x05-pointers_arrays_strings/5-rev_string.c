#include"main.h"
#include<string.h>
/**
 * rev_string - function that reverses a string
 * @s: the character that print
 * Return:always 0
 **/
void rev_string(char *s)
{
	int i;
	char temp;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
