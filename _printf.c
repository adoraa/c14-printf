#include "main.h"
/**
* parse_format - prints a formated string
* @format: string to be printed
* @t: a list of functions
* @arg: arguments passed to the program
* Return: number of characters printed
*/
int parse_format(const char *format, print_t t[], va_list arg)
{
	int i, j, count, size = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; t[j].fmt != NULL; j++)
			{
				if (format[i + 1] == t[j].fmt[0])
				{
					count = t[j].fn(arg);
					if (count == -1)
						return (-1);
					size += count;
					break;
				}
			}
			if (format[i] == '\0')
				break;
			if (t[j].fmt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					size = size + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			size++;
		}
	}
	return (size);
}

/**
 * _printf - formats output and print data
 * @format: input string
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int size;

	print_t t[] = {
		{"s", print_string},
		{"c", print_char},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_int},
		{"p", print_pointer},
		{"u", print_unsigned},
		{"x", print_hex},
		{"o", print_oct},
		{"X", print_Hex},
		{"b", print_binary},
		{"r", print_rev},
		{"R", print_rot13},
		{"S", print_S},
		{NULL, NULL}
	};

	if (!format)
		return (-1);
	va_start(arg, format);
	size = parse_format(format, t, arg);
	va_end(arg);
	return (size);
}
