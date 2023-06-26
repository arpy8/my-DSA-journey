#include <iostream>
using namespace std;

struct Array
{
    int A[20];
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

// using iteration
int BinarySearch1(Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}


// using recursion
int BinarySearch2(int a[], int l, int h, int key)
{
    int mid = 0;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return BinarySearch2(a, l, mid - 1, key);
        else
            return BinarySearch2(a, mid + 1, h, key);
    }
    return -1;
}


int main()
{
    struct Array arr1 = { {2,3,9,16,18,21,28,32,35},10,9 };
    int arr2[10] = { 2,3,9,16,18,21,28,32,35 };
    printf("Using iteration : %d\nUsing recursion : %d", BinarySearch1(arr1, 16), BinarySearch2(arr1.A, 0, arr.length, 16));
    Display(arr1);
    return 0;
}
