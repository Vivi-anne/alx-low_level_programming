#include "variadic_functions.h"

/**
 * print_numbers - prints a list of numbers with a separator
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(numbers, int));
		else if (separator && i == 0)
			printf("%d", va_arg(numbers, int));
		else
			printf("%s%d", separator, va_arg(numbers, int));
	}
	va_list(numbers);

	printf("\n")
}
