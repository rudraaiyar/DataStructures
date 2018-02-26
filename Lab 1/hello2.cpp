#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"Please enter your name: ";
	getline(cin,name);
	cout<<"Welcome to CSE030, "+name+ "!" <<endl;
}
