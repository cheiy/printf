#include "main.h"

/**
 * _reverse - prints strings from last charcter
 * @s: string
 * Return: 0
 */

void _reverse(char *s)
{
	if (*s != '\0')
	{
		_reverse(s + 1);
		_putchar(*s);
	}
}
