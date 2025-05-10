#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *ptr = &x;
    int y = *ptr;

    cout << "Value: " << x << endl;
    cout << "Address: " << ptr << endl;
    cout << "After dereferencing, y: " << y << endl;
    return 0;
}