#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};
void inordertrav(node *curr, vector<int> &inorder)
{
    if (curr == NULL)
    {
        return;
    }
    inordertrav(curr->left, inorder);
    inorder.push_back(curr->data);
    inordertrav(curr->right, inorder);
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
    struct node *root = newnode(5);
    root->left = newnode(7);
    root->left->left = newnode(9);
    root->left->right = newnode(11);
    root->left->right->left = newnode(12);
    root->left->right->right = newnode(19);
    root->right = newnode(20);
    root->right->right = newnode(27);
    root->right->right->left = newnode(30);
    root->right->right->right = newnode(35);

    vector<int> inorder;
    inordertrav(root, inorder);
    for (int i = 0; i < inorder.size(); i++)
    {
        cout << inorder[i] << " ";
    }
    return 0;
}

// 9 7 12 11 19 5 20 30 27 35

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *left, *right;
// };
// struct node *newnode(int val)
// {
//     struct node *Node = (struct node *)malloc(sizeof(node));
//     Node->data = val;
//     Node->left = Node->right = NULL;
//     return (Node);
// }
// void InorderTraversal(node *root, vector<int> &inorder)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     InorderTraversal(root->left, inorder);
//     inorder.push_back(root->data);
//     InorderTraversal(root->right, inorder);
// }
// int main()
// {
//     struct node *root = newnode(5);
//     root->left = newnode(7);
//     root->left->left = newnode(9);
//     root->left->right = newnode(11);
//     root->left->right->left = newnode(12);
//     root->left->right->right = newnode(19);
//     root->right = newnode(20);
//     root->right->right = newnode(27);
//     root->right->right->left = newnode(30);
//     root->right->right->right = newnode(35);
//     vector<int> inorder;
//     InorderTraversal(root, inorder);
//     for (int i = 0; i < inorder.size(); i++)
//     {
//         cout << inorder[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }