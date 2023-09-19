#include "main.h"

/**
 * _puts - A function prints a string followed by a new line to stdout
 * @str: String to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
