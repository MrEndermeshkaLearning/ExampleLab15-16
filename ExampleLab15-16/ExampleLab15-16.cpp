#include <stdio.h>
#define ArrayRowLenth 15
#define  ArrayColumnLenth 8
int main() {
    int negativeCountOfElement = 0;
    //Генерируем масива по заданым характеристикам
    int arr[ArrayRowLenth][ArrayColumnLenth];
    for (int i = 0; i < ArrayRowLenth; i++) {
        for (int j = 0; j < ArrayColumnLenth; j++) {
            arr[i][j] = 2 * i - (i + j);
            //спецификатор %4d чтобы было красиво, можно просто %d
            printf(" %4d", arr[i][j]);
        	//подзадание
			// найти кол-во негативных елементов 
            if (arr[i][j] < 0)
                negativeCountOfElement++;
        }
        //начало новой строки в консоли соответсвует новой строке в маисве
        printf("\n");
    }
    printf("Count of NegativeElement = %d", negativeCountOfElement);
}
