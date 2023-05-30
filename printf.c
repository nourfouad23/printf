#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _printf - 2 dimen arr func
 *@format: passed param
 * Return: return value.
 */

int _printf(const char *format, ...)
{
int i;
int result = 0;

for (i = 0; format[i] != '\0'; i++)
{
putchar(format[i]);
result += 1; 
}
return (result);
}
