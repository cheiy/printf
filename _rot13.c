#include "main.h"
/**
 * rot13 - Function encodes a string using rot13.
 * @str: String to encode.
 *
 * Description: Function encodes a string using rot13.
 *
 * Return: A pointer to encoded string.
 */
char *rot13(char *str)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot_encode = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int len;
	int encode;
	char *str_copy;
	int i;

	i = 0;
	len = 0;
	encode = 0;
	while (str[len] != '\0')
	{
		while (encode <= 52)
		{
			if (str[len] == alpha[encode])
			{
				str[len] = rot_encode[encode];
				break;
			}
			else
			{
				encode++;
			}
		}
		encode = 0;
		len++;
	}
	str_copy = malloc(len * sizeof(char));
	while (i < len)
	{
		str_copy[i] = str[i];
		i++;
	}
	return (str_copy);
}
