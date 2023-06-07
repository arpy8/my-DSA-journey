#include <iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

void main()
{
    cout << "Pointer to Structure\n";
    Rectangle r = { 10,5 };
    struct Rectangle* p=&r;
    
    //accessing length and breadth using dot operator
    (*p).length = 4;
    (*p).breadth = 2;

    cout << p->length << endl;
    cout << p->breadth << endl << endl;

    //another method to access struct values using arrow operator
    p->length = 15;
    p->breadth = 10;

    cout << p->length << endl;
    cout << p->breadth << endl << endl;

    //declaring an object in heap
    Rectangle *q;
    q = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    q->length = 15;
    q->breadth = 10;
    cout << q->length << endl;
    cout << q->breadth << endl;

}
