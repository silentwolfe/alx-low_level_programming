#include "variadic_functions.h"
/**
 * print_all - This function prints anything
 * @format: A list of types of argument passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *separator, ch;
	va_list args;
	int i = 0, num;
	char *str;
	float fnum;

	va_start(args, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				ch = (char)va_arg(args, int);
				printf("%s%c", separator, ch);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", separator, num);
				break;
			case 'f':
				fnum = va_arg(args, double);
				printf("%s%f", separator, fnum);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
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
