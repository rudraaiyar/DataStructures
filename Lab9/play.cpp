#include<iostream>
#include "LinkedList_char.h"
#include "LinkedList_char.cpp"
#include "Stack_char.h"
#include "Stack_char.cpp"
using namespace std;
int main ()
{
    
    Stack_char anotherStack;

    cout << "Function Call \tOutput \tStackContent \n";

    cout << "push(R)\t\t" << "\t";
    anotherStack.push('R');		// push is void, you have to push variable on another line
    anotherStack.print();
    cout << "\n";
    
    cout << "top()\t\t" << anotherStack.top() << "\t";
    anotherStack.print();
    cout << "\n";
    
    cout << "pop()\t\t" << anotherStack.pop()<< "\t";
    anotherStack.print();
    cout << "\n";
    
    cout << "top()\t\t" << anotherStack.top() << "\t";
    anotherStack.print();
    cout << "\n";
    
    cout << "isEmpty()\t" << anotherStack.isEmpty()<< "\t";
    anotherStack.print();
    cout << "\n";
    
    cout << "push(E)\t\t" << "\t";
    anotherStack.push('E');		// push is void, you have to push variable on another line
    anotherStack.print();
    cout << "\n";
    
    
    cout << "push(N)\t\t" << "\t";
    anotherStack.push('N');		// push is void, you have to push variable on another line
    anotherStack.print();
    cout << "\n";

    cout << "top()\t\t" << anotherStack.top() << "\t";
    anotherStack.print();
    cout << "\n";

    cout << "isEmpty()\t" << anotherStack.isEmpty()<< "\t";
    anotherStack.print();
    cout << "\n";
    
    return 0;
}
