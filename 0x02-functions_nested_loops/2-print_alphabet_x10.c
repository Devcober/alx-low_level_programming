#include"main.h"

/**
 *print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *alphabet a to z x10
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int j;

	for (j = 0; j <= 10; j++)
	{
		i = 97; /* reset i to its initial value*/;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
