#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/**
 *check_num - check - string there are digit
 *@str: array str
 *Return:0 success
 **/
int check_num(char *str)
{
	/*declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str the are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 *main - print the name of the program
 *@argc:count arguments
 *@argv:array arguments
 *Return: 0 success
 **/
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes the whole array*/
	{
		if (check_num(argv[count]))

				{
				str_to_int = atoi(argv[count]); /*atoi converts string to int*/
				sum = sum + str_to_int;
				}
				/*condition if one of the number contains symbols that are not digit*/

				else
				{
				printf("error\n");
				return (1);
				}

				count++;
				}
				printf("%d\n", sum);
				return (0);
				}
