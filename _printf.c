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
	/*char *string;*/

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
			real_len += _percent(format[len], real_len, arg_ptr);
		}
		len++;
	}
	va_end(arg_ptr);
	return (*_len_ptr);
}
