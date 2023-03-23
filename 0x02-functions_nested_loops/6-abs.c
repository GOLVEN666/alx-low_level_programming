#include "main.h"
/**
 * main - Entry point
 * Description :compute absolute value of the interger
 * Return: Always (0)(Success)
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
