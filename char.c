#include "main.h"

/**
 * _char - function to return char
 * ch: list of inputs
 *
 * Return: number of characters printed
 */


int _char(va_list ch)
{
	int c;
	c = va_arg(ch, int);
	return (_putchar(c));
}
