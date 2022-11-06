// given a tree node you have to find how may time is needed to complete tree. one operation is considered
// as one second
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void makeparent(unordered_map<node *, node *> &un, node *root)
{
    if (!root)
    {
        return;
    }
    if (root->left)
    {
        un[root->left] = root;
        makeparent(un, root->left);
    }
    if (root->right)
    {
        un[root->right] = root;
        makeparent(un, root->right);
    }
}
int burntree(node *root, node *given)
{
    unordered_map<node *, node *> un;
    makeparent(un, root);
    unordered_map<node *, int> vis;
    queue<node *> q;
    q.push(given);
    int dist = 0;
    while (!q.empty())
    {
        int f = 0;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {

            node *z = q.front();
            q.pop();
            if (z->left && !vis[z->left])
            {
                f = 1;
                vis[z->left] = 1;
                q.push(z->left);
            }
            if (z->right && !vis[z->right])
            {
                f = 1;
                vis[z->right] = 1;
                q.push(z->right);
            }
            if (un[z] && !vis[un[z]])
            {
                f = 1;
                vis[z];
                q.push(un[z]);
            }
        }
        if (f)
        {
            dist += 1;
        }
    }
    return dist;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->left->right->left = new node(5);
    root->left->right->right = new node(6);
    root->right->right = new node(8);
    cout << burntree(root, root->left);
    return 0;
}