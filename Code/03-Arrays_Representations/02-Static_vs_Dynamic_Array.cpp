#include <iostream>
using namespace std;

int main()
{
    // declaring a static array - stored in stack memory 
    int A[] = { 0,2,4,6,8 };
    int* p;

    // declaring a dynamic array - stored in heap memory
    p = new int[5];
    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    p[3] = 7;
    p[4] = 9;

    cout << "Static Array stored in stack memory:\n";
    for (int i=0;i<5;i++)
    {
        printf("%d ", A[i]);
    }
    
    cout << endl << endl;
    cout << "Dynamic Array stored in heap memory:\n";
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    return 0;
}
