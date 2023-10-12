#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

void insert(Node*& root, int value) {
    if (!root) root = new Node(value);
    else if (value < root->data) insert(root->left, value);
    else insert(root->right, value);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    std::cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    
    std::cout << "Inorder traversal of the BST: ";
    inorder(root);
    std::cout << std::endl;
    return 0;
}
