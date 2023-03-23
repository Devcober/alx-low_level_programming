#include"main.h"

/**
 * * times_table - function that prints the last digit of a number
 * *
*/

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar('  ');
		}
		_putchar((i * j) + '0');
		_putchar('\n');
	}

}
