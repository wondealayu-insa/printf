#include "main.h"

/**
 * _x - function to print numbers in hexadecimal(letters in upper case)
 * @big_x: list of integers
 * @Return: hexadecimal length
 */

int _x(va_list small_x)
{
	/* Step 1: Divide the number by 16 and increment bin_length, do this until then number cannot be divided by 16.

           Step 2: Allocate memory of size(bin_length * sizeof(int))

           Step 3: Store binary in reverse using a loop

           Step 4: Reverse said loop , free memory and return binary length
	 */
	int i = 0;
	int hex_length = 0;
	int *rev_hex;
	int index;
	unsigned int decimal = va_arg(small_x, unsigned int);
	unsigned int replica = decimal;

	/*loop to obtain hex length */
	while (decimal / 16 != 0)
	{
		decimal /= 16;
		hex_length++;
	}
	hex_length++;

	/*array to store hex (hex is stored in reverse here) */
	
	rev_hex = malloc(hex_length * sizeof(int));
	
	/*loop to store obtain hex from decimal number (stored in reverse)*/
	while (i < hex_length)
	{	
		rev_hex[i] = replica % 16;
		replica /= 16;
		i++;
	}
	
	/*reverse the array to get the true hex*/
	index = hex_length - 1;

        while (!(index < 0))
	{
		if (rev_hex[i] >= 10)
		/*conversion of number to lower case(adds +39 to access lower case letters)*/
		rev_hex[i] = rev_hex[i] + 39;
		_putchar(rev_hex[index] + '0');
		index--;
	}
	free(rev_hex);
	return (hex_length);
}
