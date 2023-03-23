#include"main.h"

/**
 * * times_table - function that prints the last digit of a number
 * *
*/

void times_table(void)
{
	int i;
	int j;
	int resu;

	for (i = 0; i < 10; i++)
	{
		_putchar(0 + '0')
			for (j = 1; j < 10; j++)
			{
				_putchar(',');
				_putchar(' ');
				resu = i * j;

				if (resu <= 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((resu / 10) + '0');
				}
				_putchar((resu % 10) + '0');
			}
		_putchar('\n');
	}

}
