#include<iostream>
using namespace std;
// function overloading by changing type and number of arguments
class Func{
    public:
void func (int x){    
    cout<< "value of x is "<<x<<endl;
}
void func (double x){
    cout<< "value of x is "<<x<<endl;
}
void func (int x, int y){
    cout<< "value of x and y are "<<x<<" , "<<y<<endl;
}
};
int main(){
    Func obj;
    obj.func(9);
    obj.func(34.4);
    obj.func(23, 45);
    return 0;
}