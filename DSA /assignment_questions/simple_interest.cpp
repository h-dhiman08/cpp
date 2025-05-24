#include<iostream>

using namespace std;

int main() {
    double p;
    float r;
    int t;

    cout << "Enter priciple amount: ";
    cin >> p;

    cout << "Enter rate: ";
    cin >> r;

    cout << "Enter time: ";
    cin >> t;

    double SI = (p*r*t)/100;

    cout << "Simple interest comes to be: " << SI << endl;
    return 0;
}