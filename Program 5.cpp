#include <iostream>
using namespace std;

class Volume {
    public:
    float length;
    float breadth;
    float height;
    void input(){
        cout<<"Enter the value of length: ";
        cin>>length;
        cout<<"Enter the value of breadth: ";
        cin>>breadth;
        cout<<"Enter the value of height: ";
        cin>>height;
    }

    float vol() {
        float v = length * breadth * height;
        return v;
    }
    void display(){
        double a = vol();
        cout<<"The volume is "<<a;
    }
};
intmain() {
    Volume volume1;
    volume1.input();
    float a = volume1.vol();
    cout<<a;
}
