/*
 * File: 100-print_comb3.c
 * Auth: [GOLVEN666]
 * Desc: Prints all possible different combinations of two digits.
 */

#include <stdio.h>

/**
 * main - Entry point. Prints all possible different combinations of two digits.
 * Return: 0 on success.
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 <= 9; num1++)
    {
        for (num2 = num1 + 1; num2 <= 9; num2++)
        {
            putchar(num1 + '0');
            putchar(num2 + '0');

            if (!(num1 == 8 && num2 == 9))
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}

