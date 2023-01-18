#include<iostream>
using namespace std ;
class hero
{
    // hero k properties which is [public ]
    public:
    int health ;
    int wealth ;
    char level ;
    string position ; 

};

int main()
{
     hero ramesh; //hero ko bulaya class se ...or uska name ramesh hai

        //agar yh sbh values mh nai deta toh voh garbage value print krta 
     ramesh.health = 70 ;
     ramesh.wealth = 30 ;
     ramesh.level ='A' ;
     ramesh.position="first" ; 

    // access kr rha hu usimh a dot operator
     cout<<"ramesh health is ::" <<ramesh.health<<endl;
     cout<<"ramesh wealth is ::" <<ramesh.wealth<<endl;
     cout<<"ramesh level is ::" <<ramesh.level<<endl;
     cout<<"ramesh position is ::" <<ramesh.position<<endl;
}