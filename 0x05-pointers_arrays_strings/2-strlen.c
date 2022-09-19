#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: string to get length
 * Return: length number with nullterminator
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
