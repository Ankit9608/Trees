#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
struct node *newnode(int val)
{
    struct node *Node = (struct node *)malloc(sizeof(node));
    Node->data = val;
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}
int lca(node *root, int a, int b)
{

    if (root == NULL || root->data == a || root->data == b)
    {
        return root->data;
        int left = lca(root->left, a, b);
        int right = lca(root->right, a, b);
        if (left == NULL)
            return right;
        else if (right == NULL)
            return left;
        else
            return root->data;
    }
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(6);
    root->left->right->left = newnode(7);
    int a, b;
    cout << "Enter the elements to\n";
    cin >> a >> b;
    cout << lca(root, a, b);
}