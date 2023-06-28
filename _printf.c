#include "main.h"
/**
 * _printf - print
 * @format: the format chars
 * Return: the number of bytes that it prints
 **/
int _printf(const char *format, ...)
{
<<<<<<< HEAD
int sum  = 0;
va_list ap;
char *p, *start;
params_t params = PARAMS_INIT;

va_start(ap, format);

if (!format  || (format[0] == '%' && !format[1]))
	return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2]);
	return (-1);
for (p = (char *)format; *p; p++)
{
	init_params(&params, ap);
	if (*p != '%')
	{
		sum += _putchar(*p);
		continue;
=======
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
>>>>>>> f11b8b35e570f48501915d93b25ed7df306d3ab3
}
start = p;
p++;
while (get_flag(p, &params))
{
p++;
}
p = get_width(p, &params, ap);
p = get_percision(p, &params, ap);
<<<<<<< HEAD
if (get_modifier(p, &params))
	p++;
if (!get_specifier(p))
	sum += print_from_to(start, p,
			params.l_modifier || params.h_modifier ? p -1 : 0);

else
	sum += get_print_func(p, ap, &params);
=======
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
>>>>>>> f11b8b35e570f48501915d93b25ed7df306d3ab3
}
}
_putchar(BUF_FLUSH);
va_end(ap);
return (sum);
}
