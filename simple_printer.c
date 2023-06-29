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
			sum += _putchar(*start);
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
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str++)
			sum += _putchar(*str);
	}
	return (sum);
}
/**
 * print_rot13 - print char + 13
 * @ap: string
 * @params: paramters in the struct
 * Return: the number of bytes
 **/
int print_rot13(va_list ap, params_t *params)
{
	int i, index;
	int count = 0;
	char arr[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(ap, char *);
	(void)params;

	i = 0;
	index = 0;
	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'z')
				|| (a[i] >= 'a' && a[i] <= 'z'))
		{
			index = a[i] - 65;
			count += _putchar(arr[index]);
		}
		else
			count += _putchar(a[i]);
		i++;
	}
	return (count);
}
