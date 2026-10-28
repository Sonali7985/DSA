
// #include<iostream>
// using namespace std;
// class Shape{
//     public:
//     virtual void area()=0; // pure virtual function
// };
// class Circle:public Shape{
//     public:
//     void area(){
//         cout<<"Area of Circle is: "<<3.14*5*5<<endl;
//     }
// };
// int main(){
//     Shape s;
//     s.area(); // This will cause a compilation error because we cannot instantiate an abstract class
//     Circle c;
//     c.area();   

// }
#include<iostream>
using namespace std;
class Base{
    public:
    virtual ~Base(){
        cout<<"Base Destructor "<<endl;
    }
};
class Derived:public Base{
    public:
    ~Derived(){
        cout<<"Derived Destructor"<<endl;
    }
};
int main(){
    
    Base *b=new Derived();  
    //   runtime polymorphism
    delete b; // This will call the destructor of Derived class first and then Base class destructor    
}