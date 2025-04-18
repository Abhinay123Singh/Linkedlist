#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        cout << "I am Inside default constructor" << endl;
        this->next = NULL;
    }

    Node(int data) {
        cout << "I am parameterized default constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;  
    }
    cout << "NULL" << endl;
}
int getlength(Node* head)
{
    Node* temp= head;
         int count =0;
         while(temp!=NULL)
         {
            count++;
            temp = temp->next;
         }
         return count;
}
   void insertatHead(Node* &head,Node* &tail, int data)
   {
    if(head == NULL)
    {
   Node* newNode = new Node(data);
   // step 2:- update head
   head=newNode;
   tail=newNode;
    }
    // empty linked lidt 
//  step 1:-create a new Node
Node* newNode = new Node(data);
// Attach new node to head node
newNode ->next = head;
// update head
head=newNode;
//tail=newNode;

   }
void insertatTail(Node* &head, Node* tail,int data)
{
if(head==NULL)
{
//Empty ll 
//step 1: create a new Node
Node* newNode = new Node(data);
// step2:tail node ko attach karo newNode se single node h entire list me, 
// thats why head and tail ko ispar point karwado 
//tail->newNode = new Node(data);
// step 3:
head = newNode;
tail =newNode;

}
else{
//non empty LL
//Step1:create sa new node
Node* newNode=new Node(data);
//Step2: tail node ko attach kro newNode se
tail->next=newNode;
//Step3: update tail node ko kro 
tail =newNode;
}
}
int main() {
    // dynamic allocation
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* tail=fifth;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Linked list created
    Node* head = first;

    cout << "Printing the entire LL:"<<endl;

    printLL(head);
    insertatTail(head, tail,500);
    printLL(head);

     cout<<" Length of LL is:"<<getlength(head)<<endl;
    return 0;
}
