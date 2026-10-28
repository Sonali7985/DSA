#include <bits/stdc++.h>

using namespace std;

struct Node
{
public:
    char data;
    Node *left;
    Node *right;
};

Node *MakeNode(char x)
{
    Node *p;

    p = new Node;

    p->data = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}

void Preorder(Node *t)
{
    if (t != NULL)
    {
        cout << t->data << " ";

        Preorder(t->left);
        Preorder(t->right);
    }
}

void Inorder(Node *t)
{
    if (t != NULL)
    {
        Inorder(t->left);

        cout << t->data << " ";

        Inorder(t->right);
    }
}

void Postorder(Node *t)
{
    if (t != NULL)
    {
        Postorder(t->left);
        Postorder(t->right);

        cout << t->data << " ";
    }
}

int main()
{
    Node *root = NULL;

    root = MakeNode('C');

    root->left = MakeNode('X');
    root->right = MakeNode('Y');

    root->left->left = MakeNode('T');

    root->right->left = MakeNode('T');
    root->right->right = MakeNode('T');

    cout << "Preorder: ";
    Preorder(root);

    cout << endl;

    cout << "Inorder: ";
    Inorder(root);

    cout << endl;

    cout << "Postorder: ";
    Postorder(root);

    return 0;
}