#include<iostream>
using namespace std;

class A{
public:
    int a;
};


class B : virtual public A {

};

class C : virtual public A {

};

class D : public B, public C {
public:
    void display() {
        cout << "Value of a: " << a << endl; // Accessing 'a' from the virtual base class A
    }
};
int main() {
    
    return 0;
}