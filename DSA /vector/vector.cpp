#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers = {1, 2, 3, 4, 5};

    // using for each loop
    for (int num : numbers) {
        cout << num << " ";
    }

    cout << endl;
    // Here, we can also replace the 'num' with any counter name
    return 0;
}