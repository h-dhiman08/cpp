#include <iostream>
using namespace std;
int sum(int a) // Parameters
{
    int c = 0;
    for (int i = 1; i <= a; i++)
    {
        c += i;
    }

    return c;
}
int main()
{
    int n;
    cout << "Enter a : ";
    cin >> n;

    cout << "Sum is : " << sum(n) << endl; // Arguments
    return 0;
}