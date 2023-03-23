#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all -  print numbers
*
* @format: format is first param
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	char *s;
	char *arg;

	va_start(ap, format);
	while ((arg = va_arg(ap, char *)))
	{
		s = va_arg(ap, char *);
		if (format == NULL)
			printf("(nil)");
		else
			printf("%format", s);
	}
	va_end(ap);
	printf("\n");
}
