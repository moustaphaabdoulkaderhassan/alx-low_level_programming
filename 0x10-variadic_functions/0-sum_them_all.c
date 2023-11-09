#include "variadic_functions.h"

/**
 * sum_them_all - function that returm sum of parameters
 * @n: number of argumet
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbs;
	unsigned int counts;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(numbs, n);

	for (counts = 0; counts < n; counts++)
		sum += va_arg(numbs, int);
	va_end(numbs);
	return (sum);
}
