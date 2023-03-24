#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - print all data types
 * @format: type of arg passed
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_args[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), c = 1;
			break;
		case 's':
			str = va_arg(ap, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
		j = 0;
		while (t_args[j])
		{
			if (format[i] == t_args[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
	}
	va_end(ap), printf("\n");
}
