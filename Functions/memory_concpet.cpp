/*There are basically two types of memory in the C++
1. Stack memory - used for static declaration
2. Heap memory - used for dynamic declaration

In stack memory, each function is regarded as the stack frame of the memory
Besides the main function, all other functions which are called or
the controll of programme is on other function, then those
functions will be on the top of the stack memory.
*/
#include <iostream>
using namespace std;
void hello()
{

    cout << "Hello" << endl;

    cout << "World" << endl;
    return;
}
int main()
{
    hello();
    return 0;
}