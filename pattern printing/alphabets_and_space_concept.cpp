#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // First loop prints the 'i' spaces
        for (int j = 0; j < i; j++)
        {
            cout << " " << " ";
        }
        // second loop prints the 'n-i' times the number
        for (int j = n - i; j > 0; j--)
        {
            cout << (char)(i + 65) << " ";
        }
        cout << endl;
    }

    return 0;
}