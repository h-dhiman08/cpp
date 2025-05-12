#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    int s;
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Dept = " << dept << endl;
        cout << "Subject = " << subject << endl;
        cout << "Salary = " << salary << endl;
    }

    // setter method
    void setter(int s)
    {
        salary = s;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Steve";
    t1.dept = "Computer";
    t1.subject = "Programming";
    t1.setter(30000);

    t1.display();
    return 0;
}