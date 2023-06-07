#include <iostream>
using namespace std;

//Modular program

class Rectangle 
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area() 
    {
        return length * breadth;
    }
    
    int perimeter() 
    {
        return 2* (length + breadth);
    }

};


int main()
{
    cout << "Rectangle area calculator - modular approach\n\n";
    int l, b;

    cout << "Enter length : ";
    cin >> l;
    cout << "Enter breadth : ";
    cin >> b;
    
    Rectangle r(l,b);
    
    printf("Area : %d sq. units\nPerimeter : %d units\n", r.area(), r.perimeter());

}
