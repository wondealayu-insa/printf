#include "main.h"

/**
 * _octal - function to print octal
 * @oct: list being passed
 * Return: updated count
 */
int _octal(va_list oct)
{
	/* Step 1: Divide the number by 8 and increment oct_length, do this until then number cannot be divided by 8.
	 * Step 2: Allocate memory of size(oct_length * sizeof(int))
	 * Step 3: Store octal in reverse using a loop
	 * Step 4: Reverse said loop , free memory and return oct length
	 */
	int index;
	int i = 0;
	int oct_length = 0;
	int *rev_octal;
	unsigned int decimal = va_arg(oct, unsigned int);
	unsigned int replica = decimal;
	/*loop to obtain octal length*/
	while (decimal / 8 != 0)
	{
		decimal /= 8;
		oct_length++;
	}
	oct_length++;
	rev_octal = malloc(oct_length * sizeof(int));
	/*loop to store obtain octal from decimal number (stored in reverse)*/
	while (i < oct_length)
	{
		rev_octal[i] = replica % 8;
		replica /=  8;
		i++;
	}
	/*reverse the array to get the true octal*/
	index = oct_length - 1;
	while (!(index < 0))
	{
		_putchar(rev_octal[index] + '0');
		index--;
	}
	free(rev_octal);
	return (oct_length);
}
