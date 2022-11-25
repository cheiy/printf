#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - Function that produces output according to a format
 * @format: String containing the format codes.
 * Description: Function produces output according to a specified format.
 * Return: Number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list arg_ptr;
	int len, real_len, *_len_ptr;
	char *string;

	_len_ptr = &real_len;
	len = real_len = 0;
	va_start(arg_ptr, format);
	if (format == NULL)
		exit(EXIT_FAILURE);
	while (format && format[len] != '\0')
	{
		if (format[len] != '%' && format[len] != '\0')
		{
			_putchar(format[len]);
			real_len++;
		}
		else if (format[len] == '%')
		{
			len++;
			if (format[len] == '%')
				_putchar(format[len]);
			else if (format[len] == 'c')
				_putchar(va_arg(arg_ptr, int));
			else if (format[len] == 'd' || format[len] == 'i')
				_len(va_arg(arg_ptr, int));
			else if (format[len] == 's')
			{
				string = va_arg(arg_ptr, char *);
				if (!string)
					string = "(null)";
				while (string && *string != '\0')
				{
					_putchar(*string);
					string++;
					real_len++;
				}
				real_len--;
			}
			else
				exit(EXIT_FAILURE);
			real_len++;
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
