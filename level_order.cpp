#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
struct treenode
{
    int data;
    struct treenode *left, *right;
};
// class solution
// {
// public:
//     vector<int> levelorder(treenode *root)
//     {
//         vector<int> ans;
//         if (root == NULL)
//         {
//             return ans;
//         }
//         queue<treenode *> q;
//         q.push(root);
//         while (!q.empty())
//         {
//             treenode *temp = q.front();
//             q.pop();
//             if (temp->left != NULL)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right != NULL)
//             {
//                 q.push(temp->right);
//             }
//             ans.push_back(temp->data);
//         }
//         return ans;
//     }
// };

struct treenode *newtreenode(int data)
{
    struct treenode *Treenode = (struct treenode *)malloc(sizeof(treenode));
    Treenode->data = data;
    Treenode->left = NULL;
    Treenode->right = NULL;
    return (Treenode);
}

void levelorder(treenode *root, vector<int> &level)
{
    if (root == NULL)
    {
        return;
    }
    queue<treenode *> q;
    // cout << "hello";

    q.push(root);
    while (!q.empty())
    {
        treenode *temp = q.front();
        q.pop();
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
        level.push_back(temp->data);
    }
    return;
}
int main()
{
    struct treenode *root = newtreenode(1);
    root->left = newtreenode(2);
    root->right = newtreenode(3);
    root->left->left = newtreenode(4);
    root->left->right = newtreenode(5);
    root->right->left = newtreenode(6);
    root->right->right = newtreenode(7);
    // solution s;
    // vector<int> a;
    // a = s.levelorder(root);
    // for (auto i : a)
    //     cout << i << " ";
    // cout << endl;
    vector<int> level;
    levelorder(root, level);
    for (auto i : level)
        cout << i << " ";
    cout << endl;

    return 0;
}