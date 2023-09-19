#include "main.h"

/**
 * char *_strcpy - A function that copies the string pointed to by src
 * @dest: Buffer pointer
 * @src: String pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

