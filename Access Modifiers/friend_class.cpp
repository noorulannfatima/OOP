#include<iostream>
using namespace std;

class Data{
    private:
        int private_id;

    protected:
        int protected_age;

    public:
        Data(){  
            private_id= 14;
            protected_age= 22;
    }
    friend class Friend; 
};
class Friend{
    public:
        void displayData(Data& f){
            cout<<" Private id is :"<<f.private_id<<endl;
            cout<<" Public age is :"<<f.protected_age<<endl;
    }
};
int main(){
    Data obj1;
    Friend obj2;
    obj2.displayData(obj1);
    return 0;
}

