#include "main.h"
/**
 * get_precision - gets the percision from the
 * @ap: pointer
 * @params: struct
 * @p: the specifier
 * Return: new pointer
 **/
char *get_precision(char *p, params_t *params, va_list ap)
{
int d  = 0;
if (*p  != '.')
return (p);
p++;
if (*p == '*')
{
d = va_arg(ap, int);
p++;
}
else
{
while (_isdigit(*p))
d = d * 10 + (*p++ - '0');
}
params->precison = d;
return (p);
}
