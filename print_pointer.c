#include "main.h"
/**
 * print_pointer - prints String in hexadecimal format
 * @arg: argument
 * Return: number of characters
 **/
int print_pointer(va_list arg)
{
	void *ptr;
	char *str = "(nil)";
	long int count;
	int i, byte;

	ptr = va_arg(arg, void*);
	while (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}
	count = (unsigned long int)ptr;
	_putchar(48);
	_putchar('x');
	byte = print_address(count);
	return (byte + 2);
}
