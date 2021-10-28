#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

const int SIZE = 100;

typedef int32_t int32;

void matmul(int32 array1[SIZE][SIZE],int32 array2[SIZE][SIZE], int32 output[SIZE][SIZE])
{

	int32 i, j, k;

//Matrix multiplication
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			for(k=0; k<SIZE; k++)
			{
				output[i][j] += array1[i][k] * array2[k][j];
			}
		}

	}


}
