#include <stdio.h>

/**
  * main - contains code that print the aplhabet in upper and lower case
  * Return: returns zero after executions
  */

int main(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
