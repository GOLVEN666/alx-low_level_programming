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
	int sum = 0;
	int r;
	time_t t;

	srand((unsigned int) time(&t)); // Seed random number generator

	while (sum < 2772) {
		r = rand() % 128; // Generate a random number between 0 and 127
		putchar(r);
		sum += r;
	}
	putchar(2772 - sum); // Add remaining character to sum

	return 0;
}

