#include<iostream>
using namespace std;

class Number{
public:
    int n;
    // defualt contstructor
    Number(){
        n = 0;
    } 

    // Parameterized constructor
    Number(int set_n){
        n = set_n; 
    }

    // operator overloading function
    Number operator+(const Number &obj){
        return (this->n + obj.n); // this pointer indicate to the left operand & obj.n will be indicates to the right operand
    }
    
};

int main(){
    Number a(10);
    Number b(5);

    Number c;

    c = a.operator+(b); // operator+() function is invoked.
    // another way to write above line is:

    c = a + b; // this is also true

    cout << "Sum: " << c.n << endl;
    return 0;
}