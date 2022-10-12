#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};
void preorderTrav(node *curr, vector<int> &preorder)
{
    if (curr == NULL)
    {
        return;
    }
    preorder.push_back(curr->data);
    preorderTrav(curr->left, preorder);
    preorderTrav(curr->right, preorder);
}
struct node *newnode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

int main()
{
    struct node *root = newnode(1);
    root->left = newnode(2);
    root->left->left = newnode(6);
    root->left->right = newnode(8);
    root->left->right->left = newnode(12);
    root->left->right->right = newnode(14);
    root->left->right->right->left = newnode(16);
    root->left->right->right->right = newnode(20);
    root->right = newnode(10);
    root->right->right = newnode(11);
    root->right->right->right = newnode(27);
    root->right->right->right->left = newnode(50);

    vector<int> preorder;
    preorderTrav(root, preorder);
    for (int i = 0; i < preorder.size(); i++)
    {
        cout << preorder[i] << " ";
    }
    return 0;
}