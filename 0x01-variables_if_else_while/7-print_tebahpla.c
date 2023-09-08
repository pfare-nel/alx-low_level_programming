#include <stdio.h>

/**
  * main - contains code that prints the alphabet in reverse
  * Return: returns zero after excution
  */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}

