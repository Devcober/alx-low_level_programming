#include "main.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase
 * alphabet a to z
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
