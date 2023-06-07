#include <iostream>
using namespace std;

auto add(int x, int y){ return x + y; }

int main()
{
    cout << "Functions\n";
    int num1 = 10, num2 = 20;
    printf("Sum is %d", add(num1, num2));
}


