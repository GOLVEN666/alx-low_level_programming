/*
*File:100-print_comb3.c
*Auth:[GOLVEN666]
*Desc:Printsallpossibledifferentcombinationsoftwodigits.
*/

#include<stdio.h>

/**main-Entrypoint.Printsallpossibledifferentcombinationsoftwodigits.
*Return:0onsuccess.
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);

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
