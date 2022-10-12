// programme to calculate the sum of all nodes in binary tree
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
int sum(node *root)
{
    if (!root)
    {
        return 0;
    }
    return sum(root->left) + sum(root->right) + root->data;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << sum(root);
    return 0;
}