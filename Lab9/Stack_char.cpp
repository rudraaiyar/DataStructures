#include "Stack_char.h"
#include <iostream>
using namespace std;

Stack_char:: Stack_char(): LinkedList_char()			//default constructor that does nothing
{
}

Stack_char :: ~Stack_char() 				//destructor that does nothing
{
}

void Stack_char:: push (char valueToPush)		//inserts a new element( value) at the front of the stack
{
    insertAtFront(valueToPush);
}

char Stack_char :: pop()				//removes the first element of the stack, and returns the value of the element that was popped
{
    int temp = first -> val;
    removeFromFront();
    return temp;
}

char &Stack_char:: top()				//returns a reference to the top element of the stack
{
    return first->val;
}