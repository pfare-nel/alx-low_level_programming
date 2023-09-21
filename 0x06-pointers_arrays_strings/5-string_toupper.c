#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters to uppercase
 * @str: Input string
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	char *result = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}

	return (result);
}

