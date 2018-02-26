#ifndef STACK_H //guard
#define STACK_H

#include "LinkedList_char.h"
using namespace std;

class Stack_char : public LinkedList_char
{
public:
    Stack_char();				//constructor
    ~Stack_char();				//destructor
    void push(char valueToPush);		//adds a value to the top of the stack
    char pop();				//removes a value from the top of the stack
    char& top();				// returns a reference to the top of the stack
    
};

#endif