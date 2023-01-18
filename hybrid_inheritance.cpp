   //HYBRID INHERITANCE -- more than one type of inheritance OR combination of more than one inheritance
#include<iostream>
using namespace std ;
//HYBRID INHERITANCE
class A
{
    public:
    void func1()
    {
        cout<<"function 1 calling"<<endl;
    }
};

class D 
{
    public:
    void func4()
    {
        cout<<"function 4 calling"<<endl;
    }
};

class B : public  A
{   
    public:
    void func2()
    {
        cout<<"function 2 calling"<<endl;
    }
};

class C : public  A , public D
{
    public:
    void func3()
    {
        cout<<"function 4 & 3 calling"<<endl;
    }
};

int main()
{
    A obj1 ;
    obj1.func1();

    D obj4 ;
    obj4.func4();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();
    obj3.func4();
    //obj3.func2() -- cant b called bcoz its inherited to only A & D 
}

