#include<stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Get(Array arr, int index) 
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
}

void Set(Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(Array arr)
{
    int max = arr.A[0];
    for (int i=1;i<arr.length;i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int Min(Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min= arr.A[i];
    }
    return min;
}


int Sum(Array arr)
{
    int total = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        total += arr.A[i];
    }
    return total;
}

float Avg(Array arr)
{
    int total = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        total += arr.A[i];
    }
    return total/arr.length;
}

int main()
{
    struct Array arr1 = { {2,3,9,16,18,21,28,32,35},10,9 };

    printf("Get : %d", Get(arr1, 2));
    printf("\nMax : %d", Max(arr1));
    printf("\nMin : %d", Min(arr1));
    printf("\nSum : %d", Sum(arr1));
    printf("\nAvg : %f", Avg(arr1));

    return 0;
}