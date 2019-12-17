#include "isort.h"

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
    *(arr+k) = temp;
}

// question 2- insertion sort
void insertion_sort(int* arr , int len)
{
    int key =0;
    int j=0;
    for (int i=1; i<len; i++)
    {
        key = *(arr+i);
        j = i-1;
        while (j>=0 && *(arr+j) > *(arr+j)>key)
        {
            *(arr+j+1) = *(arr+j);
            j=j-1;
        }
        *(arr+j+1) = key;
    }
}