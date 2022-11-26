#include "main.h"
#include <limits.h>
/**
 * _len - Function prints out numbers using _putchar
 * by _printf.
 * @n: The integer to print.
 * Description: Function prints out numbers using _putchar.
 * Return: Print numbers.
 */
int _len(int n)
{
	static unsigned int size;

	size = 0;
	if (n == INT_MIN)
	{
		_min();
		size++;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		_len(n);
		size++;
	}
	else if (n == 0)
	{
		_putchar('0');
		size++;
	}
	else if (n > 0 && n < 10)
	{
		_putchar(n + '0');
		size++;
	}
	else if (n >= 10 && n < 100)
	{
		size++;
		_putchar((n / 10) + '0');
		size++;
		_putchar((n % 10) + '0');
	}
	else if (n >= 100)
	{
		_100plus(n);
		size++;
	}
	return (size);
}
