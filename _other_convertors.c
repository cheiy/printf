#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * _other_conversions - Function handles the %
 * @ch: The current character in the format string.
 * @r_len: The real length of characters printed out so far.
 * @arg_ptr: The current argument that we are at in the variadic function.
 *
 * Description: Function handles all other convertors including the % character
 *
 * Return: The length of characters printed so far.
 */
int _other_conversions(char ch, int r_len, va_list arg_ptr)
{
	int num;
	int i;
	char *_roted_string, *string;

	i = 0;
	if (ch == 'b')
	{
		num = va_arg(arg_ptr, int);
		if (num < 0)
		{
			num = (-(num + 1));
		}
		r_len += _base_convert(num, 2);
		r_len--;
	}
	else if (ch == 'R')
	{
		string = va_arg(arg_ptr, char *);
		_roted_string = rot13(string);
		while (_roted_string[i] != '\0')
		{
			_putchar(_roted_string[i]);
			i++;
			r_len++;
		}
		r_len--;
	}
	else if (!ch)
		exit(EXIT_FAILURE);
	else
	{
		_putchar('%');
		_putchar(ch);
		r_len++;
	}
	return (r_len);
}
