#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: Input string
 * @src: Input string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}

