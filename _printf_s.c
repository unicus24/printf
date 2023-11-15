#include "main.h"
/**
 * _printf_str - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int _printf_str(va_list val)
{
	char *s;
	int a, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (a = 0; a < len; a++)
			_putchar(s[a]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (a = 0; a < len; a++)
			_putchar(s[a]);
		return (len);
	}
}
