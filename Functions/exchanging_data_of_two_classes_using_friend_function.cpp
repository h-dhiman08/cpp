#include<iostream>
using namespace std;

class ABC; // forward declaration

// first class
class XYZ{
    int data;
public:
    void get(int data){
        this->data = data;
    }
    void display(){
        cout << "XYZ: " << data << endl;
    }
    friend void exchange(XYZ&,ABC&);
};

// second class
class ABC{
    int data;
public:
    void get(int data){
        this->data = data;
    }
    void display(){
        cout << "ABC: " << data << endl;
    }
    friend void exchange(XYZ&,ABC&);
};

void exchange(XYZ& x, ABC& y){
    int temp = x.data;
    x.data = y.data;
    y.data = temp;
}
int main() {
    XYZ x;
    ABC y;

    x.get(10);
    y.get(20);

    cout << "----Before change----" << endl;
    x.display();
    y.display();

    exchange(x,y);

    cout << "----After change----" << endl;
    x.display();
    y.display();
    return 0;
}