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