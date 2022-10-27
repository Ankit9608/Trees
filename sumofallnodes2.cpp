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
int sum(node *root)
{
    if (!root)
    {
        return 0;
    }
    int lsum = sum(root->left);
    int rsum = sum(root->right);
    return lsum + rsum + root->data;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(9);
    cout << sum(root) << endl;
    return 0;
}