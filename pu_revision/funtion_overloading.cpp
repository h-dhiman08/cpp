// this program will demomstrate the concept of the function overloading in C++
// for detailed info, please check the PU revision notes
#include<iostream>
#include<string>

using namespace std;

int add(int x, int y){ // first 'add' function
    return x+y;
}

int add(int x, int y, int z){ // second 'add' function
    return x+y+z;
}

double add(double x, double y){ // third 'add' function
    return x+y;
}
int main(){
    // making suitable variables to perform the function operations
    int a = 10;
    int b = 20;
    int c = 30;
    double a1 = 10.1;
    double b1 = 20.1;

    // making the different function calls
    cout << add(a,b) << endl; // first 'add' function called
    cout << add(a,b,c) << endl; // second 'add' function called
    cout << add(a1,b1) << endl; // third 'add' function called

    return 0;
}
/* ------ SUMMARY ------
    Here, we created multiple functions with same name (doesn't matter the return type), and then
    we called those function via their name,

    problem is there when compiler had to decide which function to be called as there exits multiple
    functions of the same name.

    Then it was decided via-
    1. Different number of function parameters
    2. Different type of function parameters
    3. Different parameter order

    Remember : It cannot be overloaded based on the return type
*/