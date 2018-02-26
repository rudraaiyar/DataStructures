#include <iostream> //imports
#include "Stack.h"
#include "Stack.cpp"
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main ()
{
    Stack firstStack;
    Stack secondStack;
    //create a stack of at least 10 elements in your main program
    
    firstStack.push(0);		//call push to insert integer to the stack
    firstStack.push(1);
    firstStack.push(2);
    firstStack.push(3);
    cout << firstStack.top() << "+" ; //print +
    firstStack.push(4);
    firstStack.push(5);
    firstStack.push(6);
    firstStack.push(7);
    cout << firstStack.top() << "="; //print =
    firstStack.push(8);
    firstStack.push(9);
    firstStack.push(10);
    cout << firstStack.top();
    
    cout << endl;
    
    firstStack.print();
    
    cout << endl;
    cout << "Is the Stack Empty?: " << firstStack.isEmpty() << endl;		//check to see if the stack is empty
    
    if (firstStack.isEmpty() == false) {
        cout<< firstStack.pop() << endl;					//if its not empty, then pop
    }
    cout << "There are " << firstStack.size() << " elements." << endl;			//how many elements there are
    
    while (!firstStack.isEmpty() ){
        cout << firstStack.pop() << endl;					//while its not empty, continue popping
    }
    
    cout << "Is the Stack Empty? " << firstStack.isEmpty() << endl;		//check again if it is empty
    
    return 0;
}