#include<iostream>
using namespace std;
class Books {
public:
	string Title;
	string Author;
	float* Rates;
	int RatesCounter;

	Books(string title, string author) {
		Title = title;
		Author = author;

		RatesCounter = 2;
		Rates = new float[RatesCounter];
		Rates[0] = 5;
		Rates[1] = 4;
	}
    ~Books() {
		delete[] Rates;
		Rates = nullptr;
	}
    // copy constructor
    Books(Books& original){
        Title= original.Title;
        Author= original.Author;
        RatesCounter= original.RatesCounter;
        // in case of pointers
        Rates= new float[RatesCounter];
        for(int i=0;i<RatesCounter;i++)
        {
            Rates[i]=original.Rates[i];
        }
    }
};
void PrintBooks(Books Books){  //case 2
    cout<<"Title"<<Books.Title<<endl;
    cout<<"Author"<<Books.Author<<endl;
    
    float sum=0;
    for(int i=0;i<Books.RatesCounter;i++)
        {
            sum+=Books.Rates[i];
        }
    cout<<"Averare Rates :"<< sum/Books.RatesCounter<<endl;
}
int main(){
    Books book1("Rich Dad Poor Dad","Robert T. Kiyosaki" );
    Books book2("Atomic Habits", "James Clear");
    Books book3(book2); // case 1
    Books book4=book1;  // invoking copy constructor
    PrintBooks(book1); // case 2
return 0;
};


/* 
! 3 situations where copy constructor is invoked:
case 1. When we create a new object based on already existing object.
case 2. When compiler is creating temporary objects (Passing an object to a function by value).
case 3. When you're returning an object from a fun but only when you're returning object by value as well.
*/