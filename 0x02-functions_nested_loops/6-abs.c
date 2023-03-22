#include"main.h"

/**
 * * _abs - function that computes the absolute value of an integer
 * *
 * *@n: is the input of the function
 * *
 * *Return: the absolute value of an integer.
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = (-1) * n;
		return (n);
	}
}
