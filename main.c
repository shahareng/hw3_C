#include "isort.h"
#include <stdio.h>

#define LEN 50

int main()
{
    int arr[len];
    for(int i=0; i<LEN; i++)
    {
        scanf("%d", arr+i);
    }

    insertion_sort(arr, LEN);

    for(int i=0; i<LEN; i++)
    {
        printf("%d", *(arr+i);
        if (i != LEN-1)
        {
            printf(",");
        }
    }
}