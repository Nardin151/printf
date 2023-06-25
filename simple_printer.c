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
int length = 0;
for (; start <= stop; start++)
{
if (start != except)
{
_putchar(*start);
length++;
}
}
return (lenght);
}
/**
 * print_rev: reverse the string
 * @ap: string
 * @params: the struct containnig the paramters
 * Return: the number of bytes printed
 **/
int print_rev(va_list ap, params_t *params)
{
unsigned int size = 0;
int bytes = 0;
char *S1 = va_arg(ap, char*)
while (S1[bytes] != '\0')
{
size++;
bytes++;
}
while (size > 0)
{
_putchar(S1[size]);
size--;
}
return (bytes);
}
/**
 * print_rot13 - print char + 13
 * @ap: string
 * @params: paramters in the struct
 * Return: the number of bytes
 **/
int print_ro13(va_list ap, params_t *params)
{
(void)params;
int i;
char *str = va_arg(ap,char *);
for(i = 0; i<= str[i] != NULL; i++)
{
if ((str[i] >= 65) & (str[i] <= 90))
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
