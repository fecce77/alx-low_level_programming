#include "main.h"
/**
 * print_sign - prints sign of value
 * @value: ascii value
 * Return: 0 or 1
 */

int print_sign(int value)
{
	if (value > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (value == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
