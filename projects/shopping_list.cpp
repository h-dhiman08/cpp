#include<iostream>
using namespace std;

const int m = 50;

// class definition
class Items{
private:
    int itemCode[m];
    float itemPrice[m];
public:
    int count = 0;
    void getItem();
    void displayVal();
    void removeItem();
    void displayAll();
};

// member function outside definition
void Items::getItem(){
    cout << "Enter item code: ";
    cin >> itemCode[count];

    cout << "Enter price: ";
    cin >> itemPrice[count];
    count++;
}
void Items::displayVal(){
    int price = 0;
    for (int i = 0; i < count; i++)
    {
        price += itemPrice[i];
    }
    cout << price << endl;
}
void Items::removeItem(){
    itemPrice[count] = 0;
    count--;
}
void Items::displayAll(){
    for (int i = 0; i < count; i++)
    {
        cout << "----- Product " << i+1 << " ----" << endl;
        cout << "Item Code: " << itemCode[i] << endl;
        cout << "Price: " << itemPrice[i] << endl;
    }
    
}

// main function
int main() {
    Items order;
    int x;
    do{
        cout << ":::::::::::::::::::::::::::::::" << endl;
        cout << "You can do the following" << endl;
        cout << "1. Add an item" << endl;
        cout << "2. Display total value" << endl;
        cout << "3. Delete an item" << endl;
        cout << "4. Display all items" << endl;
        cout << "5. Quit" << endl;
        cout << "User: ";
        cin >> x;
        cout << "--------------" << endl;
        switch (x)
        {
        case 1 : order.getItem(); break;
        case 2 : order.displayVal(); break;
        case 3 : order.removeItem(); break;
        case 4 : order.displayAll(); break;
        case 5 : cout << "Quiting" << endl; break;
        default: cout<<"Invalid!\n";
            break;
        }
    }while(x!=5);
    
    return 0;
}