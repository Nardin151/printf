#include "main.h"
/**
 * get_specifier - gets the spec
 * @s: the character for formatting
 * Return: pointer to the function that prints based on the specifiers
 **/
int (*get_specifier(char *s))(va_list ap, params_t *params)
{
specifier sp[] = 
{
	{"c", print_char},
	{"d", print_int},
	{"i", print_int},
	{"s", print_string},
	{""}
}

}
