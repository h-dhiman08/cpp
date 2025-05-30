#include<iostream>

using namespace std;

class Time{
private:
    int hours;
    int minutes;
public:
    void get(int,int);
    void put();

    friend Time Sum(Time,Time);
};

// initialising the time
void Time::get(int hours, int minutes){
    this->hours = hours;
    this->minutes = minutes;
}

// displaying the time
void Time::put(){
    cout << hours << " Hours and ";
    cout << minutes << " minutes" << endl;
}
// a friend function to perform time addition
Time Sum(Time t1, Time t2){
    Time t3;
    t3.hours = t1.hours + t2.hours;
    t3.minutes = t1.minutes + t2.minutes;
    t3.hours = t3.hours + t3.minutes/60;
    t3.minutes = t3.minutes%60;
    return t3;
}
int main() {
    Time t1,t2;
    t1.get(1,45);
    t2.get(1,30);

    Time t3 = Sum(t1,t2);
    t3.put();
    return 0;
}