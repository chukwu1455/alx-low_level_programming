#include "main.h"

/**
 * print_alphabet - Entry point 
 * Description: a function that prints the alphabets,
 *
 * in lowercase followed by a new line
 * return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
