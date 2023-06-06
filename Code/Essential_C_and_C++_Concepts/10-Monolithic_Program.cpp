#include <iostream>
using namespace std;

//monolithic program - everything is written under the main function

int main()
{
    cout << "Rectangle area calculator - monolithic approach\n\n";
 
    int length=0, breadth = 0;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
 
    int area = length * breadth;
    int peri = 2*(length + breadth);

    printf("Area : %d sq. units\nPerimeter : %d units\n\n", area, peri);
}
