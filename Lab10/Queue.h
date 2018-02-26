#ifndef _QUEUE_H
#define _QUEUE_H

#include "LinkedList.h"
using namespace std;

// inherit from LinkedList of lab 9
class Queue : public LinkedList
{
public:
    Queue();                 // default constructor
    ~Queue();                // default destructor
    void enqueue(int value); // inserts element at back
    int dequeue();           // returns and removes element from front
    int& front();            // returns reference to first item
};

#endif