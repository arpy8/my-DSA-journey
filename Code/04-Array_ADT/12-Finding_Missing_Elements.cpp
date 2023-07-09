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

void MissingElementFinder(struct Array arr)
{
	int i, diff;
	diff = arr.A[0];
	for (i = 1; i < arr.length - 1; i++)
	{
		if (arr.A[i] - i != diff)
			{
				cout << i+diff << endl;
				diff++;
			}
	}
}

int main()
{
	struct Array arr1 = { {4,6,7,8,10,11,12,13,14,16,18,19},15,12 };
	MissingElementFinder(arr1);
	return 0;
}
