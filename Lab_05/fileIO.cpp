#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int counter=100;
	ifstream myfile_in;            //define myfile for input (read)
	string line;                   //define line of string type
	string word;
	
	myfile_in.open("words_in.txt");  //open file

	
	string* arr= new string[counter];//array memory allocation
	
	int i =0;
	ofstream myfile_out;		//declaration
    myfile_out.open("words_out.txt");//opens output file
	if(myfile_in.eof()||!myfile_in.is_open())
	{
		return 0;
	}

	while(myfile_in>>word)
	{	
		arr[i]=word;		//stores in array
		myfile_out << arr[i] << endl;	//prints in output file
		i++; //iterations
	}
	
	myfile_in.close();             //close input file

	myfile_out.close();		//close output file

	return 0;
	
}
