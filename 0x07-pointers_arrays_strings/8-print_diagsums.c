#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
* print_diagsums - function prints the sum of the two diagonals
* of a square matrix of integers
* @a: is matrix of mxn
* @size:: size of the matrix
* Return: returns nothing
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, index;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
