#ifndef MAINH
#define MAINH

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _size(const char *format, int *i);
int _spec(va_list ex);
int hex(unsigned long int num);
int HEX(unsigned int num);
int _putchar(char c);
int _len(char *string);
int _lens(const char *s);
int _printf(const char *format, ...);
int _char(va_list ch);
int _string(va_list str);
int _int(va_list integer);
int _rev(va_list rev_str);
int _bin(va_list bin);
int _unsig(va_list u_integer);
int _octal(va_list oct);
int _x(va_list small_hex);
int _X(va_list big_x);
int _rot13(va_list plaintext);
/**
  * struct selector - Struct to handle functions
  *
  * @format: The format 
  * @f: The function associated
  */
typedef struct func_select
{
	char *indicator;
	int (*f)(va_list);
} f_select;

#endif 
