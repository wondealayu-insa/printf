#include "main.h"
/**
 * _bin - function to print octal
 * @bin: list of integers
 * Return: binary length
 */
int _bin(va_list bin)
	{	
	/**
	 * Step 1: Divide the number by 2 and increment bin_length, do this until then number cannot be divided by 2.
	 * Step 2: Allocate memory of size(bin_length * sizeof(int))
	 * Step 3: Store binary in reverse using a loop
	 * Step 4: Reverse said loop , free memory and return binary length
	 * */
	int i = 0;
	int bin_length = 0;
	int *rev_binary;
	int index;
	unsigned int decimal = va_arg(bin, unsigned int);
	unsigned int replica = decimal;
	/*loop to obtain octal length*/
	while (decimal / 2 != 0)
	{
		decimal /= 2;
		bin_length++;
	}
	bin_length++;
	rev_binary = malloc(bin_length * sizeof(int));
	/*loop to store obtain binary from decimal number (stored in reverse)*/
	while (i < bin_length)
	{	
		rev_binary[i] = replica % 2;
		replica /=  2;
		i++;
	}	
	index = bin_length - 1;
	while (!(index < 0))
	{
		_putchar(rev_binary[index] + '0');
		index--;
	}
	free(rev_binary);
	return (bin_length);
}
