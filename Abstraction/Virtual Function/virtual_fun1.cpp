#include<iostream>
using namespace std;

class Instruments{
    public:  
    // virtual function
    virtual void makeSound(){
        cout<<"Instruments is Playing...."<<endl;
    }
};
class Flute:public Instruments{
    public:
    void makeSound(){
        cout<<"Flute is Playing...."<<endl;
    }
};

int main(){
    Instruments* obj1 = new Flute;   // Base class pointer points to derived class
    obj1-> makeSound();   //! It will get the most derived version
    return 0;
}