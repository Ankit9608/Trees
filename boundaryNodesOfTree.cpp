// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *left, *right;
// };
// struct node *Newnode(int val)
// {
//     struct node *Node = (struct node *)malloc(sizeof(node));
//     Node->data = val;
//     Node->left = NULL;
//     Node->right = NULL;
//     return (Node);
// }
// bool isLeaf(node *root)
// {
//     return !root->left && !root->right;
// }
// void leftBoundry(node *root, vector<int> &temp)
// {
//     node *curr = root->left;
//     while (curr)
//     {
//         if (!isLeaf(root))
//         {
//             temp.push_back(root->data);
//         }
//         if (curr->left)
//             curr = curr->left;
//         else
//             curr = curr->right;
//     }
// }
// void rightBoundry(node *root, vector<int> &temp)
// {
//     node *curr = root->right;

//     vector<int> rightReverse;
//     while (curr)
//     {

//         if (!isLeaf(root))
//             rightReverse.push_back(root->data);
//         if (curr->right)
//             curr = curr->right;
//         else
//             curr = curr->left;
//     }
//     for (int i = 0; i < rightReverse.size() - 1; --i)
//     {
//         temp.push_back(rightReverse[i]);
//     }
// }
// void leafNode(node *root, vector<int> &temp)
// {
//     if (isLeaf)
//     {
//         temp.push_back(root->data);
//         return;
//     }
//     if (root->left)
//         leafNode(root->left, temp);
//     if (root->right)
//         leafNode(root->right, temp);
// }
// vector<int> printBoundry(node *root)
// {
//     vector<int> temp;
//     if (!root)
//         return temp;
//     if (!isLeaf(root))
//         temp.push_back(root->data);
//     leftBoundry(root, temp);
//     leafNode(root, temp);
//     rightBoundry(root, temp);
//     return temp;
// }

// int main()
// {
//     node *root = Newnode(1);
//     root->left = Newnode(2);
//     root->right = Newnode(3);
//     root->left->left = Newnode(4);
//     root->left->right = Newnode(5);
//     root->right->right = Newnode(8);
//     root->left->right->left = Newnode(6);
//     root->left->right->right = Newnode(7);
//     root->right->right->right = Newnode(9);
//     root->right->right->right->left = Newnode(10);
//     root->right->right->right->right = Newnode(11);
//     root->right->right->right->left->left = Newnode(12);
//     root->right->right->right->left->right = Newnode(13);
//     root->right->right->right->left->right->right = Newnode(14);

//     vector<int> res;
//     if (!root)
//     {
//         cout << "-1";
//         return 0;
//     }
//     res = printBoundry(root);
//     for (int i = 0; i < res.size(); i++)
//     {
//         cout << res[i] << " ";
//     }
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
};
// node *Newnode(int val)
// {
//     node *Node = (class node *)malloc(sizeof(node));
//     Node->data = val;
//     Node->left = NULL;
//     Node->right = NULL;
//     return (Node);
// }
node *newNode(int val)
{
    node *Node = (class node *)malloc(sizeof(node));
    Node->data = val;
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}
bool isleaf(node *root)
{
    return !root->left && !root->right;
}
void leftboundry(node *root, vector<int> &temp)
{
    node *curr = root->left;
    while (curr)
    {
        if (!isleaf(curr))
            temp.push_back(root->data);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}
void addleaf(node *root, vector<int> &temp)
{
    if (isleaf(root))
    {
        temp.push_back(root->data);
        return;
    }
    if (root->left)
        addleaf(root->left, temp);
    if (root->right)
        addleaf(root->right, temp);
}
void rightboundry(node *root, vector<int> &temp)
{
    vector<int> res;
    node *curr = root->right;
    while (curr)
    {
        if (!isleaf(root))
            res.push_back(root->data);
        if (root->right)
            curr = curr->right;
        else
            curr = curr->left;
    }
    for (int i = res.size() - 1; i >= 0; i--)
    {
        temp.push_back(res[i]);
    }
}

vector<int> printBoundry(node *root)
{
    vector<int> temp;
    if (!root)
        return temp;
    leftboundry(root, temp);
    addleaf(root, temp);
    rightboundry(root, temp);
    return temp;
}
int main()
{
    // node *root = Newnode(1);
    // root->left = Newnode(2);
    // root->right = Newnode(3);
    // root->left->left = Newnode(4);
    // root->left->right = Newnode(5);
    // root->right->right = Newnode(8);
    // root->left->right->left = Newnode(6);
    // root->left->right->right = Newnode(7);
    // root->right->right->right = Newnode(9);
    // root->right->right->right->left = Newnode(10);
    // root->right->right->right->right = Newnode(11);
    // root->right->right->right->left->left = Newnode(12);
    // root->right->right->right->left->right = Newnode(13);
    // root->right->right->right->left->right->right = Newnode(14);

    node *root = newNode(1);
    root->left = newNode(2);
    root->left->left = newNode(3);
    root->left->left->right = newNode(4);
    root->left->left->right->left = newNode(5);
    root->left->left->right->right = newNode(6);
    root->right = newNode(7);
    root->right->right = newNode(8);
    root->right->right->left = newNode(9);
    root->right->right->left->left = newNode(10);
    root->right->right->left->right = newNode(11);
    vector<int> boundry;
    boundry = printBoundry(root);
    for (int i = 0; i < boundry.size(); i++)
    {
        cout << boundry[i] << " ";
    }
    return 0;
}