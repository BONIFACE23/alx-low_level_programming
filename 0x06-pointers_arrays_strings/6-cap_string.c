#include"main.h"
#include <ctype.h>
/**
 * cap_string -  function that capitalizes all words of a string
 * @str:string
 * Return: 0
 **/
char *cap_string(char *str)
{
	int i;
	int cap_next = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?' || str[i] == '\"'
				|| str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}')
		{
			cap_next = 1;
		}
		else if (cap_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
		else
		{
			cap_next = 0;
		}
		return (str);
	}
	return (0);
}


