#include<iostream>
using namespace std;
class Vehicle                     //base class 
{ 
    public:
    void base()
    {
        cout<<"I am a vehicle\n";
    }

};
class Car:public Vehicle
{
    public:
    void car()
    {
        cout<<"\n    car";
        cout<<"\n    range rover";
        cout<<"\n    defender";
        cout<<"\n    2023";
    }
   
};
class Bike:public Vehicle
{
    public:
    void bike()
    {
        cout<<"\n    bike";
        cout<<"\n    royal enfield";
        cout<<"\n    bullet 350";
        cout<<"\n    2024";
        cout<<"\n    black";
    }
   
};
class Bicycle:public Vehicle{
    public:
    void bicycle()
    {
        cout<<"\n    bicycle";
        cout<<"\n    ranger";
        cout<<"\n    hero";
        cout<<"\n    2023";

    }
    
};
int main()
{
    
    Bicycle b;
    b.base();
    b.bicycle();
    return 0;
}