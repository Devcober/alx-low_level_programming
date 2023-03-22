#include"main.h"

/**
 * * print_sign - function that prints the sign of a number
 * *
 * *@n: is the input of the function
 * *
 * Return:
 * *Returns 1 and prints + if n is greater than zero
 * *Returns 0 and prints 0 if n is zero
 * *Returns -1 and prints - if n is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
