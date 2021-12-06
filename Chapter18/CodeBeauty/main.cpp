#include <iostream>
using namespace std;

class Node
{
    public:
        int value;  //Will hold the value of the element
        Node* Next; //Pointer that points to the next node/element
};

void printList(Node *num);
void insertAtTheFront(Node**head, int newValue);
void insertAtTheEnd(Node**head, int newValue);
void insertAfter(Node* previous, int newValue);

int main()
{
    Node* head = new Node;    //Dynamically allocate a new node. This one is the 1st node
    Node* second = new Node;  //Dynamically allocate a new node. This one is the 2st node
    Node* third = new Node;   //Dynamically allocate a new node. This one is the 3st node

    head->value = 1;     //head node will have value 1
    head->Next = second; //This holds the address of the second element

    second->value = 2;      //head node will have value 2
    second->Next = third;   // Holds addreess of third element

    third->value = 3;       //head node will have value 3
    third->Next = nullptr; //Becuase it's the last. It will hold a nullptr value = 0

    //insertAtTheFront(&head, -1);
    //insertAtTheEnd(&head, 4);
    insertAfter(head, -1);
    printList(head);


    return 0;
}

void printList(Node *num)
{
    while (num != nullptr) //While the element does not hold the address of null
    {
        cout << num->value << endl; //Print value value
        num = num->Next;    //Then point to the next value
    }
}

void insertAtTheFront(Node**head, int newValue)
{
    //1. Prepare a newNode
    Node* newNode = new Node;   //Dinamaclly alocate a new node
    newNode->value = newValue;  //Set the value of the new node to what the user passes into the function

    //2. Put it in front of current head 
    newNode->Next = *head;  //Now the newNode is pointing to head of the linked list 

    //3. Move head of list to point to the newNode. This is why we passed head as a refference in the function call.. ** means pointer to pointer
    *head = newNode;    //set the newNode as the head
}

void insertAtTheEnd(Node**head, int newValue)
{
    //1. Prepare a newNode
    Node* newNode = new Node;
    newNode->value = newValue;
    newNode->Next = nullptr;    //Because it the last element it will need to point to 0

    //2. If linked list is empty, newNode will be a head node
    if (*head == nullptr)
        *head = newNode;

    //3. Find the last node
    Node* last = *head; //Create a pointer to travel through the elements
    while (last->Next != nullptr) //while the address of last which is currently set to home does not equal nullptr
    {
        last = last->Next; //Move the last element to the next node until the last is storing the last nutllptr node
    }
    //4. Insert newNode after last node (at the end)
    last->Next = newNode; //the last node will now point to the new node we have created

}

void insertAfter(Node* previous, int newValue)
{
    //1. Check if previous node is nullPtr
    if (previous == nullptr)
    {
        cout << "Previous can not be null";
        return;
    }

    //2. Prepare a newNode.
    Node* newNode = new Node;   //Allocate a new node
    newNode->value = newValue;

    //3. Insert newNode after previous
    newNode->Next = previous->Next;//First point to what the previous point was pointing to.not break the connection. Ex A is pointng to B, you Create C. You first need to point to B then point A to C
    previous->Next = newNode;   //Node A will now point to Node C
}