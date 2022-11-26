#include "main.h"
/**
 * _100plus - This function is called from within _len to print values of
 * n larger than 100 using the _putchar function.
 * @n: The value larger than 100 that we want to print.
 * Description: Function called from within _len to print values of
 * n larger than 100, using the _putchar function.
 *
 * Return: Nothing.
 */
void _100plus(int n)
{
	int rem;

	rem = n % 10;
	n = n / 10;
	_len(n);
	_putchar(rem + '0');
}
