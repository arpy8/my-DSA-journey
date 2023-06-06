#include <iostream>
using namespace std;

void fun(int *A, int n)
{
    for(int i=0;i<n;i++)
        cout << A[i] << " ";
    cout << endl;
}

//creating an array using a function
int* fun2(int size)
{
    int* p = new int[size];
    p = new int[size];

    for (int i = 0; i < size; i++)
        p[i] = i + 1;
    return p;
}

int main()
{
    cout << "Function as parameter\n\n";
    int A[] = { 10,20,30,40,50,60,70,80,90,100 };
    int n = 10;

    fun(A, 10);
    for (int x : A) cout << x << " ";
    cout << endl;


    //function returning an array
    int* ptr, sz=5;
    ptr = fun2(sz);
    for (int i = 0; i < sz; i++)
        cout << ptr[i] << endl;
    
    return 0;

}
