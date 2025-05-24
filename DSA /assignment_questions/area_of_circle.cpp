#include<iostream>

using namespace std;

int main() {
    float radius;
    cout << "Enter radius of circle: ";
    cin >> radius;

    float area = 3.14*radius*radius;

    cout << "Area of circle is: " << area << endl;
    return 0;
}