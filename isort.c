#include <stdio.h>

#define LEN 50

// question 1- shifted

void shift_element(int* arr, int i)
{
    int temp = *arr;
    for (int j = 1; j<i; j++)
    {
        int temp2 = *(arr+j+1);
        *(arr+j+1) = temp;
        temp = temp2;
    }
    *(arr+i) = temp;
}

// question 2- insertion sort
void insertion_sort(int* arr , int len)
{
    int key=0;
    int j=0;
    for (int i=1; i<len; i++)
    {
        key = *(arr+i);
        j = i-1;
        while (j>=0 && (*(arr+j) > key))
        {
            *(arr+j+1) = *(arr+j);
            j=j-1;
        }
        *(arr+j+1) = key;
    }
}

int main()
{
    int arr[LEN];
    for(int i=0; i<LEN; i++)
    {
        scanf("%d", arr+i);
    }

    insertion_sort(arr, LEN);

    for(int i=0; i<LEN; i++)
    {
        printf("%d", *(arr+i));
        if (i != LEN-1)
        {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}