// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;
//     Node(int val)
//     {
//         this->data = val;
//         this->next = NULL;
//     }
// };

// void insertAtTail(Node* &head,int Element)
// {
//     Node* newNode = new Node(Element);
//     if(head==NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != NULL) { // Traverse to the last node
//         temp = temp->next;
//     }
//     temp->next = newNode; 
    

// }

// void insertAtHead(Node* &head,int Element)
// {
//     Node* newHead = new Node(Element);
//     newHead->next=head;
//     head= newHead;
// }

// void printLinkedlist(Node* &head)
// {
//     while(head!= NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

// int main()
// {
//     Node* head = NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtHead(head,0);
//     printLinkedlist(head);
//     return 0;
// }