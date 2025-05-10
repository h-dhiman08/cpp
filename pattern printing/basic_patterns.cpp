#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n ";
    cin >> n;

    int count = 65;

    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << (char)(65 + j) << " ";
        }
        cout << endl;
        count++;
    }

    return 0;
}