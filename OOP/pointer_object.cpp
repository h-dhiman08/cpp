#include<iostream>

using namespace std;

class MyComplex{
    int real, imag;
public:
    void get(){
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }

    void set(int r, int i){
        real = r;
        imag = i;
    }
};

int main(){
    MyComplex *ptr = new MyComplex; 
    (*ptr).set(3, 4); // Using dereferencing to call set method
    (*ptr).get(); // Using dereferencing to call get method
    return 0;
}