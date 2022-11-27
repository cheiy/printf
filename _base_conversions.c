#include "main.h"
/**
 * _base_convert - Function converts given number to given base.
 * @num: The number to convert.
 * @base: The base to convert the number into.
 *
 * Description: Function converts given number to given base.
 *
 * Return: Nothing.
 */
int _base_convert(int num, int base)
{
	int integers[100], i, converted, rem, dividend, len;

	len = 0;
	i = 0;
	if (num == 0)
	{
		i = 1;
		integers[0] = 0;
	}
	while (num > 0)
	{
		rem = num % base;
		dividend = num / base;
		num = dividend;
		integers[i] = rem;
		i++;
	}
	i--;
	while (i >= 0)
	{
		converted = integers[i];
		_putchar(converted + '0');
		i--;
		len++;
	}
	return (len);
}
