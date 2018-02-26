#include <iostream>
using namespace std;
//function used to searxh for a certain key in the array
int search(int arr[],int size, int key){
	for(int j=0; j<size; j++)
	{//loops through each value
		if(key== arr[j])
		{
			return j;//returns placement
		}

	}
	return -1;
}


int main(){
	int size=0;
	int values=0;
	int key=0;
	cout<< "Enter the size of the array: ";
	cin>>size;//user input for size
	if (size<0)
	{
		cout<<"ERROR: you entered an incorrect value for the array size!"<< endl;
		return 0;//loophole if user entersout of bounds value
	}
	int* arr =new int[size];//declares new array
	cout<<"Enter the numbers in the array, seperated by a space, and press enter: ";
	
	int i=0;
	while(i<size)
	{
		cin>> values;//takes in user iinput values
		arr[i] = values;//stores in array
		i++;
	}
	cout<<"Enter a number to search for in the array: ";
	cin>>key;//stores user input for key value
	
	int result = search( arr, size, key);//calls other function
	if(result>=0)
	{
		cout<<"Found value ";
		cout<<key;
		cout<<" at index ";
		cout<<result;
		cout<<" which took ";
		cout<< result+1;
		cout<<" checks."<<endl;
	}else{
		cout<<"Nothing found." <<endl;
	}
	
	if(result<(size)/2)//if index is found within the first half of array then best case otherwise worst case
			   // if found in the middle nothing is printed here
	{
		cout<<"We ran into the best case scenario!"<<endl;
	}else if(result>(size)/2){
		cout<<"We ran into the worst case scenario!"<<endl;
	}else{
		cout<<"";
	}
}
