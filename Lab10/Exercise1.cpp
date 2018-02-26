#include <iostream> //imports
#include "Queue.h"
#include "Queue.cpp"
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main ()
{
    Queue firstQueue;
    
    try
    {
    
        firstQueue.dequeue();
    }
    catch(int e)
    {
        if(e == 1)
        {
            cout << "exception";
        }
    }
    //create a queue of at least 10 elements in your main program
    
    firstQueue.enqueue(0);		//call push to insert integer to the stack
    firstQueue.enqueue(1);
    firstQueue.enqueue(2);
    firstQueue.enqueue(3);
    firstQueue.enqueue(4);
    firstQueue.enqueue(5);
    firstQueue.enqueue(6);
    firstQueue.enqueue(7);
    firstQueue.enqueue(8);
    firstQueue.enqueue(9);
    firstQueue.enqueue(10);
    
    cout<<""<<endl;
    try //prints frist in queue
    {
        
        cout << firstQueue.front();
    }
    catch(int e)
    {
        if(e == 2)
        {
            cout << "exception";
        }
    }

    try
    {
        
        firstQueue.dequeue();
    }
    catch(int e)
    {
        if(e == 1)
        {
            cout << "exception";
        }
    }
    
    cout << endl;
    
    firstQueue.print();
    
    cout << endl;
    cout << "Is the Queue Empty?: " << firstQueue.isEmpty() << endl;		//check to see if the stack is empty
    
       cout << "There are " << firstQueue.size() << " elements." << endl;			//how many elements there are
    
    //check again if it is empty
    
    return 0;
}