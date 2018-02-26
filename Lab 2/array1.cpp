#include <iostream>
using namespace std;

bool isAscending(int arr[], int size){
	for(int i=0; i<size-1; i++){
		if (arr[i] > arr[i+1]){
			return false;
		}
	}
	return true;
}

int main()
{
	int arraylength =0;
	int number = 0;

	cout<< "Enter the size of the array: ";
	cin>> arraylength;
	if(arraylength < 1){
		cout<< "ERROR: you entered an incorrect value for the array size!" <<endl;
	}
	int* arr = new int[arraylength];
	cout<<"Enter the numbers int the array, separated by a space, and press enter: ";

	int i=0;
	while(i< arraylength){
		cin>> number;
		arr[i] = number;
		i++;
	};

	if( isAscending(arr, arraylength)){
		cout<< "This IS an increasing array!" <<endl;	
	}
	else{
		cout<< "This is NOT an ascending array!" <<endl;
	}
	for(int i=0; i<arraylength; i++){
		cout << arr[i];
		if((i+1) == arraylength){
			cout << ".  ";
		}else cout << " ";
	}
return 0;

}
