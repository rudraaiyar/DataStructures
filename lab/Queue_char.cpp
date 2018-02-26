#include "Queue_char.h"
using namespace std;

Queue_char::Queue_char()
{
    // does nothing
}

Queue_char::~Queue_char()
{
    // does nothing
}

void Queue_char::enqueue(char value)
{
    insertAtBack(value); // call LinkedList function
}

char Queue_char::dequeue()
{
    if (isEmpty()) // nothing to remove
    {
        throw(1); // throw error 
    }
    else // can remove something from the queue
    {
        char ret = first->val; // save first value 
        removeFromFront();     // remove first node 
        return ret;            // return the first value
    }
}

char& Queue_char::front()
{
    if(isEmpty()) // queue is empty
    {
        throw(1); // throw an error for the main program
    }
    else // something in queue
    {
        return (first->val); // return value of front node
    }
}
