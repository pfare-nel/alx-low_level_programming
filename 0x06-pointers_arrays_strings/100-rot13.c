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
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (result);
}



