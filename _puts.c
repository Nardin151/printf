#include "main.h"
/**
 * _puts - functions printing a string followed by a new line
 * @string: string of chars
 * Return: lenght of the string printed
 **/
int _puts(char *string)
{
unsigned int n  = 0;
while (string[n] !== '\0')
{
_putchar(string[n]);
string++;
n++;
}
return (n);
}
/**
 * _putchar - prints the output of  string of chars
 * @c: characters
 * Return: 1 on success
 **/
int _putchar(int c)
{
char buffer[OUTPUT_BUF_SIZE];
int index = 0;
while (c != '\0')
{
buffer[index] = c;
index++;
}
write (1, buffer, index);
return(1);
}
