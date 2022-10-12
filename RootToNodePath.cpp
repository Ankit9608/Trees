// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // struct node
// // {
// //     int data;
// //     node *left, *right;
// // };
// // struct node *newnode(int val)
// // {
// //     struct node *nod = (struct node *)malloc(sizeof(node));
// //     nod->data = val;
// //     nod->left = nod->right = NULL;
// //     return (nod);
// // }
// // bool path(node *root, vector<int> &temp, int k)
// // {
// //     if (!root)
// //         return false;
// //     temp.push_back(root->data);
// //     if (root->data == k)
// //         return true;
// //     if (path(root->left, temp, k) || path(root->right, temp, k))
// //         return true;
// //     temp.pop_back();
// //     return false;
// // }
// // vector<int> path(node *root, int k)
// // {
// //     vector<int> temp;
// //     if (!root)
// //         return temp;
// //     path(root, temp, k);
// //     return temp;
// // }

// // int main()
// // {
// //     node *root = newnode(1);
// //     root->left = newnode(2);
// //     root->right = newnode(3);
// //     int k;
// //     cout << "Enter the number to find in tree\n";
// //     cin >> k;
// //     vector<int> ans;
// //     ans = path(root, k);
// //     for (int i = 0; i < ans.size(); i++)
// //     {
// //         cout << ans[i] << " ";
// //     }
// //     cout << endl;
// //     return 0;
// // }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left, *right;
// };
// class node *newnode(int val)
// {
//     class node *Node = (class node *)malloc(sizeof(node));
//     Node->data = val;
//     Node->left = Node->right = NULL;
//     return (Node);
// }
// bool getpath(node *root, vector<int> &temp, int k)
// {
//     if (!root)
//         return false;
//     temp.push_back(root->data);
//     if (root->data == k)
//         return true;
//     if (getpath(root->left, temp, k) || getpath(root->right, temp, k))
//         return true;
//     temp.pop_back();
//     return false;
// }
// vector<int> path(node *root, int k)
// {
//     vector<int> temp;
//     if (!root)
//         return temp;
//     if (!getpath(root, temp, k))
//     {
//         cout << "The element is not found\n";
//         return temp;
//     };
//     return temp;
// }
// int main()
// {
//     node *root = newnode(1);
//     root->left = newnode(2);
//     root->right = newnode(3);
//     int k;
//     cout << "Enter the number to find\n";

//     cin >> k;
//     vector<int> ans;
//     ans = path(root, k);
//     for (int i = 0; i < ans.size(); i++)
//         cout << ans[i] << " ";
//     cout << endl;
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
struct node *newnode(int val)
{
    struct node *Node = (struct node *)malloc(sizeof(node));
    Node->data = val;
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}
bool getpath(node *root, vector<int> &temp, int k)
{
    temp.push_back(root->data);
    if (root->data == k)
        return true;
    if (getpath(root->left, temp, k) || getpath(root->right, temp, k))
    {
        return true;
    }
    temp.pop_back();
    return false;
}

vector<int> path(node *root, int k)
{
    vector<int> temp;
    if (!root)
    {
        return temp;
    }
    // if (root->data == k)
    //     return temp;
    if (!getpath(root, temp, k))
    {
        cout << "element not found\n";
        return temp;
    }
    return temp;
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    vector<int> ans;
    cout << "enter the element\n";

    int k;
    cin >> k;

    ans = path(root, k);
    cout << sizeof(ans) << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}