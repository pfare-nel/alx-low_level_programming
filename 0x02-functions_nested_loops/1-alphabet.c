#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 * Return: returns 0 after execution.
 */

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
