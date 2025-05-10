#include <iostream>
using namespace std;
int fact(int a) // Parameters
{
    int c = 1;
    for (int i = 1; i <= a; i++)
    {
        c *= i;
    }

    return c;
}
int main()
{
    int n;
    cout << "Enter a : ";
    cin >> n;

    cout << "Factorial is : " << fact(n) << endl; // Arguments
    return 0;
}