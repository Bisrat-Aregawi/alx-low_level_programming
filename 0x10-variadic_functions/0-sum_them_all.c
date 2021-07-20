#include "variadic_functions.h"

/**
 * sum_them_all - Function adds all arguments passed to it
 * @n: Number of arguments passed
 * @...: arguments list
 *
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	i = 0, sum = 0;
	if (n > 0)
	{
		va_list args;

		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}
		return (sum);
	}
	return (0);
}
