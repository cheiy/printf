#include "main.h"
#include <stdlib.h>
/**
 * _strlen - This function calculates the length of a given string.
 * @str: The string whose length we want to calculate
 *
 * Description: This function calculates the length of a given string.
 *
 * Return: The length of the given string.
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * _strcopy - This function makes a copy of a given string.
 * @src_str: The source string.
 * 
 *
 * Description: Function makes a copy of a given string.
 *
 * Return: The copy of src_str.
 */
char * _strcpy(char *src_str)
{
	int src_len;
	int i;
	char *str_copy;

	i = 0;
	src_len = _strlen(src_str);
	str_copy = malloc(src_len * sizeof(char));	
	while (i < src_len)
	{
		str_copy[i] = src_str[i];
		i++;
	}
	return (str_copy);
}
