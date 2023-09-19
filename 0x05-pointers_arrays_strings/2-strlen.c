#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: string to be operated on
 * Return: length after execution
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

