// this program demonstrates how to handle functions with the same name in different scopes
#include<iostream>

using namespace std;

class Test{
public:
    void display(){
        cout << "Display from Test class" << endl;
    }
};

void display(){
    cout << "Display from global function" << endl;
}
int main(){
    Test obj;   
    obj.display(); // Calls the member function of Test class

    display();     // Calls the global function

    // there is no ambiguity here because the member function and the global function have different scopes
    return 0;
}