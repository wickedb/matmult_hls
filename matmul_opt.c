#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef int32_t int32;

const int SIZE = 100;

void matmul_opt(int32 array1[SIZE][SIZE],int32 array2[SIZE][SIZE], int32 output[SIZE][SIZE])
{

	int32 i, j, k, out;

#pragma HLS array_reshape variable=array1 complete dim=2
#pragma HLS array_reshape variable=array2 complete dim=1

//Matrix multiplication
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			#pragma HLS unroll
			out = 0;
			output[i][j] = 0;
			for(k=0; k<SIZE; k++)
			{
				out += array1[i][k] * array2[k][j];
			}
			output[i][j] = out;
		}
	}
}
