#include <iostream>
using namespace std;

class Rectangle
{
private: 
    int length, breadth;
public:
    Rectangle() { length = 0, breadth = 0; }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int getLength() { return length; }
    int getBreadth() { return breadth; }
    
    void setLength(int l) { length = l; }
    void setBreadth(int b) { breadth = b; }
    
    int area() { return length * breadth; }
    int perimeter() { return 2*(length + breadth); }

    ~Rectangle() 
    {
        cout << "Destructor of rectangle";
    }
};

int main()
{
    Rectangle r(10, 5);
    cout << "Area : " << r.area() << "sq. units." << endl;
    cout << "Perimeter : " << r.perimeter() << "units" << endl;
}

