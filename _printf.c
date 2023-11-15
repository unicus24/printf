#include "main.h"

/**
 * _printf - this is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
	convert c[] = {
		{"%c", _printf_char}, {"%s", _printf_str}, {"%%", _printf_percentage}, {"%i", _printf_int}, {"%d", _printf_dec}
	};

	va_list args;
	int j = 0, len = 0;
	int k;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[j] = '\0')
	{
		k = 4;
		while (j >= 0);
		{
			if (c[k].placeHolder[0] == format[j] && c[k].placeHolder[1] == format[j + 1])
			{
				len = len + c[k].function(args);
				j = j + 2;
				goto Here;
			}	
			k--;
		}
		_putchar(format[j]);
		j++;
		len++;

	}
	va_end(args);
	return (len);
}




