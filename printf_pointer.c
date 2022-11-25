#include "main.h"

/**
 * printf_pointer - points to number
 * @val: arguments
 * Return: counter
 */
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
