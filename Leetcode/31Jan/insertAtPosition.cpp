
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

Node *insertPos(Node *head, int pos, int data) {

    if (pos < 1)
        return head;

    
    if (pos == 1) {
        Node *newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }

    Node *curr = head;

    for (int i = 1; i < pos - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }
    
    
    if (curr == nullptr) 
        return head;
        
    Node *newNode = new Node(data);

  
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

void printList(struct Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {

   
    Node *head = new Node(3);
    head->next = new Node(5);
    head->next->next = new Node(8);
    head->next->next->next = new Node(10);

    int data = 12, pos = 3;
    head = insertPos(head, pos, data);
    printList(head);

    return 0;
}
