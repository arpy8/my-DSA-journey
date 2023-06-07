#include <iostream>
using namespace std;

int main()
{
    std::cout << "Reference variables\n";
    int a = 10;
    int& r = a;
    
    cout << a << endl;
    cout << r++ << endl;
    cout << a << endl;
    cout << r << endl;
}
