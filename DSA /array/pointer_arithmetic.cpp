#include<iostream>

using namespace std;

int main(){
    int a;
    int *ptr = &a;

    cout << "Original Address\n";
    cout << ptr << endl;

    ptr++; // Incrementing pointer to point to the next integer address
    cout << "Icremented Address\n";
    cout << ptr << endl;

    ptr--; 
    cout << "Decremented Address\n";
    cout << ptr << endl;
    return 0;
}