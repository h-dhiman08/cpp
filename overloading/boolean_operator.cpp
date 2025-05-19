#include <iostream>

using namespace std;

class Number
{
public:
    int n;

    Number() { n = 0; }

    Number(int n)
    {
        this->n = n;
    }

    bool operator==(const Number num){
        if(this->n == num.n) return true;
        else return false;
    }
};
int main()
{
    Number a;
    Number b;

    a.n = 1;
    b.n = 1;

    // let's compare both of them
    if(a == b) cout << "Equal!" << endl;
    else cout << "Not equal!" << endl;

    return 0;
}