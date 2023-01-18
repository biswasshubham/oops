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

class Dog :public Animal //class dog inherit to animal in public mode
{   
    public:
    string color ;

    void cry()
    {
        cout<<"ooaah ooaah "<<endl;
    }

};

class Labrodog :public Dog //class Labrodog inherit to dog in public mode
{
    public :
    string body ;
};

int main()
{
    Labrodog l ;
    cout<<l.body<<endl;
    
     l.speak(); //function calling
    l.setWeight(50);
    cout<<"age is::"<< l.age<<endl;
    cout<<"Height is::"<<l.height<<endl;
    cout<<"weight is::"<<l.weight<<endl;

   cout<<l.color<<endl;
   l.cry();

}