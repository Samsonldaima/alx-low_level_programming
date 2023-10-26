#include "main.h"
/**
 * _puts recursion - function like puts();
 * @s: input
 * Return: Always 0(success)
 */
void _puts_recursion(char *s);
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(S+1);
	}
	else
		_putchar('\n');
}
