#include "LinkedList_Char.h"

//Default Constructor
LinkedList :: LinkedList()
{
    first = NULL;
    last = NULL;
    
}


//Destructor

LinkedList :: ~LinkedList()
{
    clear();
    
}


//insertAtBack Function: inserts an element in the back
void LinkedList :: insertAtBack(char newElement)
{
    Pointer temp  = new Node;        
    temp -> val  =  newElement;    
    
    
    
    if(first == NULL)
    {
        first = temp;                
        
    }//closes if-statement
    
    
    if(last == NULL)
    {
        last = temp;                 
    }
    
    /*If a linked list already exists*/
    else
    {
        last -> next = temp;         
        last = temp;                 
    }
    
    
    
}

//removeFromBack, removes element from the back
char  LinkedList :: removeFromBack()
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
    delete last;                        
    last = temp;                     
    
    return temp -> val;
    
    
}



//Checks if Linked List is empty or not
bool LinkedList :: isEmpty()
{
    
    if (first == NULL)              
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
        
        while(newNode != last)          
        {
            newNode = newNode-> next;   
            counter++;                  
            
        }//closes while loop
    }
    return counter;                 

void LinkedList :: clear()
{
    
    if(!isEmpty())                  
        removeFromBack();
    }
    
}


void LinkedList :: insertAtFront(char insertElement) //Inserts a new element to the front of the Linked List
{
    Pointer newNode = new Node;     
    newNode -> val = insertElement; 
    
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
        first = newNode;                
    
    
} 

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
