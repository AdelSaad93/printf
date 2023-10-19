#include "main.h"
/**
 * _printintg - Print an integer.
 * @argums: List of arguments.
 * Return: The number of characters printed.
 */
int _printintg(va_list argums)
{
	int number = va_arg(argums, int);
	char *str = _int_to_string(number);
	int compute = _puts(str);

	free(str);

	return (compute);
}
/**
 * _int_to_string - Convert an integer to a string.
 * @num: The integer to be converted.
 * Return: A dynamically allocated string representing the integer.
 */
char *_int_to_string(int num)
{
	int temp = num;
	int length = 0;
	int isNegative = 0;
	char *str;
	int i;

	if (num == 0)
	{
		length = 1;
	}
	else if (num < 0)
	{
		isNegative = 1;
		length++;
		temp = -temp;
	}
	while (temp != 0)
	{
		length++;
		temp /= 10;
	}
	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	str[length] = '\0';

	if (isNegative)
	{
		str[0] = '-';
		num = -num;
	}
	for (i = length - 1; i >= isNegative; i--)
	{
		str[i] = '0' + (num % 10);
		num /= 10;
	}
	return (str);
}

