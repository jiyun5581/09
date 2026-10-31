#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;

    int grade[SIZE];
    int score[SIZE];

    for (i = 0; i < SIZE; i++)
        grade[i] = rand() % 100;

    for (i = 0; i < SIZE; i++)     
        score[i] = grade[i];

    for (i = 0; i < SIZE; i++)
        printf("score[%d] = %d\n", i, score[i]);

    printf("\n");

    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 0, 4, 9};  
    int flag_same = 1;

    for (i = 0; i < SIZE; i++)
    {
        if (a[i] != b[i])
        {
            printf("index %d : a[%d] = %d, b[%d] = %d (다름)\n",
                   i, i, a[i], i, b[i]);
            flag_same = 0;
        }
    }

    if (flag_same)
        printf("배열은 같은 값을 가집니다.\n");
    else
        printf("배열은 다른 값을 가집니다.\n");

    return 0;
}