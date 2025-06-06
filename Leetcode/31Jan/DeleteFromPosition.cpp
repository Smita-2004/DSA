
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data)
        : data(data)
        , next(nullptr)
    {
    }
};

Node* deleteNode(Node* head, int position)
{
    
    Node* prev;
    Node* temp = head;

    
    if (temp == NULL)
        return head;

    if (position == 1) {
        
        head = temp->next;
        free(temp);
        return head;
    }

    for (int i = 1; i != position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
    
    else {
        cout << "Data not present\n";
    }

    return head;
}

void printList(Node* head)
{
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original list: ";
    printList(head);

    int position = 2;
    head = deleteNode(head, position);

    cout << "List after deletion : ";
    printList(head);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
