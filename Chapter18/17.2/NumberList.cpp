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