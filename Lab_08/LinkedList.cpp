#include <iostream>
#include "LinkedList.h" //calls header file

using namespace std;

LinkedList :: LinkedList()
{
    first = NULL; //intializing
    last = NULL;
} // Constructor

LinkedList :: ~LinkedList()
//deletes the entire list if not already empty.
{
    clear();
    //calls function clear
}   // Destructor

void LinkedList :: insertAtBack(int valueToInsert)
//inserts a new element (i.e., a new Node) at the end of the list.
{
    Node*temp = new Node();
    //new node for temp
    temp -> val = valueToInsert;
    //sets to value of insertation
    
    if (first == NULL)
    {
        first = temp;
        // if first is null set to temp
    }
    if(last == NULL)
    {
        last = temp;
        //if last is null set to temp
    }
    else
    {
        last ->  next =temp;
        last = temp;
        //set last to temp
    }
}

bool LinkedList :: removeFromBack()
//removes the last element of the list. The function should return true if an element was successfully removed and false otherwise.
{
    Node*temp = first;
    if (last == NULL )
    {
        return false;
    }
    if (first == last )
    {
        //if the first and the last are the same then it will delete bc same spot
        delete first;
        first = NULL;
        last = NULL;
        return true;
    }
    
    while(temp -> next != last)
    {
    //checking to see if it is the last and if it not then continue to go to the back and once it reaches it will remove that node
        temp = temp -> next;
    }
    delete last;
    //will delete the last node once it has been found
    last = temp;
    return true;
}

void LinkedList :: print()
//prints
{
    if (first != NULL )
    {
        Node*temp = first;
        while (temp != last)
        {
            cout << temp->val << ",";
            //print current node
            temp = temp->next;
        }
        cout<<temp->val;
    }
    else cout<<"";
}

bool LinkedList :: isEmpty()
//returns whether or not the list is empty (true if it is empty, false otherwise).
{
    if ( first == NULL )
    {
        //checking if it is already empty or not
        return true;
    }
    else
    {
        return false;
    }
}

int LinkedList :: size()
//returns the size of the list. You will need to navigate through the entire list and count how many elements are in the list.
{
    Node *temp;
    int size = 1;
    if (first == NULL && last == NULL )
    {
        // if the first and last node are the same then it means that the size the same
        return 0;
    }
    else
    {
        temp = first;
        while (temp != last)
        {
            temp = temp-> next;
            //while the temp is not equal to the last, move to the next and add the counter to find out the size
            size++;
        }
    }
    return size;
}

void LinkedList :: clear()
//same function as the Destructor, deletes the entire list if not already empty.
{
    while (!isEmpty())
    {
        removeFromBack();
        //you can either remove from the back or the front
    }
}
void LinkedList :: insertAtFront (int valueToInsert)
//this function is going to insert a new node at the beginning of the linked list
{
    Node*temp = new Node();
    temp -> val = valueToInsert;
    if (first == NULL)
    {
        first = temp;
    }
    if (last == NULL)
    {
        last = temp;
    }
    else
    {
        //same as the remove from back
        temp -> next = first;
        first = temp;
    }
}

bool LinkedList :: removeFromFront()
{
    //remove a node from the beginning of the linked list
    Node*temp = first;
    if (first == NULL )
    {
        //first node if empty, then the list is empty: return false
        return false;
    }
    if (first == last )
    {			//if first is the last, then delete either because they are the same
        delete first;
        first = NULL;
        last = NULL;
        return true;
    }
    temp = temp -> next;
    //set the temp equal to the temp of next and then delete the first
    delete first;
    //have the temp point to the new first before you delete
    first = temp;
    //you first is now your new temp pointer
    return true;
}