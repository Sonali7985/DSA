// Binary Tree using Inorder, Preorder and Postorder

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *MakeNode(int x)
{
    Node *p;
    p = new Node;

    p->data = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}

// PREORDER: Root -> Left -> Right
void Preorder(Node *t)
{
    if (t != NULL)
    {
        cout << t->data << " ";
        Preorder(t->left);
        Preorder(t->right);
    }
}

// INORDER: Left -> Root -> Right
void Inorder(Node *t)
{
    if (t != NULL)
    {
        Inorder(t->left);
        cout << t->data << " ";
        Inorder(t->right);
    }
}

// POSTORDER: Left -> Right -> Root
void Postorder(Node *t)
{
    if (t != NULL)
    {
        Postorder(t->left);
        Postorder(t->right);
        cout << t->data << " ";
    }
}

// CREATE BINARY TREE
void CreateTree(Node *t)
{
    int choice;
    int x;

    cout << "Whether left child of " << t->data
         << " exists (1/0): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter left child: ";
        cin >> x;

        Node *p = MakeNode(x);
        t->left = p;

        CreateTree(p);
    }

    cout << "Whether right child of " << t->data
         << " exists (1/0): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter right child: ";
        cin >> x;

        Node *p = MakeNode(x);
        t->right = p;

        CreateTree(p);
    }
}

int main()
{
    int x;

    cout << "Enter root node: ";
    cin >> x;

    Node *root = NULL;

    root = MakeNode(x);

    CreateTree(root);

    cout << endl;

    cout << "Preorder  : ";
    Preorder(root);

    cout << endl;

    cout << "Inorder   : ";
    Inorder(root);

    cout << endl;

    cout << "Postorder : ";
    Postorder(root);

    cout << endl;

    return 0;
}