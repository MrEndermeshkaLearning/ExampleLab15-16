#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define n1 5
#define n11 4

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(nullptr));
	int mas[n11][n11];
	int a, b;
	printf("введите а и б, a<b\n");
	scanf_s("%d%d", &a, &b);
	if (a > b)
	{
		printf("ошибка повторите попытку\n");
		scanf_s("%d %d", &a, &b);
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n1; j++)
		{
			mas[i][j] = a - rand() % (b - a);
			printf("%4d", mas[i][j]);
		}
		printf("\n");
	}
	int sum = 0;
	for (int i = 0; i < n11 / 2; i++)
		for (int j = 0; j < n11 / 2; j++)
			sum += mas[i][j];

	for (int i = n11 / 2; i < -1; i--)
		for (int j = n11; j < n11 / 2; j--)
			sum += mas[i][j];

	for (int i = n11; i < n11 / 2; i--)
		for (int j = n11; j < n11 / 2; j--)
			sum += mas[i][j];
	for (int i = n11 / 2; i < n11; i++)
		for (int j = n11 / 2; j < n11; j++)
			sum += mas[i][j];

	printf("sum двух треугольников матрицы = %d", sum);

}
