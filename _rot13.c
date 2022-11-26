#include "main.h"

/**
 * _rot13 - encode using ceasar cipher by replacing each
 * letter with the letter thirteen places down the
 * alphabet
 * @str: string
 * Return: string
 */

char *_rot13(char *str)
{
	int a = 0, b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[a] != '\0')
	{
		b = 0;
		while (b <= 51)
		{
			if (c[b] == str[a])
			{
				str[a] = c1[b];
			}
			b++;
		}
		a++;
	}
	return (str);
}
