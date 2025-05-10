#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int floyd = 65;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)floyd << " ";
            floyd++;
        }
        cout << endl;
    }

    return 0;
}