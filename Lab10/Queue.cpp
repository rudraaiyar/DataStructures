#include "LinkedList.h"
#include "Queue.h"
#include <iostream>
//calls :: from header
using namespace std;

Queue:: Queue(): LinkedList()			//default constructor that does nothing
{
};

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
    if(isEmpty())
    {
        throw 1;
    }
    
        int ret = first->val; // save the value of first item
        removeFromFront();    // remove the front node
        return ret;           // return the value of the first item
}

int& Queue::front()
{
    
    if (isEmpty())
    {
        throw 2;
    }
    return (first->val);

}
