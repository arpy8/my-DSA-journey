#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0) 
    {
        printf("%d ", n);
        fun(n - 1);
        fun(n - 1);
    }
}

int main()
{
    cout << "Tree recursion!\n";
    fun(43);
    return 0;
}
