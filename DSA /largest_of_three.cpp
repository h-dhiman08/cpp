#include<iostream>

using namespace std;

int main() {
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << endl;
        }
        else{
            cout << c << endl;
        }
    }
    else{
        cout << b << endl;
    }
    return 0;
}