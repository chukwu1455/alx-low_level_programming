#include "main.h"

/**
 * _isdigit - checks for digits through  numbers
 *
 * @c: character to determine
 *
 * Return: gives boolean
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
