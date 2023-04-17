#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int A[] = { 3, 5, 1, 4, 9, 2, 6, 10, 8, 7 };
	int i, n;
	int max, min, max_index, min_index;
	max = A[0];
	min = A[0];
	max_index = 0;
	min_index = 0;
	n = 10;
	printf("入力値");
	for (i = 0; i <= n - 1; i++) printf("A[%d]=%d", i, A[i]);
	printf("\n");
	for (i = 1; i <= n - 1; i++)
	{
		if (A[i] > max) {
			max = A[i]; max_index = i;
		}
		if (A[i] < min) {
			min = A[i]; min_index = i;
		}
	}
	printf("max=%d max_index=%d min=%d min_index=%d\n", max, max_index, min, min_index);
}
