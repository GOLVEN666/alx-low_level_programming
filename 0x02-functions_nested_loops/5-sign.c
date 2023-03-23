#include "main.h"
/**
 * main - Entry point
 * Description :Print_sign - print sign for numbers
 * Return: return 1 for positive and -1 0r 0 for anything else
 */
	int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
			else if (n < 0)
			{
				_putchar(45);
				return (-1);
			}
	else
	{
		_putchar(48);
		return (0);
	}
}

