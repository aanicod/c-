#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
void deleteNode(struct Node** head_ref,struct Node* del)
{
    if(*head_ref==NULL || del ==NULL)
    {
        return;
    }
    if(*head_ref == del)
    {
        *head_ref =del->next;
    }
    if(del->next !=NULL)
    {
        del->next->
    }
}