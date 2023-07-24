#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _len(char *s)
{
	int c = 0;

	while (s[c] != 0)
	{
		c++;
	}
	return (c);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _lens(const char *s)
{
	int c = 0;

	while (s[c] != 0)
	{
		c++;
	}
		
	return (c);
}
