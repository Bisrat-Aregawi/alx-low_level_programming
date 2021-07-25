#include "variadic_functions.h"

/**
 * print_strings - Function prints strings passed as variadic arguments
 * @separator: The separator character to use
 * @n: Number of variadic arguments passed
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list(arguments);

	va_start(arguments, n);

	i = 0;

	while (i < n)
	{
		str = va_arg(arguments, char *);
		printf("%s", (str == NULL ? "(nil)" : str));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(arguments);
	printf("\n");
}
