// programme to count the total number of nodes in a given binary tree and calculate the sum of all nodes
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
int count(node *root)
{
    if (!root)
    {
        return 0;
    }
    return count(root->left) + count(root->right) + 1;
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
    cout << count(root) << endl;
    return 0;
}