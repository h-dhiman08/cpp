#include <iostream>
#include <string>
using namespace std;

class teacher
{
private:
    double salary;

public:
    // properties / attributes
    string name;
    string dept;
    string subject;
    double s; // s stands for private salary

    // Methods / member functions
    void display(void)
    {
        cout << "Name - " << name << endl;
        cout << "dept - " << dept << endl;
        cout << "subject - " << subject << endl;
        cout << "salary - " << salary << endl;
    }

    // setter method
    double setSalary()
    {
        salary = s;
    }
    // getter method
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    teacher t1;
    teacher t2;

    // Manisha mam details
    t1.name = "Manisha Mittal";
    t1.dept = "BCA";
    t1.subject = "OS";
    t1.s = 30000;

    // Niket sir details
    t2.name = "Niket vohra";
    t2.dept = "Science & Mathematics";
    t2.subject = "Maths";
    // t2.salary = 32000;

    cout << "There are two teachers." << endl;
    cout << "Enter which one's details to print" << endl;

    int input;
    cin >> input;

    if (input == 1)
    {
        t1.display();
    }
    else
    {
        t2.display();
    }
    return 0;
}