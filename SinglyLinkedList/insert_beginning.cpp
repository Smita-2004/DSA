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

//function to inesert at beginning
void insertAtBeginning(Node *&head, int data){
    Node *newNode = new Node(data);
    newNode->next=head;
    head = newNode;
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
        insertAtBeginning(head,data);
    }
    //print data
    cout<<"Linked lISt: ";
    printList(head);
    return 0;
}






