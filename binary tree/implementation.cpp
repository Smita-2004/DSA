#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to create a tree by taking input from the user
Node* createTree() {
    int val;
    cout << "Enter value (-1 for NULL): ";
    cin >> val;

    if (val == -1) {
        return NULL;
    }

    Node* newNode = new Node(val);

    cout << "Enter left child of " << val << endl;
    newNode->left = createTree();

    cout << "Enter right child of " << val << endl;
    newNode->right = createTree();

    return newNode;
}

// Inorder Traversal to display the tree nodes
void inorderTraversal(Node* root) {
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    cout << "Create the tree:\n";
    Node* root = createTree();

    cout << "\nInorder Traversal of the tree is: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
