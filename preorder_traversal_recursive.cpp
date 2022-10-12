#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};
void preordertrav(node *curr, vector<int> &preorder)
{
    if (curr == NULL)
    {
        return;
    }
    preorder.push_back(curr->data);
    preordertrav(curr->left, preorder);
    preordertrav(curr->right, preorder);
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
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->left->right->left = newnode(8);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    root->right->right->left = newnode(9);
    root->right->right->right = newnode(10);
    vector<int> preorder;
    preordertrav(root, preorder);
    cout << "The preorder traversal is: \n";
    for (int i = 0; i < preorder.size(); i++)
    {
        cout << preorder[i] << " ";
    }
    return 0;
}