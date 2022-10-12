#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *right, *left;
};
void postordertrav(node *curr, vector<int> &postorder)
{
    if (curr == NULL)
    {
        return;
    }
    postordertrav(curr->left, postorder);
    postordertrav(curr->right, postorder);
    postorder.push_back(curr->data);
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
    root->left = newnode(5);
    root->left->left = newnode(110);
    root->left->right = newnode(75);
    root->left->right->right = newnode(80);
    root->left->right->right->left = newnode(100);
    root->left->right->right->right = newnode(120);
    root->right = newnode(2);
    root->right->right = newnode(7);
    root->right->right->left = newnode(8);
    root->right->right->right = newnode(9);
    root->right->right->left->left = newnode(10);
    root->right->right->left->right = newnode(14);

    vector<int> postorder;
    postordertrav(root, postorder);
    for (int i = 0; i < postorder.size(); i++)
    {
        cout << postorder[i] << " ";
    }
    return 0;
}

// 110 100 120 80 75 5 10 14 8 9 7 2 1

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
//     Node->left = NULL;
//     Node->right = NULL;
//     return (Node);
// }
// void postordertraversal(vector<int> &postOrder, node *root)
// {

//     if (root == NULL)
//     {
//         return;
//     }
//     postordertraversal(postOrder, root->left);
//     postordertraversal(postOrder, root->right);
//     postOrder.push_back(root->data);
// }

// int main()
// {

//     struct node *root = newnode(1);
//     root->left = newnode(5);
//     root->left->left = newnode(110);
//     root->left->right = newnode(75);
//     root->left->right->right = newnode(80);
//     root->left->right->right->left = newnode(100);
//     root->left->right->right->right = newnode(120);
//     root->right = newnode(2);
//     root->right->right = newnode(7);
//     root->right->right->left = newnode(8);
//     root->right->right->right = newnode(9);
//     root->right->right->left->left = newnode(10);
//     root->right->right->left->right = newnode(14);

//     vector<int> postOrder;
//     postordertraversal(postOrder, root);
//     for (int i = 0; i < postOrder.size(); i++)
//     {
//         cout << postOrder[i] << " ";
//     }
//     return 0;
// }
