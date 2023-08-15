#include <main.h>
/**
 * main - Entry point
 * Description: Prints alphabet in lowercase followed by new line
 * Return: 0 (success)
 *
 */
int _putchar(char c);


void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}


int _putchar(char c)
{
	return (write(1, &c, 1));
}
