#include "main.h"
/**
 * _printf_int - this function prints an integer
 * @args: argument to print
 * Return: integer
 */
int _printf_int(va_list args)
{
	int k = va_arg(args, int);
	int num, last = k % 10, digit, exp = 1;
	int  i = 1;

	k = k / 10;
	num = k;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		k = -k;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = k;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * _printf_dec - function that prints a decimal
 * @args: argument to print
 * Return: integer
 */

int _printf_dec(va_list args)
{
	int k = va_arg(args, int);
	int num, last = k % 10, digit;
	int  i = 1;
	int exp = 1;

	k = k / 10;
	num = k;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		k = -k;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = k;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
