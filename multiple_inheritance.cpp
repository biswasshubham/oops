#include<iostream>
using namespace std ;

class Animal
{
    //properties
    public:
    int weight ;
    int height ;
    int age ;

    public: // function making
    void bark()
    {
        cout<<"BOW BOW !!"<<endl;
    }

    void setWeight(int w)
    {
        weight = w ;
    }
    
};

class human :public Animal
{   
    public:
    string color ;

    //function
    void speak()
    {
        cout<<"hi hello "<<endl;
    }

};

class multiple :public Animal , public human
{   
    public:
    void dance()
    {
        cout<<"dog dance"<<endl;
        cout<<"animal dance"<<endl;
    }
};

int main()
{
    multiple m ;
    m.speak();
    m.dance();
   cout<<m.color<<endl;
   












}