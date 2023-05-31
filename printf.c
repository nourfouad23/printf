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
int result;

va_list args;
va_start(args, format);
result = vprintf(format, args);
 
va_end(args);
    
return (result);
}
