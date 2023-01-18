        //GETTER - means to print  
        //SETTER - mena to initialise(set) the value 


#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee raj;
  raj.setSalary(50000);//setted salary as 5k
  cout << raj.getSalary(); //printing 
  return 0;
}