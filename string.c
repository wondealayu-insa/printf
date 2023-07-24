#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_string - writes the character c to stdout
 * @s: The string to print
 *
 * Return: 1.
 */
int _string(va_list str)
{
	char string;
	int  i = 0;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(nill)";
	while (string[i] != 0)
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
