#include<iostream>

using namespace std;

int add(const int&,const int&); // function prototyping

int main() {
    int a = 5;
    int b = 10;

    cout << add(a,b) << endl;
    return 0;
}

// function definition
int add(const int& a,const int& b){
    return a + b;
}