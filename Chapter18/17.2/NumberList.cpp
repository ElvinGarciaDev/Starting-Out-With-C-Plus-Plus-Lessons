#include <iostream>
using namespace std;
#include "NumberList.h"

void NumberList::appendNode(double num)
{
    ListNode *newNode;  //To point to a new node
    ListNode *nodePtr;  //To move through the list

    //Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = nullptr;

    //If there are no nodes in list make newNode the first node
    if (!head)
        head = newNode;
    else //otherwose, insert newNodde at the end
    {
        //initialize nodePtr to head of list
        nodePtr = head;

        //find the last node in the list.
        while (nodePtr->next)
            nodePtr = nodePtr->next;

        //insert newNode as the last node.
        nodePtr->next = newNode;
    }
}


void NumberList::dsplayList() const
{
    ListNode *nodePtr;      //To move through the list

    //position nodePtr at the head of the list
    nodePtr = head;

    //While nodeptr points to a node, traverse
    while (nodePtr)
    {
        //Display the value in this node
        cout << nodePtr->value << endl;

        //move to the next node
        nodePtr = nodePtr->next;
    }
}

void NumberList::insertNode(double num)
{
    ListNode *newNode;                  //A new node
    ListNode *nodePtr;                  //To traverse the list
    ListNode *previousNode = nullptr;   //The previous node

    //Allocate a new node and store num there
    newNode = new ListNode;
    newNode->value = num;

    //If there are no nodes in the list
    //make newNode the first node
    if (!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else
    {
        //position nodePtr at the head of list
        nodePtr = head;

        //Initialize previous to nullptr
        previousNode = nullptr;

        //Skip all nodes whos value is less than num
        while (nodePtr != nullptr && nodePtr->value < num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        //If the new node is to be the 1st in the list insert it before all other nodes
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else //otherwise insert after the previous node
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}


void NumberList::deleteNode(double num)
{
    ListNode *nodePtr;                  //To traverse the list
    ListNode *previousNode = nullptr;   //The previous node

    //if the list is empty, do nothing
    if (!head)
        return;
    
    //Determine if the first node is the one
    if (head->value == num)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        // Initialize nodePtr to head of list
        nodePtr = head;

        // Skip all nodes whose value member is
        // not equal to num.
        while (nodePtr != nullptr && nodePtr->value != num)
        {
        previousNode = nodePtr;
        nodePtr = nodePtr->next;
        }

        // If nodePtr is not at the end of the list,
        // link the previous node to the node after
        // nodePtr, then delete nodePtr.
        if (nodePtr)
        {
        previousNode->next = nodePtr->next;
        delete nodePtr;
        }
    }
}
