#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
/**
 * _percent - Function handles the %
 * @ch: The current character in the format string.
 * @r_len: The rea length of characters printed out so far.
 * @arg_ptr: The current argument that we are at in the variadic function.
 *
 * Description: Function handles the % character
 *
 * Return: Nothing.
 */
int _percent(char ch, int r_len, va_list arg_ptr)
{
	char *string;

	if (ch == '%')
		_putchar('%');
	else if (ch == 'c')
		_putchar(va_arg(arg_ptr, int));
	else if (ch == 'd' || ch == 'i')
	{
		r_len += _len(va_arg(arg_ptr, int));
		r_len--;
	}
	else if (ch == 's')
	{
		string = va_arg(arg_ptr, char *);
		if (!string)
			string = "(null)";
		while (*string != '\0')
		{
			_putchar(*string);
			string++;
			r_len++;
		}
		r_len--;
	}
	else
	{
		r_len +=_other_conversions(ch, r_len, arg_ptr);
	}
	r_len++;
	return (r_len);
}
