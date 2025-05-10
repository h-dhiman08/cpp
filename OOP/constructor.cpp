#include <iostream>
#include <string>

using namespace std;

class Teacher
{
public:
    Teacher()
    {
        cout << "This is constructor." << endl;
    }
    double salary;
    string name;
    string dept;

    // void setSalary(int s)
};

int main()
{
    Teacher t1;
    t1.salary = 30000;
    return 0;
}