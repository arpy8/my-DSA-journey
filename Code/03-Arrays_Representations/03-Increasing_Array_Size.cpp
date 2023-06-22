#include <iostream>
using namespace std;

int main()
{
    cout << "Increasing size of an array\n";

    int *p, *q;
    int i;
    p = new int[5];
    p[0] = 10; p[1] = 20; p[2] = 30; p[3] =40; p[4] = 50;


    q = new int[10];

    //copying elements of p in q
    for (i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    //deleting previous p array to avoid memory leak
    delete []p;

    // assigning q as p
    p = q; 
    q = NULL;
    
    // checking the new resized array p
    for (i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}
