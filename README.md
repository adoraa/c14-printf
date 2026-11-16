# Custom `_printf` in C

A custom implementation of the C standard library's `printf()` function, written in C. The project uses variadic functions and a format-string parser to handle different conversion specifiers and print formatted output.

## Features

- Handles variadic arguments using `va_list`.
- Parses format strings and dispatches conversion specifiers to their corresponding functions.
- Prints characters and strings.
- Handles signed and unsigned integers.
- Supports decimal, hexadecimal, octal, and binary output.
- Prints memory addresses.
- Includes custom string conversions.
- Returns the total number of characters printed.

## Supported Conversion Specifiers

| Specifier | Description |
|---|---|
| `%c` | Prints a character |
| `%s` | Prints a string |
| `%%` | Prints a literal percent sign |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints an integer |
| `%u` | Prints an unsigned integer |
| `%p` | Prints a memory address |
| `%x` | Prints a number in lowercase hexadecimal |
| `%X` | Prints a number in uppercase hexadecimal |
| `%o` | Prints a number in octal |
| `%b` | Prints a number in binary |
| `%r` | Prints a string in reverse |
| `%R` | Converts a string to ROT13 |
| `%S` | Prints non-printable characters as `\\x` followed by their hexadecimal value |

## Getting Started

### Requirements

- GCC compiler
- A Unix-like operating system
- Git

### Installation

Clone the repository:

```bash
git clone https://github.com/adoraa/c14-printf.git
```

Navigate to the project directory:

```bash
cd c14-printf
```

Compile the source files:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf_demo
```

Run the program:

```bash
./printf_demo
```

## Usage

Include `main.h` in your C source file and call `_printf()` with a format string and the corresponding arguments.

```c
#include "main.h"

int main(void)
{
    _printf("Hello %s! You are %d years old.\\n", "world", 42);
    _printf("Binary: %b\\n", 10);
    _printf("Reverse: %r\\n", "hello");

    return (0);
}
```

## Project Structure

| File | Description |
|---|---|
| `_printf.c` | Main `_printf()` implementation and format-string parsing |
| `main.h` | Function declarations, header files, and constants |
| `_putchar.c` | Writes a character to standard output |
| `print_char.c` | Handles character conversion |
| `print_string.c` | Handles string conversion |
| `print_int.c` | Handles integer conversion |
| `print_binary.c` | Handles binary conversion |
| `print_hex.c` | Handles hexadecimal conversion |
| `print_oct.c` | Handles octal conversion |
| `print_pointer.c` | Handles pointer conversion |
| `print_percent.c` | Handles literal percent conversion |
| `print_rev.c` | Handles reversed-string conversion |
| `print_rot13.c` | Handles ROT13 conversion |

## Notes

The project uses a table of conversion specifiers and associated functions. When the parser encounters `%`, it checks the next character against this table and calls the matching function.

Each conversion function retrieves its argument using `va_arg()`, handles the output, and returns the number of characters printed. `_printf()` combines these counts and returns the total.

It does not implement the full range of standard `printf` formatting features, such as field width, precision, and flag handling.

Academic C programming project using variadic functions, function pointers, format-string parsing, and low-level output using `write()`.

**Bugs — Disclaimer:** Some solutions may not meet the stated requirements.
