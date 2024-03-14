#include<iostream>
using namespace std;
//!Abstract class as it has atleast one pure virtual function.
class Instruments{
    public:
    virtual void makingSound() = 0;
};
// derived class 1
class Piano: public Instruments{
    public:
    void makingSound(){
        cout<<"Piano is playing..."<<endl;
    }
};
// derived class 2
class Flute: public Instruments{
    public:
    void makingSound(){
        cout<<"Flute is playing..."<<endl;
    }
};
int main(){
    Instruments* obj1 = new Piano();
    //obj1->makingSound();
    Instruments* obj2 = new Flute();
    //obj1->makingSound();
//! Polymorphic behaiviour we get from abstract class
    Instruments* instrument[2]= {obj1, obj2};   
    for(int i=0;i<2;i++){
    instrument[i]->makingSound();
    }

return 0;
}