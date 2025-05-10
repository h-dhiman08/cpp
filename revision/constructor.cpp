#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    // Private attributes
    double salary;
    
public:
    // Public attributes
    string name;
    string dept;
    string subject;

    // Parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    
    //setter method
    void setSalary(double s){
        salary = s;
    }

    // display method
    void display(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
    
};

int main()
{
    // object initialized using parameterized constructor
    Teacher t1("Shradha", "Computer Science", "C++", 25000);
    
    // t2 object instanted using default copy constructor
    Teacher t2(t1);

    // function call & edits
    t2.name = "Aman";
    t1.display();
    cout <<"-------------" << endl;
    t2.display();
    return 0;
}