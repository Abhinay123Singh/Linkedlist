#include<iostream>
using namespace std;
struct Node{
    int data;
     Node* next;
     Node(int val)
     {
        data =val;
        next=nullptr;

     } 
    };
    
void printlist(Node* head)
{
while(head!=nullptr)
{
    cout<<head->data<<"->";
    head=head->next;

}
cout<<"null"<<endl;

}
Node* reverselist(Node* head)
{
Node* prev=nullptr;
Node*next=nullptr;
Node* curr=head;
while(curr!=nullptr)
{
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;

}
return prev;


}
int middlenode(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr&&fast->next!=nullptr)
    {
slow=slow->next;
fast=fast->next->next;

    }
return slow->data;
}

int main()
{
    Node *head=new Node(1);
    head->next=new  Node(2);
    head->next->next=new  Node(3);
    head->next->next->next=new  Node(4);
    cout<<"originallist  ";
    printlist(head);
    cout<<endl;
 //  cout<<endl;
    head=reverselist(head);
    cout<<"reverselist  ";
    printlist(head);
    cout<<endl;
  cout<<"middle node is  " <<middlenode(head);

}