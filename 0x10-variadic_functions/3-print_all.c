#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - This function prints anything
 * @format: A list of types of argument passed
 * to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	char *separator;
	va_list args;

	va_start(args, format);
	separator = "";
	i = 0;
	char ch;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				ch = (char)va_arg(args, int);

				printf("%s%c", separator, ch);
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				separator = va_arg(args, char *);
				if (separator == NULL)
					separator = "(nil)";
				printf("%s%s", separator, va_arg(args, char *));
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}
