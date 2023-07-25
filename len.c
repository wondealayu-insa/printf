#include "main.h"
/**
 * _len - Returns the length of a string.
 * @string:  char pointer
 * Return: c.
 */
int _len(char *string)
{
	int i = 0;

	while (string[i] != 0)
	{
		i++;
	}
	return (i);

}

