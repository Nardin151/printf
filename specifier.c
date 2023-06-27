#include "main.h"
/**
 * get_specifier - gets the spec
 * @s: the character for formatting
 * Return: pointer to the function that prints based on the specifiers
 **/
int (*get_specifier(char *s))(va_list ap, params_t *params)
{
int index  = 0;
specifier_t sp[] = {
	{"c", print_char},
	{"d", print_int},
	{"i", print_int},
	{"s", print_string},
	{"%", print_percent},
	{"b", print_binary},
	{"o", print_octal},
	{"u", print_unsigned},
	{"x", print_hex},
	{"X", print_HEX},
	{"p", print_address},
	{"S", print_S},
	{"r", print_rev},
	{"R", print_rot13},
	{NULL, NULL}
};
for (; sp[index].specifier != NULL; index++)
{
if (s == sp[index].specifier)
return (sp[index].f);
}
return (NULL);
}
/**
 * get_print_func- gets the print function corresponding to the specifier
 * and calls it
 * @s: char of specifier
 * @ap: pointer
 * @params: paramter struct
 * Return: the number of printed chars
 **/
int get_print_func(char *s, va_list ap, params_t *params)
{
int (*f)(va_list, params_t *) = get_specifier(s);
if (f != NULL)
return (f(ap, params));
return (0);
}
/**
 * get_flag - get the flag and intializes it in the struct
 * @s: character of the flag
 * @params: the struct
 * Return: the flag
 **/
int get_flag(char *s, params_t *params)
{
int i = 0;
if (s != NULL)
{
if (s[i] == '+')
return (params->plus_flag = 1);
else if (s[i] == ' ')
return (params->space_flag = 1);
else if (s[i] == '#')
return (params->hashtag_flag = 1);
else if (s[i] == '-')
return (params->minus_flag = 1);
else if (s[i] == '0')
return (params->zero_flag = 1);
else
return (0);
}
return (0);
}
/**
 * get_modifier - returns the modifier
 * @s: char of the modifier
 * @params: struct
 * Return: the modifier
 **/
int *get_modifier(char *s, params_t *params)
{
int i = 0;
if (s != NULL)
{
if (s[i] == 'h')
return (params->h_modifier = 1);
else if (s[i] == 'l')
return (params->l_modifier = 1);
else
return (0);
}
return (0);
}
/**
 * get_width - returns the lenght of the format
 * @s: specifier char
 * @ap: poniter
 * @params: params_struct
 * Return: pointer to new address
 **/
char *get_width(char *s, va_list ap, params_t *params)
{
int i = 0;
while (*s == '*')
{
i = va_arg(ap, int);
s++;
}
while (_isdigit(*s))
i = i * 10 + (*s++ - '0');
params->width = i;
return (s);
}
