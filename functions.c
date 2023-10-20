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
 * @number: The integer to be converted.
 * Return: A dynamically allocated string representing the integer.
 */
char *_int_to_string(int number)
{
	char *str;

	if (number == INT_MIN)
	{
		return (strdup("-2147483647"));
	}
	str = convert_to_string(abs(number));

	if (str == NULL)
	{
		return (NULL);
	}

	if (number < 0)
	{
		char *temp = (char *)malloc(strlen(str) + 2);

		if (temp == NULL)
		{
			free(str);
			return (NULL);
		}

		strcpy(temp + 1, str);
		temp[0] = '-';
		free(str);
		str = temp;
	}
	return (str);
}

/**
 * convert_to_string - Convert a non-negative integer to a string.
 * @number: The non-negative integer to be converted.
 * Return: A dynamically allocated string representing the integer.
 */
char *convert_to_string(unsigned int number)
{
	int length = number == 0 ? 1 : 0;
	unsigned int temp = number;
	char *str;

	while (temp > 0)
	{
		length++;
		temp /= 10;
	}

	str = (char *)malloc(length + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	str[length] = '\0';

	while (length > 0)
	{
		length--;
		str[length] = '0' + (number % 10);
		number /= 10;
	}
	return (str);
}
