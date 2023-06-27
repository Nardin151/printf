#include "main.h"
/**
 * _printf - print
 * @format: the format chars
 * Return: the number of bytes that it prints
 **/
int _printf(const char *format, ...)
{
int length  = 0;
va_list ptr;
va_start(ptr, format);
char *p = (char *)format;
params_t params = PARAMS_INIT
if (format == NULL || (format[0] == '%' && format[1] == NULL))
return (-1);
if (format[0] == '%' && format[1] == ' ' && format[1] == NULL)
return (-1);
for (; *p != '\0'; p++)
{
if (*p != '%')
{
	lenght++;
	_putchar(*p);
	continue;
}
start = p;
p++;
while (get_flag(p, params_t *params))
{
p++;
}
p = get_width(p, &params, ap);
p = get_percision(p, &params, ap);
if (get_modifier(p, &params) != NULL)
{
lenght++;
print_from_start_to(start, p,
		params.l_modifier || params.h_modifier ? p - 1 : 0);
}
else
{
lenght++;
get_print_func(p, ap, &params);
}
_putchar(BUF_FLUSH);
va_end(ap);
return (lenght);
}
