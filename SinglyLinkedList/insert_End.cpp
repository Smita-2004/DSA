#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtEnd(Node *&head, int data){
    Node *newNode= new Node(data);
    if(head==NULL){
        head = newNode;
        return ;
    }
    Node *curr = head;
    while(curr->next!= NULL){
        curr=curr->next;
    }
    curr->next=newNode;
    // return head;
}
// function to print list
void printList(Node *&head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL "<<endl;
}

int main(){
    Node *head = NULL;
    int n, data;
    cout<<"Enter number of elements to insert: ";
    cin>>n;
    // take input
    for(int i=0;i<n;i++){
        cout<<"Enter number to insert: ";
        cin>>data;
        insertAtEnd(head,data);
    }
    //print data
    cout<<"Linked lISt: ";
    printList(head);
    
}






