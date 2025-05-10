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
    cout << "Enter n : ";
    cin >> n;

    int r;
    cout << "Enter r : ";
    cin >> r;
    cout << "Binomial coefficient is : " << (fact(n) / (fact(r) * (fact(n - r)))) << endl; // Arguments
    return 0;
}