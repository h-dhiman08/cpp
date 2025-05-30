#include <iostream>
#include <iomanip>  // Required for setprecision and fixed

using namespace std;

int main() {
    double num = 123.4567;

    cout << fixed << setprecision(2);
    cout << num << endl;  // Output: 123.46 (rounded to 2 decimal places)

    return 0;
}