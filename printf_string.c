#include "main.h"

/**
 * printf_string - print a string
 * @val: argument
 * Return: the length of the string
 */
int printf_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
