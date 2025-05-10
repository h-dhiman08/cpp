#include<iostream>
#include<string>
using namespace std;
class Teacher{
public:
    // Attributes initialiaztion
    string name;
    string dept;
    string subject;
    double salary;

    //parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
        cout <<"I'm parameterized constructor" << endl;
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Manual copy constructor
    Teacher (Teacher &orObj){
        cout << "I'm manual copy constructor" << endl;
        this->name = orObj.name;
        this->dept = orObj.dept;
        this->subject = orObj.subject;
        this->salary = orObj.salary;
    }
    // Output function
    void display(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main(){
    cout << endl << endl;
    cout << " ------Manual constructor call -------" << endl;
    Teacher t1("Shradha", "Computer Science", "C++", 25000);
    Teacher t2(t1);
    cout << endl << endl;
    
    
    cout << "Obeject 1 properties" << endl;
    cout << endl << "-----------------" << endl;
    t1.display();

    cout << "Obeject 2 properties" << endl;
    cout << endl << "-----------------" << endl;
    t2.display();
    return 0;
}