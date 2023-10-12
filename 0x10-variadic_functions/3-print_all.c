#include "variadic_functions.h"
/**
 *print_all - prints anything
 *@format: list of argument types
 */
void print_all(const char *const format, ...)
{
	va_list ptr;
	char *separator = "";
	int i = 0;
	char *str;

	va_start(ptr, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(ptr, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(ptr, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(ptr, double));
			break;
		case 's':
			str = va_arg(ptr, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s%s", separator, str);
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(ptr);
}
