#include "main.h"
/**
 * _puts - functions printing a string followed by a new line
 * @string: string of chars
 * Return: lenght of the string printed
 **/
int _puts(char *str)
{
	char *a = str;
	
	while (*str)
		_putchar(*str++);

	return (str - a);
}
/**
 * _putchar - prints the output of  string of chars
 * @c: characters
 * Return: 1 on success
 **/
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c =	 BUF_FLUSH || >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c
	return (1);
}
