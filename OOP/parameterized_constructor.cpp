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

    Teacher(string n, string d, string s, double sl)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sl;
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
    Teacher t1("Shardha Khapra", "Computer application", "C++", 30000);

    t1.getDetails();
    return 0;
}