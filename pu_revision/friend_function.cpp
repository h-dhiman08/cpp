// this program demonstrate the use of the friend function in C++
// for further details, please refer to the PU Revision Notes

#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    string name;
    int roll;
public:
    void set();
    friend void show(Student); // friend function declared
};

void Student::set(){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
}

void show(Student s){ // friend function initialized
    cout << "Name: " << s.name << endl;
    cout << "Roll number: " << s.roll << endl;
}
int main(){
    Student s1;
    s1.set();

    show(s1); // pass by value
    return 0;
}