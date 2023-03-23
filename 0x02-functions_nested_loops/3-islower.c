#include "main.h"
/**
 * main - Entry point
 * Description : '_islower this returns if character is lowercase '
 * Return: Always (0)(Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
