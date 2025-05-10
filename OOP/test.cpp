#include<iostream>
#include<string>
using namespace std;

class Teacher {
public:
	// Attributes initialization
	string name;
	string dept;
	string subject; 
	double salary;
	
	// Parameterized constructor
	Teacher(string name, string dept, string subject, double salary){
	this->name = name;
	this->dept = dept;
	this->subject = subject;
	this->salary = salary;
	}
	
	//Output method
	void getInfo(){
		cout << "Name: " << name << endl;
		cout << "Department: " << dept << endl;
		cout << "Subject: " << subject << endl;
		cout << "Salary: " << salary << endl;
	}
};

int main(){
	Teacher t1("Shradha", "Computer Science", "C++", 25000);
	Teacher t2(t1);
	
	t2.getInfo();
	return 0;
}