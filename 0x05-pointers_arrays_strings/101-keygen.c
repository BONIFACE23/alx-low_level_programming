#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 12

/**
 * main - entry point
 * Return:0
 **/

int main(void)
{
	const char *valid_chars = "abcdefghijklmnopqrstuvwxyz";
	char password[PASSWORD_LENGTH + 1];
	size_t i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = valid_chars[rand() % strlen(valid_chars)];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}


