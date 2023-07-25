#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
  * format_select - function that finds formats for _printf
  * calls the corresponding function.
  * @format: format ie. string, hex, oct, decimal)
  * Return: NULL or function associated ;
  */
int (*format_select(const char *format))(va_list)
{
	unsigned int i = 0;
	f_select _f[] = {
		{"c", _char},
		{"s", _string},
		{"i", _int},
		{"r", _rev},
		{"b", _bin},
		{"u", _unsig},
		{"o", _octal},
		{"x", _x},
		{"X", _X},
		{"R", _rot13},
		{NULL, NULL}
	};

	while (_f[i].indicator)
	{
		if (_f[i].indicator[0] == (*format))
			return (_f[i].f);
		i++;
	}
	return (NULL);
}
/**
  * _printf - function that produces output according to a format.
  * @format: format (char, string, int, decimal)
  * Return: size the output text;
  */
int _printf(const char *format, ...)
{
	va_list out;
	int (*f)(va_list);
	unsigned int i = 0;
	unsigned int count = 0;
	if (!format)
		return (-1);
	va_start(out, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (format[i] == '\0')
			return (count);
		f = format_select(&format[i + 1]);
		if (f != NULL)
		{
			count += f(out);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		/* percentage handler */
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(out);
	return (count);
}
