#include "main.h"
#include<string.h>
/**
 * infinite_add -  function that adds two numbers
 * @n1:first string
 * @n2:second string
 * @r:buffer
 * @size_r:max size
 * Return: always 0
 **/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum, i, j;
	int len1 = strlen(n1), len2 = strlen(n2);


	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;

		if (len1 - i > size_r || len2 - j > size_r)
			return (0);

		r[len1 - i - 1] = sum + '0';
	}

	r[len1 + len2 >= size_r ? size_r - 1 : len1 + len2] = '\0';

	for (i = 0; i < (len1 + len2) / 2; i++)
	{
		char temp = r[i];

		r[i] = r[len1 + len2 - i - 1];
		r[len1 + len2 - i - 1] = temp;
	}

	return (r);
}

