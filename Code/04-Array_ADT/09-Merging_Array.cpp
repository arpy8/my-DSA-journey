#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr)
{
	int i;
	for (i = 0; i < arr.length; i++)
		printf("%d ", arr.A[i]);
}

int isSorted(struct Array arr)
{
	int i;
	for (i = 0; i < arr.length - 1; i++)
	{
		if (arr.A[i] > arr.A[i + 1])
			return 0;
	}
	return 1;
}

Array* Merge(Array *arr1, Array *arr2)
{
	int i, j, k;
	i =  j = k = 0;	
	Array* arr3 = (struct Array*)malloc(sizeof(struct Array));

	while (i < arr1->length && j < arr2->length)
	{
		if (arr1->A[i] < arr2->A[j])
			arr3->A[k++] = arr1->A[i++];
		else arr3->A[k++] = arr2->A[j++];
	}
	for (; i < arr1->length; i++)
		arr3->A[k++] = arr1->A[i];
	for (; j < arr2->length; j++)
		arr3->A[k++] = arr2->A[j];
	arr3->length = arr1->length + arr2->length;
	arr3->size = 10;
	
	return arr3;
}

int main()
{
	struct Array arr1 = { {2,3,9,16,18},10,5 };
	struct Array arr2 = { {8,10,12,15,17},10,5 };
	struct Array* arr3;

	arr3 = Merge(&arr1, &arr2);
	Display(*arr3);

	return 0;
}
