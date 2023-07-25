#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int _unsig(va_list u_integer)
{
	unsigned int n = va_arg(u_integer, int);
	int num, last_digit = n % 10, digit, exp = 1;
	int  i = 0;
	/* obtain all digits but the last one */
	n = n / 10;
	num = n;
	/**handling negative integers
	 * Prints the - character and sets all numbers to 0
	 * */
	if (last_digit < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_digit = -last_digit;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		/* while loop to separate digits */
	while (exp > 0)
	{
	digit = num / exp;
	_putchar(digit + '0');
	/* sets the next digit to be printed */
	num = num - (digit * exp);
	exp = exp / 10;
	i++;
	}
	}
	/* adds the last character to the rest of the digits */
	_putchar(last_digit + '0');
	i++;
	return (i);
}
