#include "main.h"
/**
 * _islower - prints the alphabets in lowercase
 * @alphabet: number or letter
 * Return: 0 or 1
 */

int  _islower(int alphabet)
{
	if (alphabet >= 'a' && alphabet  <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
