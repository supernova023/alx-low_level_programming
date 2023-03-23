#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @n: number to be printed
 * @separator: character to print in between numbers
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num;

	va_start(ap, n);

	num = 0;
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
