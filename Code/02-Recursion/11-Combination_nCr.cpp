#include <iostream>
using namespace std;

int  fact(int n)
{
    if (n == 0) return 1;
    return fact(n - 1) * n;
}

int ncr1(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r)* fact(n - r);

    return num / den;
}

int ncr2(int n, int r)
{
    if (r == n || r == 0)
        return 1;
    return ncr2(n - 1, r - 1) + ncr2(n - 1, r);
}


int main()
{
    cout << "Combination using recursion!\n\n";
    cout << "Using factorial formula :\n" << ncr1(4, 2) << endl << endl;
    cout << "Using recursion (keeping pascal's triangle in mind) :\n" << ncr2(4, 2) << endl << endl << endl;
}
