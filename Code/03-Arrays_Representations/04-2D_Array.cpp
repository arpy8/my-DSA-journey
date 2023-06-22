#include <iostream>
using namespace std;

int main()
{
    cout << " 2D Arrays!\n\n";

    //Simple way
    int A[3][4] = { {1,2,3,4},{6,3,2,5},{8,3,4,2} };
    // traversing through the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    // Declaring array in heap memory
    int* B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    // Declaring array in heap memory using a double pointer
    int** C;

    C    = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
    // traversing through the array (would print garbage values since no values are given)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
