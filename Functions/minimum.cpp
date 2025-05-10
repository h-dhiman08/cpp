#include <iostream>
using namespace std;
int min(int a, int b)
{
    int c = (a < b) ? a : b;
    return c;
}
int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;

    cout << "Minimum is : " << min(a, b) << endl;
    return 0;
}