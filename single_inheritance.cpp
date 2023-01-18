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
    void speak()
    {
        cout<<"BOW BOW !!"<<endl;
    }

    void setWeight(int w)
    {
        weight = w ;
    }
    
};

class Dog :public Animal
{   
    public:
    string color ;

    void cry()
    {
        cout<<"ooaah ooaah "<<endl;
    }

};

int main()
{
    Dog d ;
    d.speak(); //function calling
    d.setWeight(50);
    cout<<"age is::"<< d.age<<endl;
    cout<<"Height is::"<<d.height<<endl;
    cout<<"weight is::"<<d.weight<<endl;

   cout<<d.color<<endl;
   d.cry();

}