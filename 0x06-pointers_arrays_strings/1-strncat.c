#include "main.h"

/**
 * _strncat - A function that concatenate two strings
 * @dest: Input string
 * @src: Input string
 * @n: Input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return (result);
}


