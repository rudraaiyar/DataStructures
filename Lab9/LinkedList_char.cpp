#include "LinkedList_char.h"
using namespace std;
#include <iostream>

//copied from lab 8, same idea

LinkedList_char::LinkedList_char()			// this is the first default constructor that just sets the first and last to NULL value
{
    first = NULL;
    last = NULL;
}

LinkedList_char::~LinkedList_char()			// this is the  destructor class that just emptys the list after we are done using it
{
    clear ();
}

void LinkedList_char::insertAtBack (char initialValue)// this is the function that will insert a new node at the back of the linked list
{
    Node*temp = new Node();
    temp -> val= initialValue;
    
    if (first == NULL)
    {
        first = temp;
    }
    if (last == NULL)
    {
        last = temp;
    }
    else {
        last -> next = temp;		//last of next is the next after the last node, which is now your temp
        last = temp;			//temp is now a new node at the back so the last is not your temp
    }
}

bool LinkedList_char::removeFromBack()		//this is the function that will remove a node from the back of the linked list
{
    Node*temp = first;
    if (last == NULL ) {
        return false;
    }
    if (first == last ) {			//if the first and the last are the same then it will delete either because they are at the same spot and return true
        delete first;
        first = NULL;
        last = NULL;
        return true;
    }
    
    while(temp -> next != last){		//it is checking to see if it is the last and if it not then i will continue to go to the back and once it reaches there then it will remove that node
        temp = temp -> next;
    }
    delete last;			//this is the delete portio that will delete the last node once it has been found
    last = temp;
    return true;
}

void LinkedList_char::print ()			//this is the function that will print everything from the LinkedList.h file
{
    if (first != NULL ) {
        Node*temp = first;
        while (temp != last){
            cout << temp->val << ",";	//its printing the current values within each node
            temp = temp->next;
        }
        cout<<temp->val;
    }
    else cout<<"";
}

bool LinkedList_char::isEmpty ()			//this function is only checking to see if the linked list is empty or not
{
    if ( first == NULL ){			//checking to see if it is already empty or not
        return true;
    }
    else {
        return false;
    }
}

int LinkedList_char::size ()				//this function is checking the size of the linked list
{
    Node *temp;
    int counter = 1;			//we have to set it to the value of 1 becuase it is already pointing to the first node so if it moves then it will not consider that first value size and it will return the value as size-1
    if (first == NULL && last == NULL ){	// if the first and last node are the same then it means that the size the same
        return 0;			//which is why it would return the value of 0
    }
    else
    {
        temp = first;
        while (temp != last){
            temp = temp-> next;		//while the temp is not equal to the last, we will continue to move to the next and add the counter to find out the size
            counter++;
        }
    }
    return counter;				//return the counter
    
}

void LinkedList_char :: clear()			//this function will clear the entire linked list if it not already empty
{
    while (!isEmpty()){
        removeFromBack();		//you can either remove from the back or the front
    }
}


void LinkedList_char :: insertAtFront (char initialValue)// this function is going to insert a new node at the beginning of the linked list
{
    Node*temp = new Node();
    temp -> val = initialValue;
    if (first == NULL){
        first = temp;
    }
    if (last == NULL) {
        last = temp;
    }
    else {					//for this function it is the same as the remove from back, except we do not have to check if it is the front becuase it is already pointing at the front
        temp -> next = first;
        first = temp;
        
        
    }
}

bool LinkedList_char :: removeFromFront(){		//this function is going to remove a node fro mthe beginning of the linked list
    Node*temp = first;
    if (first == NULL ) {			//if the first node if empty, then the list is empty therefore it would return false
        return false;
    }
    if (first == last ) {			//if first is the last, then delete either becuase they are the same and set each to the default values
        delete first;
        first = NULL;
        last = NULL;
        return true;
    }
    temp = temp -> next;		//set the temp equal to the temp of next and then delete the first
    delete first;			//you have to have the temp point to the new first before you delete
    first = temp;			//you first is now your new temp pointer
    return true;			//return true
}