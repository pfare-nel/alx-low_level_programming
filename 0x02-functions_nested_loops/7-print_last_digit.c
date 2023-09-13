#include "main.h"

/**
  * print_last_digit - checks for lowercase
  * @num: argument to be checked
  * Return: returns digit
  */

int print_last_digit(int num)
{
	int digit;

	digit = num % 10;

	if (num < 0)
		digit = -digit;

	_putchar(digit  + '0');

	return (digit);
}
