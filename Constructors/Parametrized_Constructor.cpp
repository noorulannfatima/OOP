#include<iostream>
using namespace std;

class User{
    public:
    string firstName;
    string lastName;
    int Age;
    string email;
// Default Constructor
//? Once we create a constrcutor, we lost automatically created default constructor
    User(){
        firstName="Null";
        lastName="Null";
        Age=0;
        email="Not Set";
    }
// Parametrized constructor
    User(string fName, string lName, int age){
        firstName= fName;
        lastName=lName;
        Age=age;
        email=fName+"."+lName+"@gmail.com";
    }
};
// Non member function
void GetUserInfo(User u){
        cout << "First Name : "<<u.firstName<<endl;
        cout << "Last Name : "<<u.lastName<<endl;
        cout << "Age : "<<u.Age<<endl;
        cout << "E-mail : "<<u.email<<endl;
}
int main(){
    User user1("Laiba", "Khan", 27);
    User user2("Momina", "Nazir", 25);
    User user3;  // expects default constructor

    GetUserInfo(user1);
    GetUserInfo(user2);
    GetUserInfo(user3);

    return 0;
}