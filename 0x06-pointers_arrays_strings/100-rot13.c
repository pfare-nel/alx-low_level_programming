#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: Input string
 *
 * Return: result, which is the modified string
 */
char *rot13(char *str)
{
	int i, j;
	char *result = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = str[i] - 'a';
		if (j >= 0 && j <= 25)
		{
			result[i] = (j + 13) % 26 + 'a';
		}
		else
		{
			result[i] = str[i];
		}
	}
	result[i] = '\0';
	return (result);
}
