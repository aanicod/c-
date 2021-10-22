#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};
void insertfront(Node** head_ref,int new_data)
{
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}
int main()
{
    Node* head = NULL;
    
    insertfront(&head,6);
    cout<<head;
    printList(head);
    return 0;
}