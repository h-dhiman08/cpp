#include<iostream>

using namespace std;

int main() {
    float pencil = 5.0;
    float pen = 10.0;
    float eraser = 2.5;

    int x = 0;
    float bill;

    cout << "Enter the quantity" << endl;
    cout << "Pencil: ";
    cin >> x;

    bill = 5.0 * x;
    x = 0;

    cout << "pen: ";
    cin >> x;

    bill = bill + (x*10.0);
    x = 0;

    cout << "eraser: ";
    cin >> x;

    bill = bill + (x*2.5);
    x = 0;

    cout << "Total bill amount : " << bill << endl;
    cout << "Including 18% GST, amount: " << bill + (bill*18)/100 << endl;
    return 0;
}