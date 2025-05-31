#include<iostream>

using namespace std;

class Test{
private:
    mutable int a; // mutable allows a to be modified even in a const member function
    int b;
public:
    void get(int,int);
    void display() const;
};

void Test::get(int x, int y)
{
    a = x;
    b = y;
}

void Test::display() const
{
    a += 10; // This line is valid because a is declared as mutable
    // b += 20; // This line would cause a compilation error because b is not mutable 
    cout << "a = " << a<< endl;
    cout << "b = " << b << endl;
}
int main()
{
    Test t1;
    t1.get(1, 2);
    t1.display();
    return 0;
}