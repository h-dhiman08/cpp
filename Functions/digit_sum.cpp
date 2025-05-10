#include <iostream>
using namespace std;
int sum(int n)
{
    int sum = 0;
    int num = n;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    cout << "Digit sum is : " << sum(n) << endl;
    return 0;
}