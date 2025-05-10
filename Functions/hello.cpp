#include <iostream>
using namespace std;
int printHello()
{
    cout << "Hello World" << endl;
    return 5;
}
int main()
{
    printHello();
    int value = printHello();
    cout << "Function returns : " << value << endl;
    return 0;
}