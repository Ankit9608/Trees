// calculate the number of nodes in complete binary tree
// Intituion -> as we know complete binary tree has all levels filled except the last level which is filled
// from left towards right
// so the approach is we have to calculate the height of the subtree and height of the right subtree
// if both are equal the return 2^height-1 (i.e the number of nodes )
// But if lh!=rh then move to one level down and repeat same process untill we get lh==rh after we return any
// one of them lastly the level at which the lh!=rh we return 1+rh+lh;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
int leftheight(node *root)
{
    if (!root)
    {
        return 0;
    }
    return 1 + leftheight(root->left);
}
int rightheigt(node *root)
{
    if (!root)
    {
        return 0;
    }
    return 1 + rightheigt(root->right);
}
int numnode(node *root)
{
    int lh = leftheight(root);
    int rh = rightheigt(root);
    if (lh == rh)
        return pow(2, lh) - 1;
    return 1 + numnode(root->left) + numnode(root->right);
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
    cout << numnode(root) << endl;
    return 0;
}