#include<iostream>

using namespace std;

int main(){
    int a;

    int *p = &a; 
    int *q = p + 3;

    cout << (q-p) << endl; // This will print the difference in terms of number of elements, not bytes.
    return 0;
}