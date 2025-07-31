#include <iostream>
#include <queue>
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

    void performLevelOrderTraversal(Node *root)
    {
        if (root == nullptr) // if (!root)
            return;

        queue<Node *> q;

        q.push(root);

        while (!q.empty())
        {
            Node *current = q.front();
            q.pop();

            cout << current->data << " ";

            if (current->left != nullptr)
                q.push(current->left);
            if (current->right != nullptr)
                q.push(current->right);
        }
    }

    void performPreOrderTraversal(Node *root)
    {
        if (root == nullptr)
            return;

        cout << root->data << " ";
        performPreOrderTraversal(root->left);
        performPreOrderTraversal(root->right);
    }

    void performInOrderTraversal(Node *root)
    {
        if (root == nullptr)
            return;

        performInOrderTraversal(root->left);
        cout << root->data << " ";
        performInOrderTraversal(root->right);
    }

    void performPostOrderTraversal(Node *root)
    {
        if (root == nullptr)
            return;

        performPostOrderTraversal(root->left);
        performPostOrderTraversal(root->right);
        cout << root->data << " ";
    }

    int calculateTreeHeight(Node *root)
    {
        if (root == nullptr)
            return -1; // Height of an empty tree is -1

        int leftHeight = calculateTreeHeight(root->left);
        int rightHeight = calculateTreeHeight(root->right);

        return max(leftHeight, rightHeight) + 1;
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

    void levelOrderTraversal()
    {
        performLevelOrderTraversal(root);
        cout << endl;
    }

    void preOrderTraversal()
    {
        performPreOrderTraversal(root);
        cout << endl;
    }

    void inOrderTraversal()
    {
        performInOrderTraversal(root);
        cout << endl;
    }

    void postOrderTraversal()
    {
        performPostOrderTraversal(root);
        cout << endl;
    }

    int height()
    {
        return calculateTreeHeight(root);
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
    b1.insert(12);
    b1.insert(17);
    b1.insert(4);

    cout << b1.search(7) << endl;
    cout << b1.search(4) << endl;

    cout << "Level Order Traversal: ";
    b1.levelOrderTraversal();

    cout << "Pre Order Traversal: ";
    b1.preOrderTraversal();

    cout << "In Order Traversal: ";
    b1.inOrderTraversal();

    cout << "Post Order Traversal: ";
    b1.postOrderTraversal();

    cout << "Height of the tree: " << b1.height() << endl;

    return 0;
}
