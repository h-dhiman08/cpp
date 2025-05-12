// this program will demonstrate the concept of the Static Data member / attributes
// for further clarification, visit to the - PU Revision Notes
#include<iostream>
#include<string>

using namespace std;

class Student{
    int roll;
    string name;
public:
    static int count; // created the static data member that acts as the counter to count students
    void get();
    void display();
};

int Student::count; // it is must to be declared outside the scope of class & accessible by all the data members and member functions of the class
// by default, static data member is initialized with 0

void Student::get(){ // Explicit definition of 'get' function
    count++; // will update the counter after each student is added

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;
}

void Student::display(){ // Explicit definition of 'display' function
    cout << "Name: " << name << endl;
    cout << "Roll number: " << roll << endl;
}
int main(){

    Student s1; // first student
    s1.get();
    
    Student s2; // second student
    s2.get();

    cout << "Number of students: " << Student::count << endl;  // Mandatory to use scope resolution operator 
    return 0;
}