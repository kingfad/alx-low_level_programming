#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
README.md int n;

README.md srand(time(0));
README.md n = rand() - RAND_MAX / 2;
README.md if (n > 0)
README.md README.md printf("%i is positive\n", n);
README.md else if (n < 0)
README.md README.md printf("%i is negative\n", n);
README.md else
README.md README.md printf("%i is zero\n", n);

README.md return (0);
}
