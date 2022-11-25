#include "main.h"

/**
 * printf_exclusive_string - print exclusives string
 * @val: argument
 * Return: the length of the string
 */
int printf_exclusive_string(va_list val)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";

