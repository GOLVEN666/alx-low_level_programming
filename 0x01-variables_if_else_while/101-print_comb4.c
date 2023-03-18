#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2, num3;

    for (int i = 0; i <= 999; i++)
    {
        num1 = i / 100;         // Get first digit
        num2 = (i / 10) % 10;   // Get second digit
        num3 = i % 10;          // Get third digit

        if (num1 < num2 && num2 < num3)
        {
            printf("%d%d%d", num1, num2, num3);

            if (i != 789)
            {
                printf(", ");
            }
        }
    }

    printf("\n");

    return (0);
}
