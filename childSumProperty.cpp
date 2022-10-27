// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *left, *right;
//     node(int val)
//     {
//         data = val;
//         left = right = NULL;
//     }
// };
// void change(node *root)
// {
//     if (!root)
//     {
//         return;
//     }
//     int sum = 0;
//     if (root->left)
//         sum += root->left->data;
//     if (root->right)
//         sum += root->right->data;
//     if (sum < root->data)
//     {
//         if (root->left)
//         {
//             root->left->data = root->data;
//         }
//         if (root->right)
//         {
//             root->right->data = root->data;
//         }
//     }
//     change(root->left);
//     change(root->right);
//     int tot = 0;
//     if (root->left)
//     {
//         tot += root->left->data;
//     }
//     if (root->right)
//     {
//         tot += root->right->data;
//     }
//     if (root->left || root->right)
//         root->data = tot;
// }
// void rearange(node *root)
// {
//     if (!root)
//     {
//         return;
//     }
//     change(root);
// }
// void print(node *root)
// {
//     if (!root)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     print(root->left);
//     print(root->right);
// }
// int main()
// {
//     node *root = new node(50);
//     root->left = new node(3);
//     root->right = new node(7);
//     root->left->left = new node(2);
//     root->left->right = new node(81);
//     root->right->left = new node(7);
//     root->right->right = new node(8);
//     rearange(root);
//     print(root);
//     return 0;
// }

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

void change(node *root)
{
    if (!root)
    {
        return;
    }
    int sum = 0;
    if (root->left)
        sum += root->left->data;
    if (root->right)
        sum += root->right->data;
    if (sum < root->data)
    {
        if (root->left)
        {
            root->left->data = root->data;
        }
        if (root->right)
        {
            root->right->data = root->data;
        }
    }
    change(root->left);
    change(root->right);
    int tot = 0;
    if (root->left)
    {
        tot += root->left->data;
    }
    if (root->right)
    {
        tot += root->right->data;
    }
    if (root->left || root->right)
    {
        root->data = tot;
    }
}
void print(node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    change(root);
    print(root);
    return 0;
}