#include "main.h"
/**
 * _print_reve_recursion - prints a string in reverse
 * @s: the string to be printed
 */
void_print_revrecursion(char *s);
{
	if(*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
