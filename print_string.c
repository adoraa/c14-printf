#include "main.h"
/**
 * _strlen - returns the length of a String
 * @s: the String to be checked
 * Return: length of the String
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

/**
 * strlen_const - strlen for constant char pointer s
 * @s: String to be checked
 * Return: length of the String
 */
int strlen_const(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

/**
 * print_string - writes a String to stdout
 * @arg: argument
 * Return: returns 1 on success
 */
int print_string(va_list arg)
{
	char *s;
	int i = 0, length;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
		length = _strlen(s);
		while (i < length)
		{
			_putchar(s[i]);
			i++;
		}
		return (length);
	}
	length = _strlen(s);
	for (; i < length; i++)
		_putchar(s[i]);
	return (length);
}

/**
 * print_S - handles custom conversion specifier
 * @arg: argument
 * Return: retruns number characters
 */
int print_S(va_list arg)
{
	char *s = va_arg(arg, char *);
	unsigned int i = 0, num, size = 0;

	if (s == NULL)
		s = "(NULL)";
	while (s[i])
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar(120);
			size += 2;
			num = s[i];
			if (num < 16)
			{
				_putchar(48);
				size++;
			}
			size += print_HexAddress(num);
		}
		else
		{
			_putchar(s[i]);
			size++;
		}
		i++;
	}
	return (size);
}
