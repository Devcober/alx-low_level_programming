#include <main.h>
/**
 * main - Entry point
 * Description: function that prints the alphabet in lowercase
 * Return: Always 0 (Success)
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
	return (0);
i}
