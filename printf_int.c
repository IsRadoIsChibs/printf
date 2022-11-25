#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	
	int n = va_arg(args, int);
	
	int num, last = n % 10, digit, exp = 1;
	
	int  i = 1;
	
	n = n / 10;
	
	num = n;
	
	if (last < 0)
		
