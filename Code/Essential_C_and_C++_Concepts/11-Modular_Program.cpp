#include <iostream>
using namespace std;

int area(int length, int breadth)
{
    return length * breadth;
}

int perimeter(int length, int breadth)
{
    return 2 * (length + breadth);
}

int main()
{
    cout << "Rectangle area calculator - modular approach\n\n";

    int length = 0, breadth = 0;

    cout << "Enter length : ";
    cin >> length;
    cout << "Enter breadth : ";
    cin >> breadth;

    int a = area(length, breadth);
    int p = perimeter(length, breadth);

    printf("Area : %d sq. units\nPerimeter : %d units\n\n", a, p);
}
