#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 100
#define M 100

int main()
{
	srand(time(NULL));
	int arr[N][M];
	int UserN, UserM, a, b;
	
	while (true)
	{
		printf("Enter N and M by queue, it should be less than 100\n");
		scanf_s("%d%d", &UserN, &UserM);
		while (true)
		{
			printf("input A and B by queue where A<B\n");
			scanf_s("%d%d", &a, &b);
			if(a<b)
			{
				break;
			}
		}
		if(UserN<N&&UserM<M)
			break;
	}
	int sumOfRow = 0, MaxSum = INT_MIN, indexI;
	for(int i=0; i<UserN;i++)
	{//подзадание вариант 15
		sumOfRow = 0;
		for(int j=0; j<UserM;j++)
		{
			arr[i][j] = rand() % (a - b) + a;
			printf("%4d", arr[i][j]);
			//подзадание вариант 15
			sumOfRow += arr[i][j];
			
		}
		printf("\n");
		//подзадание вариант 15
		if(sumOfRow>MaxSum)
		{
			MaxSum = sumOfRow;
			indexI = i;
		}
	}
	printf("A=%d, B=%d, n=%d, m=%d, N=%d, M=%d\n", a, b, UserN, UserM, N, M);
	printf("MaxSumOfElementStringIndex = %d", indexI);
}