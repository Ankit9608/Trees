#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
struct node
{
    int data;
    node *right, *left;
};
node *newNode(int data)
{
    node *Node = new node;
    Node->left = Node->right = NULL;
    return Node;
}
void levelorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        node *Node = q.front();
        cout << Node->data << " ";
        q.pop();
        if (Node->left != NULL)
        {
            q.push(Node->left);
        }
        if (Node->right != NULL)
        {
            q.push(Node->right);
        }
    }
}
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(5);
    root->left->right = newNode(6);
    levelorder(root);
    return 0;
}