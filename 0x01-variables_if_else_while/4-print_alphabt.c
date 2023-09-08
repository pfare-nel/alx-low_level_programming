#include <stdio.h>

/**
  * main - contains code that prints the alphabet except q and e
  * Return: returns zero after excution
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');
	return (0);
}
