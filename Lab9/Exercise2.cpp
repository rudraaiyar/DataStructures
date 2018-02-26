#include<iostream>
#include "LinkedList_char.h"
#include "LinkedList_char.cpp"
#include "Stack_char.h"
#include "Stack_char.cpp"
using namespace std;
int main ()
{
    
    Stack_char anotherStack;
    
    cout << "Function Call \tOutput \tStackContent \n";					//printing out the title
    
    cout << "isEmpty()\t" << boolalpha <<  anotherStack.isEmpty() << "\t"; //use of boolalphas
    //boolalpha is used to convert 0 and 1 to true and false
    anotherStack.print();
    cout << "\n";
    
    cout << "push(A)\t\t" << "\t";
    anotherStack.push('A');		// push is void, you have to push variable on another line
    anotherStack.print();
    cout << "\n";
    
    cout << "push(Y)\t\t"<< "\t"; //push here too
    anotherStack.push('Y');
    anotherStack.print();
    cout << "\n";
    
    cout << "size()\t\t" << anotherStack.size()<< "\t";
    anotherStack.print();
    cout << "\n";
    
    cout << "pop()\t\t" << anotherStack.pop()<< "\t";
    anotherStack.print();
    cout << "\n";
    
    cout << "isEmpty()\t" << anotherStack.isEmpty()<< "\t";
    anotherStack.print();
    cout << "\n";
    
    cout << "push(D)\t\t"<< "\t";//as aforementioned you have to have the push line on another line otherwise it wont work because push is void
    anotherStack.push('D');
    anotherStack.print();
    cout << "\n";
    
    cout << "top()\t\t" << anotherStack.top() << "\t";
    anotherStack.print();
    cout << "\n";
    
    cout << "push(T)\t\t" << "\t";
    anotherStack.push('T') ;
    anotherStack.print();
    cout << "\n";
    
    cout << "pop()\t\t" << anotherStack.pop() << "\t";	// pop as a cout becuase it is not void
    anotherStack.print();
    cout << "\n";
    
    return 0;
}
