#include <stdio.h>

/**
  * main - contains code that prints combinations of 2 2-digit numbers
  * Return: returns zero after execution
  */

int main(void)
{
	int i;
	int j;
	int num1;
	int num2;
	int num3;
	int num4;

	i = 0;

	while (i <= 99)
	{
		j = i;
		while (j <= 99) 
		{
			num1 = i / 10;
			num2 = i % 10;
			num3 = j / 10;
			num4 = j % 10;

			if (i != j)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(' ');
				putchar(num3 + '0');
				putchar(num4 + '0');

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
