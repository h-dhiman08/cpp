#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);   // Add element at the end
    v.push_back(20);
    v.push_back(30);

    // till this point, we have three elements

    cout << v.size() << endl;

    v.pop_back();      // Remove last element (30 removed)

    cout << "Size: " << v.size() << "\n"; // Output: Size: 2
    cout << "First Element: " << v.front() << "\n"; // Output: 10
    cout << "Last Element: " << v.back() << "\n"; // Output: 20

    return 0;
}
