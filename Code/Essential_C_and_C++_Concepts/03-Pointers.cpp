#include <iostream>

int main()
{
    int a = 10;
    //declaration
    int* p;
    //initailzation
    p = &a;

    printf("Pointers\n");
    //dereferencing
    printf("%d\n\n", *p);

    //declaring an array using pointers
    int c[5] = { 10,20,30,40,50 };
    p = c;

    //accessing each element 
    for (int i=0;i<5;i++) 
    { 
        printf("%d\n", c[i]);
    }
}
