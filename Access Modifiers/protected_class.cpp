#include <bits/stdc++.h>
using namespace std;

class Parent { // base class
	protected:
	int student_id;
	
};
class Child : public Parent  // derived class from public base class
{
	public:
	void setId(int id)
	{
		student_id = id;	
	}
	
	void displayId()
	{
		cout << "Student Id is: " << student_id << endl;
	}
};

int main() {
	Child obj1;
	obj1.setId(81);
	obj1.displayId();
	return 0;
}
