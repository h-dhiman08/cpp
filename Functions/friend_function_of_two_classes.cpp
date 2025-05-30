/*this program demonstrate how to add the data of two 
 different classes using friend function
*/
#include<iostream>
using namespace std;

// forward declaration
class XYZ;
class ABC;

// first class
class XYZ{
private:
    int data;
public:
    void get(int data){
        this->data = data;
    }
    friend void add(XYZ,ABC);
};

// second class
class ABC{
    private:
    int data;
public:
    void get(int data){
        this->data = data;
    }
    friend void add(XYZ,ABC);
};

// function (friend function to both classes)
void add (XYZ x,ABC a){
    cout << "Sum: " << x.data + a.data << endl;
}
int main() {
    XYZ obj1;
    ABC obj2;

    obj1.get(10);
    obj2.get(20);

    add(obj1, obj2);
    return 0;
}