#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - Function that produces output according to a format
 * @format: String containing the format codes.
 * Description: Function produces output according to a specified
 * format.
 * Return: Number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list arg_ptr;
	int len;
	char *string;
	int *_len_ptr;
	int next;

	_len_ptr = &len;
	len = 0;
	next = 0;
	va_start(arg_ptr, format);
	while (format[len] != '\0')
	{
		if (format[len] != '%' && format[len] != '\0')
		{
			_putchar(format[len]);
		}
		else if (format[len] == '%')
		{
			next = len + 1;
			if (format[next] == '%')
				_putchar(format[next]);
			else if (format[next] == 'c')
				_putchar(va_arg(arg_ptr, int));
			else if (format[next] == 's')
			{
				string = va_arg(arg_ptr, char *);
				while (*string != '\0')
				{
					_putchar(*string);
					string++;
				}
			}
			len++;
		}
		len++;
	}
	va_end(arg_ptr);
	return (*_len_ptr);
}
/**
 * _putchar - Function prints a single character to standard output.
 * @ch: The character to print.
 * Description: Function prints a single character to standard output.
 *
 * Return: 0 if successful, 1 otherwise.
 */
void _putchar(char ch)
{
	write(1, &ch, 1);
}
/**
 * _len - Function prints out numbers using _putchar
 * by _printf.
 * @n: The integer to print.
 * Description: Function prints out numbers using _putchar.
 *
 * Return: Print numbers.
 */
void _len(int n)
{
	int rem;

	if (n == 0)
		_putchar('0');
	else if (n > 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100)
	{
		rem = n % 10;
		n = n / 10;
		_len(n);
		_putchar(rem + '0');
	}
}
