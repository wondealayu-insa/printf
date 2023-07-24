#include "main.h"
#include <stdio.h>
/**
  * _rot13 - encryptes plaintext to ciphertext using rot13 cipher
  * @plaintext: string to convert
  * Return: size of ciphertext
  */
int _rot13(va_list plaintext)
{
	int j = 0, i = 0, size = 0;
	char *str;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char shifted[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	str = va_arg(plaintext, char *);
	if (str == NULL)
		str = "(nothing_to_encrypt)";
	for (;str[i] != '\0'; i++)
	{
		for (;normal[j] != '\0'; j++)
		{
			if (str[i] == normal[j])
			{
				_putchar(shifted[j]);
				size++;
				break;
			}
		}
	}
	return (size);
}
