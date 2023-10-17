#include "main.h"

int main(void)
{
	int len;

	len = _printf("Hello, %s! My favorite character is %c.\n", "Alice", 'R');
	_printf("Number of characters printed: %d\n", len);

	return (0);
}

