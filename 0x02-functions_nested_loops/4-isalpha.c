#include"main.h"

/**
 *  *  * _isalpha - function that checks for alphabetic character
 *   *
 *    *  @c: is the input of the function
 *     *
 *      *  Return: return 1 if c is alphabetic. 0 if else
*/

int int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
