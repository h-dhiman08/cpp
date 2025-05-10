#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers !" << endl;
    }
    else
    {
        long long factorial = 1;

        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        cout << "Factorial of " << n << " is " << factorial << endl;
    }
    return 0;
}