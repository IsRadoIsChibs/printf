#include "main.h"

/**
 * printf_rev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 * Return: the string
 */
int printf_rev(va_list args)
{
	char *s = va_arg(args, char*);
	int i;
	int j = 0;

