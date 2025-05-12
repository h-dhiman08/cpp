#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int roll;
public:
    void get();
    void display();
};

inline void Student::get(){
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student roll_no: ";
    cin >> roll;
}

inline void Student::display(){
    cout << "Name: " << name << endl;
    cout << "Roll no: " << roll << endl;
}