#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
typedef struct fmt
{
	char *fmt;
	int (*fn)();
} print_t;

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(va_list arg);
int print_string(va_list arg);
int print_S(va_list arg);

/* Functions to print numbers */
int print_int(va_list arg);
int print_unsigned(va_list arg);
int print_decimal(va_list arg);

/* Function to print non printable characters */
int print_percent(void);

/* Funcion to print memory address */
int print_pointer(va_list arg);
int print_address(unsigned long int arg);
int print_HexAddress(unsigned int arg);

/* Function to print hexadecimal values*/
int print_hex(va_list arg);
int print_Hex(va_list arg);

/*Function to print octal numbers*/
int print_oct(va_list arg);

/*Function to print binary numbers*/
int print_binary(va_list arg);

/* Funciotns to handle other specifiers */

/*Function to print string in reverse*/
int print_rev(va_list arg);

/*Function to print a string in rot 13*/
int print_rot13(va_list arg);

/* width handler */

/****************** UTILS ******************/
int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int strlen_const(const char *s);
int _strcmp(char *str1, char *str2);
int parse_format(const char *format, print_t t[], va_list arg);

#endif /* MAIN_H */
