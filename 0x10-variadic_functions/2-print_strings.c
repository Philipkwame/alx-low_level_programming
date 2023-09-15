#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * detail: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sent;
	char *str;
	unsigned int alpha;

	va_start(sent, n);

	for (alpha = 0; alpha < n; alpha++)
	{
		str = va_arg(sent, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (alpha != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(sent);
}

