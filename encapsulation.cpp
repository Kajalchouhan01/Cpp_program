#include<iostream>
using namespace std;

class myage
{
 private:int age;
 public:
 void setage(int ag)
 {
    age=ag;
 }
 void getage()
 {
    cout<<"my age is :"<<age;
 }
};

int main()
{
    myage m;
    m.setage(21);
    m.getage();
}
