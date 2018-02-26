#include <iostream>
using namespace std;

int sortArr(int array[], int size, int order)
{	

	if(order==1)
	{//if descending
                cout<<"This is the array in the decending order: ";// sort in descending
                int temp;//placeholder
 		for(int i=0;i<size;i++)
                {
                	for(int j=0;j<size;j++)
                        {
                        	if(array[i]>array[j])
                                {
                                	temp = array[i];
                                        array[i] = array[j];
                                        array[j] = temp;
                                }
                        }
                }
                //Print the array.
                for(int i=0;i<size;i++)//prints
                {
                        cout<<array[i]<< " ";
                }
		cout<<""<<endl;
        }else
	{//ascending
		int temp;//placeholder
                cout<<"This is the sorted array in the ascending order: ";
                //sort the array
                for(int i=0;i<size;i++)
                {
                	for(int j=0;j<size;j++)
                        {
                        	if(array[i]<array[j])
                                {
                                	temp = array[i];
                                	array[i] = array[j];
                                	array[j] = temp;
                                }
                	}
                }
                //Print the array.
                for(int i=0;i<size;i++)
		{
                	cout<<array[i]<<" ";
		}
		cout<<""<<endl;
	}
	return 0;
}


int main()
{
	int size=0;
        int values=0;
	int order=0;
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
	cout<<"Sort in ascending (0) or descending (1) order: ";
	cin>>order;
        int result = sortArr(array, size, order);//calls other function
	return 0;



}
