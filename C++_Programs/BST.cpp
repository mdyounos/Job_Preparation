#include <bits/stdc++.h>
using namespace std;

struct node {
    int key;
    node *left;
    node *right;
};

// Function to create a new node with a given value
node* getNewNode(int val) {
    node* newNode = new node;
    newNode->key = val;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a new value into the BST
node* insert(node* root, int val) {
    if (root == nullptr) // If the tree is empty, create a new node
        return getNewNode(val);
    if (root->key < val) {
        root->right = insert(root->right, val); // Insert in the right subtree
    } else if (root->key > val) {
        root->left = insert(root->left, val); // Insert in the left subtree
    }
    return root;
}

// Function for in-order traversal of the BST
void inorder(node* root) {
    if (root == nullptr)
        return;
    inorder(root->left);         // Visit left subtree
    cout << root->key << " ";    // Print the root key
    inorder(root->right);        // Visit right subtree
}

// Function for pre-order traversal of the BST
void preorder(node* root) {
    if (root == nullptr)
        return;
    cout << root->key << " ";    // Print the root key
    preorder(root->left);        // Visit left subtree
    preorder(root->right);       // Visit right subtree
}

int main() {
    node* root = nullptr;
    root = insert(root, 15);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 8);
    root = insert(root, 9);

    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preorder(root);
    cout << endl;

    return 0;
}
