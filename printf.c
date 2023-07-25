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
int i, j;
int integer;
char character;
double decimal;
char *arrayname;
unsigned int value;

va_list args;
va_start(args, format);


for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'd':
{
integer = va_arg(args, int);
result += printf("%d", integer);
break;
}
case 'i':
{
integer = va_arg(args, int);
result += printf("%d", integer);
break;
}
case 'f':
{
decimal = va_arg(args, double);
result += printf("%f", decimal);
break;
}
case 's':
{
arrayname = va_arg(args, char*);
result += printf("%s", arrayname);
break;
}
case 'c':
{
character = va_arg(args, int);
result += printf("%c", character);
break;
}
case 'u':
{
printf("%u", va_arg(args, unsigned int));
break;
}
case 'b':
{
value = va_arg(args, unsigned int);
for (j = 6; j >= 0; j--)
{
putchar((value & (1 << j)) ? '1' : '0');
}
break;
}
case 'p':
{
printf("%p", va_arg(args, void *));
break;
}
case '+':
{
printf("+%d", va_arg(args, int));
break;
}
case ' ':
{
printf(" %d", va_arg(args, int));
break;
}
case '#':
{
printf("#%d", va_arg(args, int));
break;
}
case 'l':
{
printf("%ld", va_arg(args, long));
break;
}
case 'h':
{
printf("%hd", va_arg(args, int));
break;
}
case 'o':
{
value = va_arg(args, unsigned int);
printf("%o", value);
break;
}
case 'x':
{
value = va_arg(args, unsigned int);
printf("%x", value);
break;
}
case 'X':
{
value = va_arg(args, unsigned int);
printf("%X", value);
break;
}
default:
{
result += printf("%%%c", format[i]);
break;
}
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