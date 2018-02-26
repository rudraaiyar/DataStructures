#include <iostream>
using namespace std;


string reverse(string s){
	string result ="";
	for (int i=0;i<s.length();i++){
		result= s[i]+result;
	}
return result;
}

int main()
{
	cout<< "Enter the string to reverse: ";
	string reverseme;
	cin>> reverseme;
	reverseme = reverse(reverseme);

	cout<<"The reverse of the string is: " +  reverseme <<endl;
}
