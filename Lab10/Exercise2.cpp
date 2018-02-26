#include<iostream>
#include "LinkedList_char.h"
#include "LinkedList_char.cpp"
#include "Queue_char.h"
#include "Queue_char.cpp"
using namespace std;
int main ()
{
    
    Queue_char anotherQueue;
    
    cout << "Function Call \tOutput \tFront Queue Rear \n";					//printing out the title
    
    ///CREATES TABLE USING TABS
    
    cout << "dequeue()\t";
    try
    {
        
        cout<< anotherQueue.dequeue();
    }
    catch(int e)
    {
        if(e == 1)
        {
            cout << "exception";
        }
    }
    
    cout << "\n";
    
    cout << "enqueue(D)\t\t" << "\t";
    anotherQueue.enqueue('D');
    anotherQueue.print();
    cout << "\n";
    
    cout << "enqueue(A)\t\t" << "\t";
    anotherQueue.enqueue('A');
    anotherQueue.print();
    cout << "\n";
    
    cout << "dequeue()\t";
    try
    {
        
        cout<<anotherQueue.dequeue()<<"\t\t";
    }
    catch(int e)
    {
        if(e == 1)
        {
            cout << "exception";
        }
    }
    anotherQueue.print();
    cout << "\n";
    
    cout << "size()\t\t" << anotherQueue.size()<< "\t\t";
    anotherQueue.print();
    cout << "\n";
    
    cout << "enqueue(D)\t\t" << "\t";
    anotherQueue.enqueue('D');
    anotherQueue.print();
    cout << "\n";
    
    cout << "isEmpty()\t" << anotherQueue.isEmpty()<< "\t\t";
    anotherQueue.print();
    cout << "\n";
    
    cout << "front()\t\t" << anotherQueue.front() << "\t\t";
    anotherQueue.print();
    cout << "\n";
    
    cout << "enqueue(T)\t\t" << "\t";
    anotherQueue.enqueue('T');
    anotherQueue.print();
    cout << "\n";
    
    cout << "front()\t\t" << anotherQueue.front() << "\t\t";
    anotherQueue.print();
    cout << "\n";
    
    return 0;
}
