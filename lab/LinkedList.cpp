#include "LinkedList.h"

LinkedList :: LinkedList()
{
    first = NULL;
    last = NULL;
    
}

LinkedList :: ~LinkedList() //Destructor
{
    clear();
    
}

void LinkedList :: insertAtBack(int newElement) //insertAtBack Function: inserts an element in the back
{
    Pointer temp  = new Node;        //new node called "connect"
    temp -> val  =  newElement;    //I want to store the insertionElement inside my node's value box.
    
    
    if(first == NULL)
    {
        first = temp;                
    }
    
    if(last == NULL)
    {
        last = temp;                  
    }
    
    
    else
    {
        last -> next = temp;         
        last = temp;                 
    }
    
    
    
}

//removeFromBack, removes element from the back
int  LinkedList :: removeFromBack()
{
    Pointer temp = first;
    
    if(first == NULL)
    {
        return 0;
    }
    
    if (first == last)
    {
        delete first;
        first = 0;
        return 0;
    }
    
    
    while( temp ->next != last)      
    {
        temp = temp -> next;      
    }
    temp  = last;
    delete last;                        //we have reached the last node in the list, delete it
    last = temp;                     //The newly updated newNode(in the while loop) will now be the last node in the linked list
    
    return temp -> val;

    
}



//Checks if Linked List is empty or not
bool LinkedList :: isEmpty()
{
    
    if (first == NULL)              //If the List starts to Null to begin with, then that possibly means that arent any elements inside the list
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Returns the size of the Linked List
int LinkedList :: size()
{
    int counter = 1;                    //Will be used to count
    
    Pointer newNode;        //Create a new node that takes in the elements of the first node
    
    if( first == NULL && last == NULL)
    {
        return 0;
    }
    
    else
    {
        newNode = first;
        
        while(newNode != last)          //Until we reach the end of the linked list, which will be pointed to NULL, count how many nodes are in the list
        {
            newNode = newNode-> next;   //Make sure to keep updating the newNode to be whatever it was pointing to
            counter++;                  //Counts the amount of times this sequence occurs
            
        }//closes while loop
    }
    return counter;                 //returns the amount of incrementations done within the while loop
}//closes size() function

//Clears the Linked List
void LinkedList :: clear()
{
    
    if(!isEmpty())                  //If linked list is not empty, we start removing elements from the back
    {
        removeFromBack();
    }
    
}


void LinkedList :: insertAtFront(int insertElement) //Inserts a new element to the front of the Linked List
{
    Pointer newNode = new Node;     //create a new node
    newNode -> val = insertElement; //put in a value within the node. This value is the insertion element
    
    
    if(first == NULL)
    {
        first = newNode;
    }
    
    if(last == NULL)
    {
        last = newNode;
    }
    
    else
    {
        newNode -> next = first;        
        first = newNode;                //The first element is now connect node
    }
    
    
} //closes insertAtFront() function

bool LinkedList :: removeFromFront()
{
    
    Pointer newNode = first;
    
    if( first == NULL)              
    {
        return false;
    }
    
    if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
        return true;
    }
    else
    {
        newNode  = first -> next;   
        delete first;               
        first = newNode;            
        return true;
    }
    
    
    
}//closes removeFromFront() function



void LinkedList :: print()
{
    
    
    if (first != NULL)
    {
        Pointer temp = first;
        
        while( temp != last)
        {
            cout<< temp -> val <<"\n";
            temp = temp -> next;
        }
        
        cout<<temp -> val;
    }
    
    else
    {
        cout<<"Queue empty.";
    }

}



