#include"main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination point
 * @src: source point
 * @n:character string
 * Return: 0
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
