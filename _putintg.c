#include "main.h"
#include <stdlib.h>

/**
 * _putintg - Print an integer as a string.
 * @argums: arguments containing the integer to print.
 * @compute: Pointer to the total character count.
 *
 * Return: The number of characters printed.
 */

int _putintg(va_list argums, int *compute)
{
	int num = va_arg(argums, int);
	char *num_str = _int_to_string(num);
	int len = _printstr(num_str);

	free(num_str);
	(*compute) += len;
	return (len);
}

