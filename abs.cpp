#include<iostream>
using namespace std;

class runprogram
{
    public:
    virtual void compile()=0;

};

class compiler :public runprogram
{
    public:
    void compile()
    {
        cout<<"program converted to object file";
    }
    
};

int main()
{
    compiler c;
    c.compile();
}