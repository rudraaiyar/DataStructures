#include "LinkedList.h"
#include "Stack.h"
#include <iostream>
//calls :: from header

Stack:: Stack(): LinkedList()			//default constructor that does nothing
{
}

Stack :: ~Stack() 				//destructor that does nothing
{
}

void Stack:: push (int valueToPush)		//inserts a new element( value) at the front of the stack
{
    insertAtFront(valueToPush);
}

int Stack :: pop()				//removes the first element of the stack, and returns the value of the element that was popped
{
    int temp = first -> val;
    removeFromFront();
    return temp;
}

int &Stack:: top()				//returns a reference to the top element of the stack
{
    return first->val;
}