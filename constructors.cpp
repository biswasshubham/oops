#include<iostream>
using namespace std;
class MyClass
{
    public:

    int health ;
    char level;

    //deafulter constructor made by me 
    MyClass() //function making 
    {
        cout<<"default constructor "<<endl;
    }

    //parameterised constructor--v have to pass parameters made by me  
    MyClass(int health)
    {
        cout<<"this::"<<this<<endl;
        this->health = health ;
    }

    //copy constructor just copy
    



    //printing function
    void print()
    {
        cout<<"health is ::"<<health<<endl;
    }


};

int main()
{
    cout<<"hi"<<endl;
    MyClass myObj(40) ; //MyClass is the class name ...&.. myObj is the object name ..& here (40) is my parameter
    cout<<"hello"<<endl;

   cout<<myObj.health<<endl;
   myObj.print();
    cout<<"address ::"<<&myObj<<endl;

    
}