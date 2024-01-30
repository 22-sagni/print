#include "main.h"
#include <stdarg.h>

/**
 * printf_char - print a character
 * @val: an argument
 * Return: 1.
 */
int printf_c(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
