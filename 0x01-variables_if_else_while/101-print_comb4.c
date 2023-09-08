#include <stdio.h>

/**
  * main - functioncontains code that prints three digit numbers
  * Return: returns zero after execution
  */

int main(void)
{
	int firstNum;
	int secondNum;
	int thirdNum;

	firstNum = 0;

	while (firstNum <= 7)
	{
		secondNum = firstNum + 1;
		while (secondNum <= 8)
		{
			thirdNum = secondNum + 1;
			while (thirdNum <= 9)
			{
				putchar(firstNum + '0');
				putchar(secondNum + '0');
				putchar(thirdNum + '0');
				if (firstNum != 7 || secondNum != 8 || thirdNum != 9)
				{
					putchar(',');
					putchar(' ');
				}
				thirdNum++;
			}
			secondNum++;
		}
		firstNum++;
	}
	putchar('\n');

	return (0);
}
