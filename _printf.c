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
	int sum;
	char next, *string;

	sum = 0;
	while (*format != 37 && *format != '\0')
	{
		_putchar(*format);
		if (*format == '\0')
			_putchar('\n');
		format++, sum++;
	}
	va_start(arg_ptr, format);
	while (*format == 37)
	{
		next = *(format + 1);
		if (next == 99)
		{
			_putchar(va_arg(arg_ptr, int));
			_putchar('\n');
		}
		else if (next == 115)
		{
			string = va_arg(arg_ptr, char *);
			while (*string != '\0')
			{
				_putchar(*string);
				string++;
			}
			_putchar('\n');
		}
		if (next == 37)
		{
			_putchar(va_arg(arg_ptr, int));
			_putchar('\n');
		}
		sum++, format++;
	}
	va_end(arg_ptr);
	return (sum);
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
