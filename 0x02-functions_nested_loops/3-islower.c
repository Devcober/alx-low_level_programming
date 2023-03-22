#include"main.h"

/**
 *  * _islower - function that checks for lowercase character
 *
 *  @c: is the input of the function
 *
 *  Return: return 1 if 'c' is lowercase. 0 if else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
