#include <iostream>
using namespace std;
double sum(double a, double b)
{
    double s = a + b;
    return s;
}
int main()
{
    double a;
    cout << "Enter a : ";
    cin >> a;

    double b;
    cout << "Enter b : ";
    cin >> b;

    double result = sum(a, b);
    cout << "Sum of " << a << " and " << b << " is : " << result << endl;
    return 0;
}