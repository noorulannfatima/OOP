#include<iostream>
using namespace std;
// Whenever we work with pointers, it is imp to use destructor to avoid memory leak.
class Books{
public:
    string Title;
    string Author;
    int* Rates;
    int RatesCount;

    Books(string title, string author){
        Title = title;
        Author = author;
        RatesCount = 2;  
        Rates= new int [RatesCount];
        Rates[0]= 4;
        Rates[1]= 8;
        cout<<Title<<" Constructor invoked"<<endl;
    }
    ~Books(){
        delete [] Rates;
        Rates= nullptr;  // Good Practice to use nullptr after deleting
    cout<<Title<<" Destructor invoked"<<endl;
    }
};
int main(){
    Books book1("Rich Dad Poor Dad","Robert T. Kiyosaki" );
    Books nook2("Atomic Habits", "James Clear");
return 0;
}