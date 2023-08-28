#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 *
 * @a: pointer to the matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i ++)
	{
		int index_diag1 = i * size + i;
		int index_diag2 = i * size + (size - 1 - i);

		sum1 += a[index_diag1];
		sum2 += a[index_diag2];
	}
	printf("%d, %d\n", sum1, sum2);
}
