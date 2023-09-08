#include <stdio.h>

/**
  * main - main function contains that print numbers of  base 10
  * Return: main function returns 0 after executing
  */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");

	return (0);
}
