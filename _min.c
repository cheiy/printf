#include "main.h"
#include <limits.h>
/**
 * _min - Function prints INT_MIN using _putchar function
 *
 * Description: This function prints INT_MIN using the _putchar function.
 */
void _min(void)
{
	int rem;
	int n;

	rem = -(INT_MIN % 10);
	n = INT_MIN / 10;
	_len(n);
	_putchar(rem + '0');
}
