#include "main.h"
#include <unistd.h>
/**
 * _putchar - Function prints a single character to standard output
 * @ch: The character to print.
 * Description: Function prints a single character to standard output.
 *
 * Return: 0 if successful, 1 otherwise.
 */
void _putchar(char ch)
{
	write(1, &ch, 1);
}
