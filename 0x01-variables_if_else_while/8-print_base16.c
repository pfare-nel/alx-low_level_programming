#include <stdio.h>

/**
  * main - main function contains that print hexadecimalnumbers using putchar
  * Return: main function returns 0 after executing
  */

int main(void)
{
	int number = 0;
	char letter = 'a';

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
