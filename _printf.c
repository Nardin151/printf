#include "main.h"
/**
 * _printf - print
 * @format: the format chars
 * Return: the number of bytes that it prints
 **/
int _printf(const char *format, ...)
{
int length  = 0;
va_list ap;
char *p = (char *)format;
char *start;
params_t params = PARAMS_INT;
va_start(ap, format);
if ((format == NULL) | ((format[0] == '%') & (format[1] == '\0')))
return (-1);
if (format[0] == '%' && format[1] == ' ' && format[1] == '\0')
return (-1);
for (; *p != '\0'; p++)
{
if (*p != '%')
{
	length++;
	_putchar(*p);
	continue;
}
start = p;
p++;
while (get_flag(p, &params))
{
p++;
}
p = get_width(p, &params, ap);
p = get_percision(p, &params, ap);
if (get_modifier(p, &params) != NULL)
{
length++;
print_from_to(start, p,
		params.l_modifier || params.h_modifier ? p - 1 : 0);
}
else
{
length++;
get_print_func(p, ap, &params);
}
}
_putchar(BUF_FLUSH);
va_end(ap);
return (lenght);
}
