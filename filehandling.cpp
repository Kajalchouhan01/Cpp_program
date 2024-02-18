#include<fstream>
#include<iostream>
using namespace std;
int main()
{
   ifstream f("myfile.txt");
   
   string sr;
   
   if(f.is_open())
   {
   while(getline(f,sr))
   {
       cout<<sr;
   }
   }
   else
   {
       cout<<"unable to open file";
   }
   f.close();
   
    return 0;
}
