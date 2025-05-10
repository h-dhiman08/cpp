#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int oddSum = 0;
    int evenSum = 0;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
        else if (i % 2 == 0)
        {
            evenSum += i;
        }

        sum += i;
    }

    cout << "Odd Sum is " << oddSum << endl;
    cout << "Even Sum is " << evenSum << endl;
    cout << "Overall Sum is " << sum << endl;
    return 0;
}