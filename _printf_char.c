#include "main.h"

/**
 * _printf_char - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int _printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
