#include "main.h"
/**
 * _puts_recursion - prints a string in reverse
 * s: pointer block of memory to fill
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);

}
