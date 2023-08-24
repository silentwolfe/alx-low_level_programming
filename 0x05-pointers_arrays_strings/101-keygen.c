#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * main - The keygenerator
 * Return: returns 0 (success)
 */

int main(void)
{
	const char charset[];

	charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

	const int charsetLength = sizeof(charset) - 1;

	srand(time(NULL));

	printf("Generating random passwords for 101-crackme:\n");

	for (int i = 0; i < 10; i++)
	{
		char password[PASSWORD_LENGTH + 1];

		for (int j = 0; j < PASSWORD_LENGTH; j++)
		{
			password[j] = charset[rand() % charsetLength];
		}

		password[PASSWORD_LENGTH] = '\0';

		printf("Password %d: %s\n", i + 1, password);
	}

	return (0);
}
