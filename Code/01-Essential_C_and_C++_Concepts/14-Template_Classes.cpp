#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    //template class 
    Arithmetic<int> a(10,5);
    cout << a.add() << endl;

    Arithmetic<float> b(10.962, 5.19);
    cout << b.sub() << endl;
}

