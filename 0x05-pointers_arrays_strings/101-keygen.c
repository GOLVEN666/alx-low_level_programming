#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 * 
 */

int main(void)
{
	srand(time(NULL)); // Seed random number generator

	int sum = 0;
	while (sum < 2772) {
		int r = rand() % 128; // Generate a random number between 0 and 127
		putchar(r);
		 sum += r;
	}
	putchar(2772 - sum); // Add remaining character to sum

	return 0;
}
