#include <iostream>
using namespace std; 

class stackop
{
    public:
    int top=-1,val,op;
    int stack[10];
    void push()
    {
      cout<<"\n enter a value in stack";
      cin>>val;
      top++;
      stack[top]=val;
    }
    void pop()
    {
        cout<<"\n value to be poped out"<<top;
      top--;   
    }
    void peek()
    {
     cout<<stack[top];   
    }
    void display()
    {
      for(int i=top;i>=0;i--)
      {
          cout<<"  \n"<<stack[i];
      }
    }
    void menu()
    {
       cout<<"\n choose ur option"<<"1. push \n 2. pop\n 3. peek \n 4. display \n 5. exit";
       cin>>op;
       switch(op)
       {
           case 1: push();
           break;
           case 2: pop();
           break;
           case 3: peek();
           break;
           case 4: display();
           break;
           case 5: cout<<"\n dhnyavad.......";
           break;
           default : cout<<" \ngalat rasta";
        
       }
    }
};
int main()
{
   stackop s;
   while(s.op!=5)
   {
       s.menu();
   }

    return 0;
}

