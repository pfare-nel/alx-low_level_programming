#include "main.h"

/**
 * _atoi - A function that converts a string to an integer
 * @s: String to be converted
 *
 * Return: Int converted from the string
 */

int _atoi(char *s)
{
	int i = 0;
	int d = 0;
	int n = 0;
	int length = 0;
	int f = 0;
	int digit = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2 == 0)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

