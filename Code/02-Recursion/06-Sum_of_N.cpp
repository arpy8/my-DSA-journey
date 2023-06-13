#include <iostream>
using namespace std;


//using recursion
int sum1(int n)
{
    if (n == 0) 
    {
        return 0;
    }
    return sum1(n - 1) + n;

}

//using formula
int sum2(int n)
{
    return n * (n + 1) / 2;
}

//using for loop
int sum3(int n)
{
    int i, s=0;
    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    return s;
}


int main()
{
    cout << "Sum of n natural numbers" << endl << endl;

    //using recursion
    cout << "Using recursion : " << sum1(30) << endl;
    
    //using formula
    cout << "Using formula : " << sum2(30) << endl;

    //using for loop
    cout << "Using for loop : " << sum3(30) << endl;

    return 0;
}
