#include <iostream>
#include "DynIntStack.h"
using namespace std;

//************************************************** 
// Destructor * 
// This function deletes every node in the list. * 
//**************************************************

DynIntStack::~DynIntStack()
{
    StackNode *nodePtr = nullptr, *nextNode = nullptr;

    //Position nodePtr at the top of the stack
    nodePtr = top;

    //Traverse the list deleting each node
    while (nodePtr != nullptr)
    {
        nextNode = nodePtr->next
        delete nodePtr
        nodePtr = nextNode;
    }
}

//*************************************************
// Member function push pushes the argument onto *
// the stack. *
//*************************************************

void DynIntStack::push(int num)
{
    StackNode *newNode = nullptr;       //pointer to a new node

    //Allocate a new node and store num there. 
    newNode = new StackNode;
    newNode->value = num;

    //Of there are noe nodes in the list make newNode the first node
    if (isEmpty())
    {
        top = newNode;
        newNode->next = nullptr;
    }
    else //otherwise, insert NewNode before top
    {
        newNode->next = top;
        top = newNode;
    }
}

//*****************************************************
// Member function pop pops the value at the top *
// of the stack off, and copies it into the variable *
// passed as an argument. *
//*****************************************************

void DynIntStack::pop(int &num)
{

    StackNode *temp = nullptr; // Temporary pointer

    if (isEmpty())
    {
        out << "The stack is empty.\n"; 

    }
    else // pop value off top of stack
    {
        num = top->value;
        temp = top->next; delete top;
        top = temp;
    }
}

//***************************************************** 
// Member function isEmpty returns true if the stack * 
// is empty, or false otherwise. * 
//*****************************************************
bool DynIntStack::isEmpty() 
{
    bool status;
    if (!top)
    status = true;
    else
    status = false;
    return status; 
}