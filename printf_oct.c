#include "main.h"

/**
 * printf_oct - prints an octal number
 * @val: arguments
 * Return: counter
 */
int printf_oct(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

