#ifndef STACK_H //header guard
#define STACK_H

#include "LinkedList.h"
using namespace std;

class Stack : public LinkedList
{
public:
    Stack();				//constructor
    ~Stack();				//destructor
    void push(int valueToPush);		//adds a value to the top of the stack
    int pop();				//removes a value from the top of the stack
    int& top();				// returns a reference to the top of the stack
    
};

#endif