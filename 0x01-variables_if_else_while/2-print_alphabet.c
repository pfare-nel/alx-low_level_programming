#include <stdio.h>

/**
  * main - contains code that prints the alphabet
  * Return: returns zero after excution
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}

