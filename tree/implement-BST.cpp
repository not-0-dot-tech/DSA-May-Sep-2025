#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left = nullptr, *right = nullptr;

    Node(int data)
    {
        this->data = data;
    }
};

class BST
{
    Node *root = nullptr;

    void insertNode(Node *&root, int data)
    {
        if (root == nullptr)
            root = new Node(data);
        else if (data < root->data)
            insertNode(root->left, data);
        else
            insertNode(root->right, data);
    }

    bool searchNode(Node *root, int data)
    {
        if (root == nullptr)
            return false;
        
        if (data == root->data)
            return true;
        else if (data < root->data)
            return searchNode(root->left, data);
        else
            return searchNode(root->right, data);
    }

public:
    void insert(int data)
    {
        insertNode(root, data);
    }

    bool search(int data)
    {
        return searchNode(root, data);
    }
};

int main()
{
    BST b1;

    b1.insert(10);
    b1.insert(5);
    b1.insert(15);
    b1.insert(3);
    b1.insert(7);

    cout << b1.search(7) << endl;
    cout << b1.search(4) << endl;
    
    return 0;
}