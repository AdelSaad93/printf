#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printintg - Print an integer.
 *
 * @number: The integer to be printed.
 *
 * Return: The number of characters.
 */

int _printintg(int number)
{
	int compute = 0;

	if (number < 0)
	{
	putchar('-');
	number = -number;
	compute++;
	}

	if (number == 0)
	{
	putchar('0');
	return (1);
	}

	if (number / 10)
	{
	compute += _printintg(number / 10);
	}

	putchar(number % 10 + '0');
	compute++;

	return (compute);
}

