#include<iostream>
using namespace std;
// Base Abstract class
class SmartPhones{
    public:
    virtual void takeSelfie()=0;
    virtual void makeCall()=0;
};
// Derived class 1
class Android:public SmartPhones{
    public:
    void takeSelfie(){
        cout<<"Android Selfie..."<<endl;
    }
    void makeCall(){
        cout<<"Android Calling..."<<endl;
    }
};
// Derived class 2
class Iphone:public SmartPhones{
    public:
    void takeSelfie(){
        cout<<"Iphone Selfie..."<<endl;
    }
    void makeCall(){
        cout<<"Iphone Calling..."<<endl;
    }
};

int main(){
    SmartPhones* obj1= new Android();
    obj1->makeCall();
    obj1->takeSelfie();
    SmartPhones* obj2= new Iphone();
    obj2->makeCall();
    obj2->takeSelfie();

    return 0;
}
