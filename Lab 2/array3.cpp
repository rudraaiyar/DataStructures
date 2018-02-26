#include <iostream>
using namespace std;

int main(){
	cout<< "Enter the size of a 2D array: ";
	int size;
	cin>> size;
	
	while(size <1 || size >10)
	{
	cout<< "ERROR: Enter 1-10.";
	return 0;
	}
	
	int x =0;
	int arr[size][size];
	
	
	for(int i=0; i<size; i++){
		cout<< "Enter the values in the array for row ";
		cout<< i+1;
		cout<< ", seperate by a space, and press enter: ";

		for(int j=0; j<size; j++){
		
			cin >> arr[i][j];
			if(arr[i][j] <0){
				x= x+1;
			}
		}
	}
	
	if(x==0){
		cout<< "All values are non-negative."<<endl;
	}else{
		cout<<"There are ";
		cout<<x;
		cout<<" negative values!"<<endl ;
	}	
}
