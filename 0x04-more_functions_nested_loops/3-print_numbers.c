#include "main.h"

/**
 * Print_numbers - print num from 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{

		_putchar(x);
	}
	_putchar('\n');
}
