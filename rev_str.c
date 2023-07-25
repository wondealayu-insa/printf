#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
*_rev - prints a string in reverse
*@rev_str: string to be reversed
*Return: number of chars printed
*/

int _rev(va_list rev_str)
{
	char *string;
	int i = 0;
	int count = 0;
	int str_len;
	int r;
	string = va_arg(rev_str, char *);
	if (string == NULL)
		string = "empty";
	while (string[i] != '\0')
	{
		i++;
	}
	str_len = i;
	r = str_len - 1;
	for (; r >= 0; r--)
	{
		_putchar(string[r]);
		count++;
	}
	return (count);
}
