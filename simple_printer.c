#include "main.h"
/**
 * print_from_to - prints a string of chars
 * @start: pointer to the begining of the string
 * @stop: pointer to the end of the string
 * @except: pointer to the chars that we will not print
 * Return: the number of bytes printed
 **/
int print_from_to(char *start, char *stop, char *except)
{
	int sum = 0;
	
	while (start <= stop)
	{
		if (start != except)
		{
			sum += _putvhar(*start);
			start++;
		}
	}
	return (sum);
}
/**
 * print_rev - reverse the string
 * @ap: string
 * @params: the struct containnig the paramters
 * Return: the number of bytes printed
 **/
int print_rev(va_list ap, params_t *params)
{
	int len, sum = 0;
	char *str = va_srg(ap, char *);
	(void)params;	

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str+=)
			sun += _putchar(*str);
	}
	return (sum);
}
/**
 * print_rot13 - print char + 13
 * @ap: string
 * @params: paramters in the struct
 * Return: the number of bytes
 **/
int print_rot13(va_list ap, params_t *params __attribute__((unused)))
{
int i;
char *str = va_arg(ap, char *);
for (i = 0; str[i] != NULL; i++)
{
if (((str[i] >= 65) & (str[i] <= 90)))
{
if (str[i] + 13 > 90)
_putchar((str[i] % 65) + 13);
else
_putchar(str[i] + 13);
}
else if ((str[i] >= 97) & (str[i] <= 122))
if (str[i] + 13 > 122)
_putchar((str[i] % 97) + 13);
else
_putchar(str[i] + 13);
}
return (i);
}
