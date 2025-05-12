// this program will demonstrate the concept of the Static Member function
// for further clarification, visit to the - PU Revision Notes
#include<iostream>
#include<string>

using namespace std;

class Student{
    int roll;
    string name;
public:
    static int count; // 
    void get();
    void display();

    static int show_count(); // static member function defined
};

int Student::show_count(){
    return count;
}
int Student::count;

void Student::get(){
    count++;

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;
}

void Student::display(){ 
    cout << "Name: " << name << endl;
    cout << "Roll number: " << roll << endl;
}
int main(){

    Student s1; // first student
    s1.get();
    
    Student s2; // second student
    s2.get();

    cout << "Number of students: " << s1.show_count() << endl;  // same static member function can be access via both objects of the class and gives the same output
    return 0;
}