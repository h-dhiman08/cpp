// Program demonstrate the concept of inline functions in C++
#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int roll;
public:
    void get(); // as this function is explicitly defined but still we made it inline
    void display(); // same, it was reshaped as the inline function otherwise it will be explicit function of the class by default
};

// / The 'inline' keyword suggests the compiler to insert the function's code directly 
// // at the call site instead of performing a regular function call

inline void Student::get(){ // made inline using keyword
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student roll_no: ";
    cin >> roll;
}

inline void Student::display(){
    cout << "Name: " << name << endl;
    cout << "Roll no: " << roll << endl;
}

int main(){
    Student s1;
    s1.get(); // program control remains in the main function
    s1.display(); // logic of member functions is dropper here 
    return 0;
}