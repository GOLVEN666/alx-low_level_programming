#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        int digit1 = i / 10;
        int digit2 = i % 10;

        if (digit1 < digit2)
        {
            printf("%d%d", digit1, digit2);

            if (i < 89)
            {
                printf(", ");
            }
        }
    }

    printf("\n");
    return 0;
}

