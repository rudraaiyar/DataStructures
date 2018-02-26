#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the number of lines for the punishment: ";
	int punishment;
	cin>>punishment;
		if(punishment<0){
			cout<<"You entered an incorect value for the number of lines"<<endl;
			return 0;
		}else{

			cout<<"Enter the line for which we want to make a typo: ";
			int typo;
			cin>>typo;
				for(int j=0; j<punishment;j++){
					if (typo> punishment || typo<0){
 						cout<<"You entered an incorrect value for the line typo. ";
						return 0;
					}else if(j+1==typo ){
						cout<<"I will always use object oriented programing. ";
					}else{
						cout<<"I will always use object oriented programming. ";
					}
				}
		}
	return 0;
}
