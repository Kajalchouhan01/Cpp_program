#include<iostream>
using namespace std;
class Animal{
    public:
    void name(){
        cout<<"\nliyoo";
    }
    void age(){
        cout<<"  15yr";
    }
};
class Dog:public Animal{
    public:
    void color(){
        cout<<"  red";
    }

};
class Cat:public Animal{
    public:
    void colour(){
        cout<<"  black";
    }
};
int main(){
    Cat c;
    Dog d;
    c.name();
    c.age();
    c.colour();
    d.name();
    d.age();
    d.color();
}