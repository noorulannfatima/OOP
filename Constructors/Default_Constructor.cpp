#include<iostream>
using namespace std;
//! Creating our own Default constructor
class User{
    public:
    string firstName;
    string lastName;
    int age;
    string email;
   /*//!Empty Default constructor
    User(){}
    // Only one default constructor, else it will show error
    */
    //! Defaul constructor
    User(){
        firstName="Null";
        lastName="Null";
        age=0;
        email="Not Set";
    }
};
int main(){
    User user1;
    cout<<"First Name : "<<user1.firstName<<endl;
    cout<<"Last Name : "<<user1.lastName<<endl;
    cout<<"Age : "<<user1.age<<endl;
    cout<<"E-mail : "<<user1.email<<endl;

    return 0;
}