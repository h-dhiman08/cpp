#include <iostream>
using namespace std;
int binDec(int bin)
{
    int ans = 0;
    int pow = 1;
    while (bin > 0)
    {
        ans += bin % 10 * pow;
        pow *= 2;
        bin /= 10;
    }
    return ans;
}
int main()
{
    int bin;
    cout << "Enter binary number : ";
    cin >> bin;
    cout << "Conversion is : " << binDec(bin) << endl;
    return 0;
}