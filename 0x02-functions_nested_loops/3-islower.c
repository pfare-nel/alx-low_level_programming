#include "main.h"

/**
  * _islower - checks for lowercase
  * @c : argument to be checked
  * Return: returns 1 for success or 0 if not
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
