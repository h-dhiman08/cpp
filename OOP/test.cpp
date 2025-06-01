#include<iostream>

using namespace std;
class Test{
    int x = 10;
public:
    void display(){
        cout << "x = " << x << endl;
    }
};

int main(){
    Test obj;
    obj.display(); 
    return 0;
}