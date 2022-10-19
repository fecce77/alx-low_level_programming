#include "main.h"
/**
 * print_last_digit - last digit
 * @value: value
 * Return: 0 or 1
 */

int print_last_digit(int value)
{
	int remain = value % 10;

	if (remain < 0)
	{
		remain = -(remain);
		_putchar(remain + '0');
		return (remain);
	}
	else
	{
		_putchar(remain + '0');
		return (remain);
	}
	return (0);
}
