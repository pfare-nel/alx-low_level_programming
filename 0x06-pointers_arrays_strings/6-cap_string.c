#include "main.h"
#include <stdbool.h>
/**
 * is_separator - A function that checks for a separator
 * @c: Input character
 * Return: true or false
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (true);
	}
	return (false);
}


/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: str
 */

char *cap_string(char *str)
{
	bool capitalize_next = true;
	char *result = str;

	while (*str != '\0')
	{
		if (is_separator(*str))
		{
			capitalize_next = true;
		}
		else if (capitalize_next && (*str >= 'a' && *str <= 'z'))
		{
			*str -= 32;
			capitalize_next = false;
		}
		else
		{
			capitalize_next = false;
		}
		str++;
	}
	return (result);
}

