#include"main.h"

/**
 * * print_last_digit - function that prints the last digit of a number
 * *
 * *@n: is the input of the function
 * *
 * *Return: Returns the value of the last digit
*/

int print_last_digit(int n)
{
	int j;

	if (n >= 0)
	{
		j = n % 10;
	}
	else
	{
		j = (-1) * (n % 10);
	}
	_putchar(j);
	return (j);
}
