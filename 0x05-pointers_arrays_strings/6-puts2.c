#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * @str: input
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

