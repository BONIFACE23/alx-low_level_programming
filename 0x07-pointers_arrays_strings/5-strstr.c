#include"main.h"
#include<stddef.h>
/**
 * _strstr - function that locates a substring
 * @haystack:input
 * @needle:input
 * Return: 0
 **/
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			const char *h = haystack;
			const char *n = needle;

			while (*h != '\0' && *n != '\0' && *h == *n)
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return ((char *)haystack);
			}
		}
	}
	return (NULL);
}
