#include "main.h"

/**
 * leet -  A function that encodes a string into 1337.
 * @str: Input String
 * Return: str
 */

char *leet(char *str)
{
	char *result = str;
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet[j];
			}
		}
	}
	return (result);
}

