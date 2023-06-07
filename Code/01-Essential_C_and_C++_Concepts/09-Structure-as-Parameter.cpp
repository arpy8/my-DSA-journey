#include <iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

//pass by value - actual value cannot be changed
void fun1(Rectangle r1)
{
    r1.length = 20, r1.breadth=10;
    cout << "Length : " << r1.length << endl;
    cout << "Breadth : " << r1.breadth << endl << endl;
}

//pass by address - actual value can be changed
void fun2(Rectangle *r2)
{
    r2->length = 40, r2->breadth = 20;
    cout << "Length : " << r2->length << endl;
    cout << "Breadth : " << r2->breadth << endl << endl;
}

//pass by reference - actual value can be changed
void fun3(Rectangle &r1)
{
    r1.length = 80, r1.breadth = 40;
    cout << "Length : " << r1.length << endl;
    cout << "Breadth : " << r1.breadth << endl << endl;
}

struct Rectangle* fun4() 
{
    struct Rectangle* p;
    p = new Rectangle; // <- declaring in cpp 
    //p = (struct Rectangle*)malloc(sizeof(struct Rectangle));    <- declaring in c 

    p->length = 160;
    p->breadth = 80;
    
    return p;
}

int main()
{
    cout << "Structure as parameter\n\n";
    Rectangle r = { 10,5 };
    printf("Lenghth : %d\nBreadth : %d\n\n", r.length, r.breadth);

    //pass by value
    cout << "<PASS BY VALUE>" << endl;
    fun1(r);
    
    //pass by address
    cout << "<PASS BY ADDRESS>" << endl;
    fun2(&r);
    
    //pass by reference
    cout << "<PASS BY REFERENCE>" << endl;
    fun3(r);

    Rectangle* ptr = fun4();
    cout << "Length : " << ptr->length << endl;
    cout << "Breadth : " << ptr->breadth << endl << endl;

}
