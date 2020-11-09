#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ArrayRowLenth 5
#define  ArrayColumnLenth 5

int main()
{
	//тут задания слишком простые поэтому покажу только генерацию,
	// 4) добуток по головний диагонали
	// и
	// 6) сумму под диагональю
	double arr[ArrayRowLenth][ArrayColumnLenth];
	double sumUnderDiagonal = 0;
	double multyplyDiagonalElemnt = 1;
	srand(time(NULL));
	for(int i=0;i<ArrayRowLenth; i++)
	{
		for(int j=0; j<ArrayColumnLenth;j++)
		{
			//цыфры для генерации с головы
			arr[i][j] = (rand() % (-1202 - 1829) + -1202) / ((double)100);
			//%8 чтобы было красиво .2 по заданию и lf потому что дабл
			printf("%8.2lf", arr[i][j]);
			//4
			if(i == j)
			{
				multyplyDiagonalElemnt *= arr[i][j];
			}
			//6
			if(i<j)
			{
				sumUnderDiagonal += arr[i][j];
			}
		}
		printf("\n");
	}
	printf("SumUnderDiagonal = %lf\nmultyplyDiagonalElement =%lf", sumUnderDiagonal, multyplyDiagonalElemnt);
}