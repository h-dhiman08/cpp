#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Function to add two Complex numbers
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display the complex number
    void display() {
        cout << real;
        if (imag >= 0) {
            cout << " + " << imag << "i";
        } else {
            cout << " - " << -imag << "i";
        }
        cout << endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(3.5, 2.7);
    Complex c2(1.2, -4.3);

    // Add them
    Complex result = c1 + c2;

    // Display results
    cout << "First complex number: ";
    c1.display();
    
    cout << "Second complex number: ";
    c2.display();
    
    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}