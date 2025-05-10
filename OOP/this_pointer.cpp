#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    // Attributes
    string name;
    string dept;
    string subject;
    double salary;

    // Parameterized constructor
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name; // we used this pointer
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Methods
    void getDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Department : " << dept << endl;
        cout << "Subject : " << subject << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Teacher t1("Shradha Khapra", "CS", "C++", 25000);
    
    t1.getDetails();
    return 0;
}