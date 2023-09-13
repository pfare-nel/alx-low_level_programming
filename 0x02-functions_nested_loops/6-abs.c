#include "main.h"

/**
  * _abs - computes absolute value
  * @num: argument to be checked
  * Return: returns num
  */

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
