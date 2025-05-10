#include <iostream>
using namespace std;
int sum(int a, int b) // parameters (pass by value)
{
    return a + b;
}
int main()
{
    // int a;
    // cout << "Enter a : ";
    // cin >> a;

    // int b;
    // cout << "Enter b : ";
    // cin >> b;
    // cout << sum(a, b) << endl; // arguments

    int a;
    cout << &(a) << endl;
    return 0;
}