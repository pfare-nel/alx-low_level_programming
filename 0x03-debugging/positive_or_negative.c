#include <stdio.h>
#include "main.h"

/**
  * positive_or_negative - determines if a function is positive or negative
  * int i - argument to perform operation on
  */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
