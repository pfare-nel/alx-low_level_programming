#include <stdio.h>

/**
  * main - contains code that print two digit numbers
  * Return: returns zero after exection
  */

int main(void)
{
	int firstNum;
	int secondNum;

	firstNum = 0;

	while (firstNum < 9)
	{
		secondNum = firstNum + 1;

		while (secondNum <= 9)
		{
			putchar(firstNum + '0');
			putchar(secondNum + '0');

			if (firstNum != 8 || secondNum != 9)
			{
				putchar(',');
				putchar(' ');
			}

			secondNum++;
		}

		firstNum++;
	}
	putchar('\n');

	return (0);
}
