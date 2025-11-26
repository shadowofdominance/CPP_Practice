#include <iostream>
using namespace std;

class Node
{
public:
    int Value;
    Node *Next;
};

void PrintLinkedList(Node *headFirst)
{
    while (headFirst != NULL)
    {
        cout << headFirst->Value << endl;
        headFirst = headFirst->Next;
    }
}
void InsertAtBeginning(Node **head, int newValue)
{
    // Prepare a new node
    Node *newNode = new Node();
    newNode->Value = newValue;

    // Put the new node in front of the current head
    newNode->Next = *head;

    // Move head of the list to point to the newNode
    *head = newNode;
}
void InsertAtEnd(Node **head, int newValue)
{
    // Prepare a new Node
    Node *newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;

    // If linked list is empty then newNode will be head Node
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // Find the last node
    Node *last = *head;
    while (last->Next != NULL)
    {
        last = last->Next;
    }

    // Insert the newNode after the last node(in the end)
    last->Next = newNode;
}

void InsertAfter(Node *previousNode, int newValue)
{
    // Check if previous node is not NULL, because if it is, then its not pointing to anything meaning that is the last node!
    if (previousNode == NULL)
    {
        cout << "Previous cannot be NULL";
        return;
    }

    // Prepare a new node
    Node *newNode = new Node();
    newNode->Value = newValue;

    // Insert a new node after the previousNode
    newNode->Next = previousNode->Next;
    previousNode->Next = newNode;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->Value = 1;
    head->Next = second;

    second->Value = 2;
    second->Next = third;

    third->Value = 3;
    third->Next = NULL;

    InsertAtBeginning(&head, -1);
    PrintLinkedList(head);
    return 0;
}