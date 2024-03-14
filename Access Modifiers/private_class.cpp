#include<iostream>
using namespace std;

class Circle {
private:
    double radius;
public:
    double computeArea(double r){
        radius = r;
        double area = 3.14*radius*radius;

    cout<< "Radius is :"<< radius<<endl;
    cout<<"Area is : "<< area << endl;
    }
};
int main(){
    Circle obj;
    obj.computeArea(34.4); //trying to access private data member directly outside the class
    return 0;
}