#include <stdarg.h>
#include <unistd.h>
#include "mainn.h"
/*
 * find_function - function that finds format for _printf
 * calls that corresponding function.
 * @format: format (char, string, int, decimal)
 * return: NULL or function associated ;
 */
 int (*find_function(const char *format))(va_list)
{
	unsigned int i = 0;
	code_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
   		{"R", print_rot13},
		{NULL, NULL}
	};

	while(find_f[i].sc)
	{
		if (fint_f[i].sc[0] == (*format))
			return (find_f[i].f);
		i++;
	}
	return (NULL);
}
/**
 * _printf - function that produce output according to a format
 * @format: format (char, string, int, decimal)
 * Return: size the output text;
 */
int _printf(const char *format, ...)
{
		va_list ap;
		int (*f)(va_list);
		unsigned int i =0 , cprint = 0

		if (format == NULL)
			return (-1);
		va_start(ap, format);
		while (format[i])
		{
			_putchar(format[i]);
			cprint++;
			i++;
		}
		if (format[i] == '\0')
			return(cprint)
		f = fint_function(&format[i + 1]);
		if (f != NULL)
		{
			cprint += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1)
		_putchar(format[i]);
		cprint++;
		if (format[i +1 ] == '%')
			i += 2;
		else
				i++;
	}
	va_end(ap);
	return (cprint);
}
