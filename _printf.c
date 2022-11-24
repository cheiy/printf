#include "main.h"
#include <unistd.h>
#include <stdarg.h>
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

	_len_ptr = &len;
	len = 0;
	va_start(arg_ptr, format);
	while (format && format[len])
	{
		if (format[len] != '%' && format[len] != '\\')
			_putchar(format[len]);
		else if (format[len] == '%')
		{
			len++;
			if (format[len] == 'c')
				_putchar(va_arg(arg_ptr, int));
			if (format[len] == 'd' || format[len] == 'i')
				_len(va_arg(arg_ptr, int));
			if (format[len] == 's')
			{
				string = va_arg(arg_ptr, char *);
				while (*string != '\0')
				{
					_putchar(*string);
					string++;
				}
			}
			if (format[len] == '%')
				_putchar(format[len]);
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
int _putchar(char ch)
{
	return (write(1, &ch, 1));
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
	else if (n < 10)
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
