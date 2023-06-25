#include <iostream>
using namespace std;


int main()
{

	// Different ways to initialize an array
	int A[10];
	int B[10] = {0};
	int C[10] = {1,2,3,4,5,6,7,8,9,10};
	int D[10] = {2, 4};
	int E[] = {10,20,30,40,50,60,70,80};

	// Traversing through array
	for (int i=0;i<10;i++)
	{
		cout << C[i] << endl;
	}
	cout << endl;
	
	// Traversing throught the addresses of all the values 
	for (int i=0;i<10;i++)
	{
		cout << &C[i] << endl;
	}

}

