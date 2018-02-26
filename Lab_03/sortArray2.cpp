#include <iostream>
using namespace std;

//make this with the max algorithm
//and decend
//SMALLEST INDEX IS ACTUALLY MAXINDEX IM JUST REALLY LAZY

/*int sortSelection(int array[], int size){
	int swaps=0;//intialize swaps
	for (int lastIndex = size; lastIndex < size; ++lastIndex)
	{
		int maxIndex = lastIndex;
        	for (int currentIndex = lastIndex -1; currentIndex < size;--currentIndex)
        	{
                	if (array[currentIndex] <  array[maxIndex])
                	{
                        	maxIndex = currentIndex;
				swaps++;
                	}	
        	}	
		
        	swap(array[lastIndex], array[maxIndex]);
	
	}

	return swaps-1;
}**/

int swaps;

void swap(int array[], int indi, int indtwo){ //function that counts swaps
    int temp = array[indi];
    array[indi] = array[indtwo];
    array[indtwo] = temp;
    if(indexi != indtwo){
        // checks to see if  middle index swaps with itself (reducing ineffiecient swaps)
        swaps++; //counts swaps
    }
}

void sortSelection(int array[], int size){
    int smallestIndex;
    for (int startIndex = 0; startIndex < size - 1; startIndex++){//using smallest index
        smallestIndex = startIndex;
        for (int currentIndex = startIndex; currentIndex < size - 1; currentIndex++)
        {
            if (array[currentIndex + 1] > array[smallestIndex])
            {
                smallestIndex = currentIndex+1;
            }
        }
        
        swap(array, startIndex, smallestIndex);
    }
    
}




int main(){
        swaps = 0;
        int size;
        int values;
        cout<<"Enter size of the array: ";
        cin>> size;
        if(size<0)//loophole if user enters wrong number
        {
                cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
                return 0;
        }
        int* array =new int[size];//makes new array
        cout<<"Enter the numbers in the array, seperate by a space, and press enter: ";

        int i=0;
        while(i<size){//input values into array
                cin>> values;//takes in values
                array[i] = values;
                i++;
        }
	cout<<"This is the array in the decending order: ";// sort in descending
	
	cout << ""<<endl;
    sortSelection(array, size);//calls other function
    for(i=0;i<size;i++)//prints
    {
        cout<<array[i]<< " ";
    }
    cout << " " << endl;
        cout<<"The algorithm selected the maximum for the traverse of the array."<<endl;
	cout<<"It took "<< swaps <<" swaps to sort the array..."<<endl;

	return 0;
}
