#include<stdio.h>
#include<stdlib.h>
#include<iostream>
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

void DuplicateElement(struct Array arr)
{
	int lastDuplicate = 0;
	for (int i = 0; i < arr.length - 1; i++)
	{
		if (arr.A[i] == arr.A[i + 1] && arr.A[i] != lastDuplicate)
		{
			printf("%d\n", arr.A[i]);
			lastDuplicate = arr.A[i];
		}
	}
}

int main()
{
	struct Array arr1 = { {4,6,7,8,8,11,12,13,14,14,19,19},15,12 };
	DuplicateElement(arr1);
	return 0;
}