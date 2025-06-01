#include<iostream>

using namespace std;

class Complex{
    int real, img;
public:
    void get(int, int);
    void display();

    friend Complex add(const Complex &, const Complex &);
};

void Complex::get(int r, int i){
    real = r;
    img = i;
}
void Complex::display(){
    cout << "Real: " << real << ", Imaginary: " << img << endl;
}

Complex add(const Complex &c1,const Complex &c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main(){
    Complex c1, c2, result;
    c1.get(3, 4);
    c2.get(1, 2);
    result = add(c1, c2);
    cout << "Result of addition: ";
    result.display();
    return 0;
}