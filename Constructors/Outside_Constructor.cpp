#include<iostream>
using namespace std;

class student
{
    int id;
    char name[30];
    double fee;
    
    public:
    student();
    void display();
};

student::student()   // calling constructor outside of the class
{
    cout<<" Enter your Id :"<<endl;
    cin>>id;
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Enter your fee :"<<endl;
    cin>>fee;
}

void student::display()
{
cout<<id<<endl;
cout<<name<<endl;
cout<<fee<<endl;
}
int main(){
    student obj;   //constructor gets called automatically when we create the object
    obj.display();
    return 0;
}