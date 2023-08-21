#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * getRandom - gets a random char
 * generateRandomPassword - generates a random password
 * @charset: a set of characters
 * @charseLength: size of the charset
 * return: Always 0
 */

char getRandomChar(const char *charset, int charsetLength)
{
	int randomIndex = rand() % charsetLength;
	return (charset[randomIndex]);
}

void generateRandomPassword(int lenght)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0213456789";
	const int charsetLenght = sizeof(charset) - 1;

	if (length <= 0)
	{
		printf("Invalid password length.\n");
		return;
	}

	for (int i = 0; i < length; i++)
	{
		char randomChar = getRandomChar(charset, charsetLength);

		printf("%c", randomChar);
	}

	printf("\n");
}
