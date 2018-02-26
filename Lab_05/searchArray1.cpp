#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int binarySearchR(string arr[], string key, int imin, int imax)
{
  						// test if array is empty
  	if (imax < imin)
    						// set is empty, so return value showing not found
    		return -1;
  	else
    	{
      						// calculate midpoint to cut set in half
      		int imid = (imin+ imax)/2;
     
      						// three-way comparison
      		if (arr[imid] > key)
        					// key is in lower subset
        		return binarySearchR(arr, key, imin, imid - 1);
      		else if (arr[imid] < key)
        					// key is in upper subset
        		return binarySearchR(arr, key, imid + 1, imax);
      		else
        					// key has been found
        		return imid;
    }
}

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

}
int main()
{	
	int imin =0;
	int array_size=3;
	int imax= array_size;
	string key;
	ifstream myfile_in;            //define myfile for input (read)
	string word;
    
	cout<<"Enter a key to search for in the array: ";
	cin>>key;			//stores user input for key value
	
	myfile_in.open("words_in.txt");  //open file

	
	string* arr= new string[array_size];//array memory allocation
    
	int i =0;

	while(myfile_in>>word)
	{
		arr[i]=word;//stores in array
		i++; //iterations
	}
		
	myfile_in.close();             //close input file
    int result=binarySearchR(arr,key, imin,imax);
    
        if(result != -1)
        {
                cout<<"Found key ";
                cout<<key;
                cout<<" at index ";
                cout<<result<< "."<<endl;
        }
        else
        {
                cout<<"The key "<<key<<" was not found in the array!" <<endl;
        }	
 	checkArraySort(arr, array_size);
    
    /*string arr[] = {"apple", "hello", "starf","zebra"};
    int result = binarySearchR(arr,key, 0,3);
    cout << result;*/
	return 0;
}

