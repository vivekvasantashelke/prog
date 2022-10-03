#include <iostream>

using namespace std;

template<class T>

class stack
{
private: T top;
    T value[10];
public:stack()
    {
        top=-1;
    }

    void push()
    {
     if(top>5)
     {
         cout<<"stack is full"<<endl;

     }
     else
     {
         cout<<"Enter to push"<<endl;
         cin>>value[++top];

     }
    }
   void pop()
   {
       if(top<0)
       {
           cout<<"stack is underflow"<<endl;
       }
       else {
            value[top--];
           }
       }
   void display ();
};
template<class T>
void stack<T>::display ()
{
    if(top<0)
    {
        cout<<"stack is underflow"<<endl;
    }
    else
    {
        cout<<"Poped value"<<endl;
        cout<<value[top]<<endl;

    }

}


int main()
{
   stack <int> i;
   cout<<"This is for Integer Value "<<endl;
    i.push();
    i.push();
    i.pop();
    i.display();

    stack <char> c;
     cout<<"This is for char Value "<<endl;
    c.push();
    c.push();
    c.pop();
    c.display();
    c.push();
    c.push();
    c.pop();
    c.display();
}
