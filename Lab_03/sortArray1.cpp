#include <iostream>
using namespace std;

//ascending with mini algo
//this function sorts out the array in ascending 
int sortSelection(int array[], int size){
	for (int startIndex = 0; startIndex < size; ++startIndex)
  	{//using smallest index
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
			{
				smallestIndex = currentIndex;
			}
		}

	swap(array[startIndex], array[smallestIndex]);
	}
	
        cout<<"This is the sorted array in the ascending order: ";
	for (int index = 0; index < size; ++index)
        	{
                	cout<<array[index]<<" ";//prints
        	}

	return 0;
}




int main(){
	int size=0;
	int values=0;
	cout<<"Enter size of the array: ";
	cin>> size;//user input
	if(size<0)
	{
		cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
		return 0;//loophole or user enering incorrect input(out of bounds)
	}
	int* array =new int[size];
	cout<<"Enter the numbers in the array, seperate by a space, and press enter: ";
	
	int i=0;
	while(i<size){
		cin>> values;//user input
		array[i] = values;
		i++;
	}

	int result = sortSelection(array, size);//calls other function and stores as int
	cout<< ""<<endl;
	cout<<"The algorithim selected the minimum for the traverse of the array."<<endl;

return 0;
}
