#include "main.h"
/**
 * _printf_str - function that prints a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int _printf_str(va_list val)
{
	char *s;
	int k, 
	int len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (k = 0; k < len; k++)
			_putchar(s[k]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (k = 0; k < len; k++)
			_putchar(s[k]);
		return (len);
	}
}
