#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int key;
    Node* left;
    Node* right;

    // Constructor
    Node(int key) {
        this->key = key;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Function to insert a new key in the BST
Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key); // Create a new node if the tree is empty
    }

    if (key < root->key) {
        root->left = insert(root->left, key); // Insert in the left subtree
    } else if (key > root->key) {
        root->right = insert(root->right, key); // Insert in the right subtree
    }

    return root; // Return the unchanged root
}

// Function to search for a key in the BST
Node* search(Node* root, int key) {
    // Base cases: root is null or key is present at root
    if (root == nullptr || root->key == key) {
        return root;
    }

    // Key is smaller than root's key, search in the left subtree
    if (key < root->key) {
        return search(root->left, key);
    }

    // Key is larger than root's key, search in the right subtree
    return search(root->right, key);
}

// Function for in-order traversal (to display the tree in sorted order)
void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->key << " ";
        inOrder(root->right);
    }
}

// Main function
int main() {
    Node* root = nullptr;

    int n, value, searchKey;
    cout << "Enter the number of elements to insert into the BST: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Enter the key to search in the BST: ";
    cin >> searchKey;

    Node* result = search(root, searchKey);

    if (result != nullptr) {
        cout << "Key " << searchKey << " found in the BST." << endl;
    } else {
        cout << "Key " << searchKey << " not found in the BST." << endl;
    }

    cout << "In-order traversal of the BST: ";
    inOrder(root);
    cout << endl;

    return 0;
}
