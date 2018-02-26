#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;


int checkArraySort(string arr[], int array_size)
{
	bool dec=true; //bool
	bool asc=true; //bool

	for(int i=0; i <array_size-1;i++) //goes through everything
	{
		if(arr[i]>arr[i+1])  //if dec then set asc to false
		{
			asc=false;
		}
		if(arr[i]<arr[i+1])  //if asc set dec to false
		{
			dec=false;
		}
	}
	if (dec==true)      //print to respective if/else conditions
        {
                cout<<"The array is sorted in decending order"<<endl;
		return -1;
        }
        else if(asc==true)
        {
                cout<<"The array is sorted in ascending order"<<endl;
		return 1;        
	}
        else
        {
                cout<<"The array is not sorted."<<endl;
		return 0;
        }
}
int main()
{
	int array_size=100;
	ifstream myfile_in;            //define myfile for input (read)
	string word;
	
	myfile_in.open("words_in.txt");  //open file

	
	string* arr= new string[array_size];//array memory allocation
	
	int i =0;

	while(myfile_in>>word)
	{	
		arr[i]=word;		//stores in array
		i++; //iterations
	}
		
	myfile_in.close();             //close input file
	
 	checkArraySort(arr, array_size); //calls function

return 0;

}
