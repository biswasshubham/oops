#include<iostream>
using namespace std;
//function overloading 

class A 
{
    public:
    void sayHello()//ismh i/p parameters kn hai ...
    {
        cout<<"hello shubham "<<endl;
    }

     void sayHello(string name)//ismh i/p paramneters string name hai 
    {
        cout<<"hello shubham "<<endl;
    }
};

int main()
{
    A obj1;
    obj1.sayHello();
}