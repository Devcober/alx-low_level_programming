#include "main.h"
/**
 * Description: function that prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}
}
