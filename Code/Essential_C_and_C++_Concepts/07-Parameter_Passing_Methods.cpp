#include <iostream>
using namespace std;


// call by value 
void cbv(int a)
{
    cout << ++a << endl;
}

//call by address
void cba(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;  
}

//call by reference 
void cbr(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
    

int main()
{
    //call by value - actual values won't change
    int x = 10;
    cbv(x);
    cout << x << endl << endl;

    //call by address - actual values will change
    int num1 = 10, num2 = 5;
    cba(&num1, &num2);
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl << endl;

    //call by reference - actual values will change
    int p = 10, q = 5;
    cbr(p, q);
    cout << "num1: " << p << endl;
    cout << "num2: " << q << endl;

    return 0;
}

