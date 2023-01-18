//INHERITANCE AMBIQUITY --Means if both the class...functions are same.Then what to do?For this we use scope operator.  

#include<iostream>
using namespace std;
class A
{
    public:
    void func1() //here function name is func1() which is for class A 
    {
        cout<<"I AM CLASS A"<<endl;
    }
};

class B
{
    public:
    void func1()//here also function name is func1() which is for class B 
    {
        cout<<"I AM CLASS B"<<endl;
    }
};

class C : public A , public B
{

};

int main()
{
    C obj ;//class C k liye object banaya hai jiska name obj hai 
   // obj.func1(); 
   obj.A::func1(); //::this sign is call scope operator
    obj.B::func1();

}