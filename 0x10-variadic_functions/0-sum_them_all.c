#include "variadic_functions.h"
#include <stdarg.h>


	/**
	 * sum_them_all - sum of all its paramters.
	 * @n: returns number of paramters passed to the function.
	 * @...: A variable number of paramters to calculate the sum of.
	 *
	 * Return: If n == 0 - 0.
	 *         Otherwise - the sum of all parameters.
	 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list vc;
		unsigned int b, sum = 0;


		va_start(vc, n);


		for (b = 0; b < n; b++)
			sum += va_arg(vc, int);


		va_end(vc);


		return (sum);
	}



