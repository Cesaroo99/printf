#include "holberton.h"

/**
 * print_revers - prints a string in reverse
 * @r: the variadic argument brought from printf function
 * return: amout of characters printed
 *
 */

int print_reverse(va_list r)
{
	int i = 0, lenr = 0;
	char *s = va_arg(r, char *);

	while (s[i] != '\0')
		i++;
	lenr = i;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	retun (lenr);
}

/**
 * print_rot13 - prints a string encryption with rot13
 * @R: the variadic argument brought form printf function
 * Return: amout of characters printed
 */

inr print_rot13(va_list R)
{
	int len = 0;
	int i , j;
	char *s = va_arg(R, char *);

	char alpha[] = 
		"\n! aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	"\n!_ nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; != '\0' ; i++)
	{
		for (j =0; j <= 55; j++)
		{
			if (s[i] == alpha[j])
			{
				len = len + _putchar(replace[j]);
				break;
			}
		}
	}
	retun (len);
}
