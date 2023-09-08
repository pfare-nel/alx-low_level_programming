#include <stdio.h>

/**
  * main - main function contains that print numbers of  base 10 using putchar
  * Return: main function returns 0 after executing
  */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');

	return (0);
}
