#include <iostream>

using namespace std;
void prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime !" << endl;
        }
        break;
    }
    cout << "Prime number!" << endl;
    return;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    prime(n);

    return 0;
}