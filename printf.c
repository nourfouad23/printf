#include <limits.h>
#include <stdio.h>
#include "main.h"


/**
 * _printf - 2 dimen arr func
 *@format: passed param
 * Return: return value.
 */

int _printf(const char *format, ...)
{
int i, result;

for (i = 0; format[i] != '\0'; i++)
{
putchar(format[i]);
result =  malloc((format[i] * sizeof(char *)) + 1);
}
return result;
}
