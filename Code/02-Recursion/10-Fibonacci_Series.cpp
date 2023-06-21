#include <iostream>
using namespace std;

int fib1(int n)
{
    int t0 = 0, t1 = 1, s = 0, i ;
    if (n<= 1) return n;

    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;    
        t0 = t1;
        t1 = s;
    }
    return s;
}

int fib2(int n)
{
    if (n <= 1) return n;
    return fib2(n - 2) + fib2(n - 1);
}

int memo[20];
int fib3(int n)
{
    if (n <= 1)
    {
        memo[n] = n;
        return n;
    }
    else
    {
        if (memo[n - 2] == -1)
            memo[n - 2] = fib3(n - 2);
        if (memo[n - 1] == -1)
            memo[n - 1] = fib3(n - 1);
        memo[n] = memo[n - 2] + memo[n - 1];
        return memo[n - 2] + memo[n - 1];
    }
}


int main()
{
    std::cout << "Fibonacci Series!\n\n";
    cout << "Using iteration : " << fib1(10) << endl;
    cout << "Using recursion (bad approach) : " << fib2(10) << endl;
    
    int i;
    for (i = 0; i < 10; i++)
        memo[i] = -1;

    cout << "Using recursion (using memorization) : " << fib3(10) << endl;
    return 0;

}
;
