#include "main.h"

/**
 * swap_int - is a function that swap the value
 * of two integers
 * @a: first int
 * @b: second int
 * return: no return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
