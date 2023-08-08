#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main51()
{
    int arr[4] = { 0 };
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j = 1;
    int max = arr[0];

    for (j = 1; j < 4; j++)
    {
        if (arr[j] > max)
            max = arr[j];

    }

    printf("%d\n", max);
    return 0;
}