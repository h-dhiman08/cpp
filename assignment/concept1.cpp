#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    // Class attributes
    string name;
    string dept;
    string subject;
    double salary;

    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Custom copy constructor
    Teacher (Teacher &orgObj){
        cout << "I'm custom copy constructor" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    // Member functions / Methods
    void display(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }

};
int main(){
    Teacher t1("Shradha", "Computer Science", "C++", 25000);
    Teacher t2(t1);

    t2.display();
}