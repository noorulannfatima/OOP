#include<iostream>
using namespace std;

class Circle 
{
    public: 
    double radius;   //data memeber
    double computeArea(){  // memeber function
        return 3.14*radius*radius;
    }

};

int main(){     //driver code down
    Circle obj;   // object of te class

    obj.radius=23.4;

    cout<<"Radius is :"<<obj.radius<<endl;
    cout<<"Area is :"<<obj.computeArea()<<endl;

return 0;
}