#include "variadic_functions.h"
/**
 * sum_them_all - calculate the sum of it's parameters.
 * @n: number of the arguments passed into the function
 *
 * Return: the resultinng sum
 */
int sum_them_all(const unsigned int n, ...)
{
        unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);
	return (sum);
}
