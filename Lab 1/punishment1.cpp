 #include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the number of line for the punishment: ";
	int punishment;
	cin>>punishment;
	if (punishment<0){
		cout<<"You entered an incorrect number value for the number of lines."<<endl;
		return 0;
	}else{
		for(int i=0;i<punishment;i++){ 
		cout<<"I will always use object oriented programming. ";
		}
	}
}
