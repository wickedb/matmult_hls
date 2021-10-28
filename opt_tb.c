#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef int32_t int32;

int main(void)
{
	int32 i, j;
	int SIZE = 100;
	int32 array1[SIZE][SIZE];
	int32 array2[SIZE][SIZE];
    int32 output[SIZE][SIZE];
	//initialize arrays with inputs
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			array1[i][j] = rand() % 100 + 1;
			array2[i][j] = 2;
		}
	}
	//initialize output array with 0s
	for(i=0; i<SIZE; i++)
		{
			for(j=0; j<SIZE; j++)
			{
				output[i][j] = 0;
			}
		}
	//Matrix multiplication
	matmul_opt(array1, array2, output);

	for(i=0; i<SIZE; i++)
			{
				for(j=0; j<SIZE; j++)
				{
					printf("%d ", output[i][j]);
				}
				printf("\n");
			}

return 0;
}

