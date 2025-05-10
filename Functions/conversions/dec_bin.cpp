#include <iostream>
using namespace std;
int decBin(int dec)
{
    int ans = 0;
    int pow = 1;
    while (dec > 0)
    {
        ans += dec % 2 * pow;
        pow *= 10;
        dec /= 2;
    }
    return ans;
}
int main()
{
    int dec;
    cout << "Enter decimal number : ";
    cin >> dec;
    int result = decBin(dec);

    cout << "Conversion is " << result << endl;
    return 0;
}