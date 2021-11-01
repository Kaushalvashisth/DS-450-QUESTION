#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

void printLinkedList(Node *n){
    while (n!=NULL)
    {
        cout<<n->data<<"-->";
        n=n->next;
    }
    cout<<"NULL \n";
}

void add_begining(Node **head_ref,int value){
// Add to beginning
// 	• Allocate memory for new node
// 	• Store data
// 	• Change next of new node to point to head
// 	• Change head to point to recently created node

    Node *newNode=new Node(value);
    // newNode->data=value;
    newNode->next=(*head_ref);// bcoz head=1
    (*head_ref)=newNode;
}
int main(int argc, char const *argv[])
{
    // initialize/declare nodes
    Node *head;
    Node *one=NULL;
    Node *two=NULL;
    Node *three=NULL;

    // allocate  nodes in the heap
    //  and also entering data
    one =new Node(1); // giving nodes address
    two =new Node(2);
    three =new Node(3);

    // enter data
    // one->data=1;
    // two->data=2;
    // three->data=3;

    // enter next
    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one; // one is the head


    // printing linked list
    printLinkedList(head);


// add elements to linked list
    add_begining(&head,0);//give address of head
    printLinkedList(head);

// Add to end
// 	• Allocate memory for new node
// 	• Store data
// 	• Traverse to last node
// 	• Change next of last node to recently created node

    
    return 0;
}
