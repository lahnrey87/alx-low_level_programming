#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the value in question
 *
 * Return: last digit of the num
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
