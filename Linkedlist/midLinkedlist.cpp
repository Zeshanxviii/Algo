#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
        delete;
        
    }
};

void insertAtTail(Node* &head,int Element)
{
    Node* newNode = new Node(Element);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next= newNode;
}


void printLinkedlist(Node* head)
{
    while(head!= NULL){
    cout<<head->data<<" ";
    head = head->next;
    }
    cout<<endl;
}
int mid(Node* head)
{
    int length=0;
    while(head!= NULL){
    length++;
    head = head->next;
    }

    return length;
}

void Printmidle(Node* head)
{
    int midlength = mid(head)/2;

    while(midlength--)
    {
        head=head->next;

    }
    cout<<head->data;
}

int main()
{
    Node* head = NULL;
    insertAtTail(head,9);
    insertAtTail(head,0);
    printLinkedlist(head);
    Printmidle(head);
    return 0;
}