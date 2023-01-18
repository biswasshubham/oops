#include<iostream>
using namespace std ;

//parent class
class human //parent class name is human 
{
    //properties

    public : // inheritance in public modifier
    int age ;
    int height ;
    bool gender ;

    public:
    int getAge() //getter
    {
        return age ;
    }
    void setAge(int a) //setter
    {
        age = a ;
    }

} ;

//child class
class male : public human //public is modifier ...& ..human is parent class name 
                           // male class inherit kr rhi hai human class ko ..in public order
                           //inherit yani ki joh male hai voh apni properties toh lega he + voh human ki bhi properties lega

{   
    //properties of child class
    public: 
   string color ;

    
    //function creating 
    void print()
    {
        cout<<"just for tp printing"<<endl;
    }
} ;

int main()
{
   male shubham ; //creating object for male class(child class) -- male class name & shubham obj name 

   cout<<shubham.age<<endl;
   cout<<shubham.height<<endl;
   cout<<shubham.gender<<endl;


   cout<<shubham.color<<endl;
   
   shubham.print();//function printing
   shubham.setAge(12);//setting value of age
   cout<<"new age is ::"<<shubham.age<<endl;//printing new age
   
   


}