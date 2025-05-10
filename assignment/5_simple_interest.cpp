#include <iostream>
using namespace std;
int main()
{
    float p;
    cout << "Enter principle amount: ";
    cin >> p;

    float r;
    cout << "Enter rate: ";
    cin >> r;

    float t;
    cout << "Enter time (in years): ";
    cin >> t;

    float SI = (p * r * t) / 100;
    cout << "Simple interest is: " << SI << endl;
    return 0;
}