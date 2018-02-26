#include "Queue.h"
using namespace std;

Queue::Queue()
{
    // does nothing
}

Queue::~Queue()
{
    // does nothing
}

void Queue::enqueue(int value)
{
    insertAtBack(value); // call LinkedList function
}

int Queue::dequeue()
{
    if (isEmpty()) // nothing in queue to remove
    {
        throw(1);  // throw something and let main program handle error
    }
    else // could remove from queue
    {
        int ret = first->val; // save the value of first item
        removeFromFront();    // remove the front node
        return ret;           // return the value of the first item
    }
}

int& Queue::front()
{
    if(isEmpty()) // nothing in list
    {
        throw(1); // throw an error for the main program
    }
    else // could return something
    {
        return (first->val); // return value of first node
    }
}
