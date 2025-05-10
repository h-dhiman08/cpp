#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int j = n + 1 - i; j > 0; j--)
        {
            cout << j << (char)32;
        }
        cout << endl;
    }

    return 0;
}