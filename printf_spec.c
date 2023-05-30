#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - 2 dimen arr func
 *@format: passed param
 * Return: return value.
 */

int _printf(const char *format, ...)
{
int result = 0;
int i, input;

va_list args;
va_start(args, format);


for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == 'd' || format[i] == 'i')
{
input = va_arg(args, int);
result += printf("%d", input);
}
else
{
result += printf("%%%c", format[i]);
}
}
else
{
putchar(format[i]);
result++;
}
}
va_end(args);

return (result);
}
