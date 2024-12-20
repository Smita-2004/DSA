// Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.
// Examples :
// Input: LinkedList : 1->2->3->4->5
// Output: 5
// Explanation: Count of nodes in the linked list is 5, which is its length.
// Input: LinkedList : 2->4->6->7->5->1->0
// Output: 7
// Explanation: Count of nodes in the linked list is 7. Hence, the output is 7.

#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
    data = x;
    next = NULL;
    }
};


//  THE CODE THAT I HAD TO COMPLETE

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        int a=0;
        Node *curr=head;
        while(curr!=NULL){
            a++;
        curr= curr->next;
        }
        return a;
        //  THE CODE THAT I HAD TO COMPLETE
    }
};

int main() {
    int t;
    cin . ignore();
    while (t--) {
    vector<int> arr;
    string input;
    getline(cin,input);
    stringstream ss(input);
    int number;
    while (ss >> number){
    arr.push_back (number) ;
    }
    struct Node *head = new Node(arr[0]);
struct Node *tail = head;

for (int i = 1;i<arr.size();i++){
    tail->next=new Node(arr[i]);
    tail=tail->next;
}
Solution ob;
cout<<ob.getCount(head)<<endl;
    }
    return 0;
}
