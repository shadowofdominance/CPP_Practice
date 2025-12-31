#include <iostream>
using namespace std;

class Node // Define the structure for a linked list node
{
public:
    int Value; // The value stored in the node
    Node *Next; // Pointer to the next node in the list
};

void PrintLinkedList(Node *headFirst) // Function to print the linked list
{
    while (headFirst != NULL)
    {
        cout << headFirst->Value << endl;
        headFirst = headFirst->Next;
    }
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

    PrintLinkedList(head);
    return 0;
}