#include "main.h"
/**
 * print_hex - prints an hexadecimal number %x
 * @arg: argument
 * Return: number of characters
 */
int print_hex(va_list arg)
{
	int i, *arr, count = 0;
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] += 39;
		_putchar(arr[i] + 48);
	}
	free(arr);
	return (count);
}

/**
 * print_Hex - prints an hexadecimal number %X
 * @arg: argument
 * Return: number of characters
 */
int print_Hex(va_list arg)
{
	int i, *arr, count = 0;
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] += 7;
		_putchar(arr[i] + 48);
	}
	free(arr);
	return (count);
}

/**
 * print_address - prints memory address in hexadecimal form
 * @arg: argument
 * Return: number of characters
 */
int print_address(unsigned long int arg)
{
	long int i, *arr, count = 0;
	unsigned long int temp = arg;

	while (arg / 16 != 0)
	{
		arg /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int) + 1);

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] += 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}

/**
 * print_HexAddress - prints an hexadecimal number
 * @arg: argument
 * Return: number of characters
 */
int print_HexAddress(unsigned int arg)
{
	int i, *arr, count = 0;
	unsigned int temp = arg;

	while (arg / 16 != 0)
	{
		arg /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] += 7;
		_putchar(arr[i] + 48);
	}
	free(arr);
	return (count);
}
