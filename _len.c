#include "main.h"
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

