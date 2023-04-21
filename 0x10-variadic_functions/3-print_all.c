#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: pointer to list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list list;
	const char *p = format;
	char cv;
	int iv, null_string = 0;
	float fv;
	char *sv;

	va_start(list, format);
	while (*p)
	{
		switch (*p++)
		{
			case 'c':
				cv = va_arg(list, int);
				printf("%c", cv);
				break;
			case 'i':
				iv = va_arg(list, int);
				printf("%d", iv);
				break;
			case 'f':
				fv = va_arg(list, double);
				printf("%f", fv);
				break;
			case 's':
				sv = va_arg(list, char *);
				if (sv == NULL)
				{
					null_string = 1;
					sv = "(nil)";
				}
				printf("%s", sv);
				break;
			default:
				break;
		}
		if (*p && !null_string)
			printf(", ");
	}
	printf("\n");
	va_end(list);
}
