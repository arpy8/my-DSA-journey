#include <iostream>

int main()
{
    //declaration
    int A[5];
    int B[5] = { 10,20,30,40,50 };
    
    //accessing each element
    int i;
    for (i=0;i<5;i++) 
    {
        printf("%d", B[i]);
        std::cout << std::endl;
    }
}
