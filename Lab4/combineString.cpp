#include <iostream>
using namespace std;


string combineStr(int count, string str)
{//creates new function
	string final;//resulting variable
	for(int i=0; i<count;i++)//loops each amount of counts
	{
		final += str;//adds strings together to final
	}
	
	return final;//returns resulting string
}


int main()
{//creates main function
	string str;//creates string to be repeated
	int count;//how many counts 
	while(true)//loops forever unless 0 is entered in count
	{
		cout<< "Enter a string: ";
		cin>>str;//takes user input of string
		cout<< "Enter a number of times:";
		cin>>count;//takes user input of counts
		if(count==0)
		{//oop hole is 0 is entered program quits
			return 0;
		}
		cout<<combineStr(count, str);//returns other function
		cout<<""<<endl;
	}
}
