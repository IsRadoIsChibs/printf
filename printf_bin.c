#include "main.h"

/**
 * printf_bin - prints a binary number
 * @val: arguments
 * Return: 1
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;
	
	for (i = 0; i < 32; i++)
