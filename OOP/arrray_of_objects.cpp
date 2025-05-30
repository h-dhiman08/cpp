#include<iostream>
#include<string>
using namespace std;

const int EMPLOYEE_COUNT = 3; // I just avoid using 'size' as variable name


class employee{
private:
    string name;
    float age;
public:
    void get();
    void put();
};

void employee::get(){
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;
}

void employee::put(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}


int main() {
    employee manager[EMPLOYEE_COUNT];
    for (int i = 0; i < EMPLOYEE_COUNT; i++)
    {
        cout << "\nDetails of manager " << i+1 << endl;
        manager[i].get();
    }
    cout << endl;

    for (int i = 0; i < EMPLOYEE_COUNT; i++)
    {
        manager[i].put();
    }
    return 0;
}