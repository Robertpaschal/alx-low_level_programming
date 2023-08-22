#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - generates random password
 * Return: Always 0
 */

int main()
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charsetSize = sizeof(charset) - 1;

	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % charsetSize;
		password[i] = charset[index];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("Generated Password: %s\n", password);

	return (0);
}
