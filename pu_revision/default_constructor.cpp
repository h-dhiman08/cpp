#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
    string name;
    string dept;
    string subject;
    double salary;
    Teacher()
    {
        dept = "Computer science";
    }

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
    Teacher t1;
    t1.name = "Sharadha Khapra";
    t1.subject = "C++";
    t1.salary = 30000;

    t1.getDetails();
    return 0;
}