// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *right, *left;
//     node(int val)
//     {
//         data = val;
//         left = right = NULL;
//     }
// };
// // class solution
// // {
// // public:
// void leaf(node *root, vector<int> &ans)
// {
//     // if (!root)
//     // {
//     //     ans.push_back(root->data);
//     //     return;
//     // }
//     if (!root)
//         return;
//     if (root->left == NULL && root->right == NULL)
//     {
//         ans.push_back(root->data);
//         return;
//     }
//     leaf(root->left, ans);

//     leaf(root->right, ans);
// }
// // };

// int main()
// {
//     node *root = new node(1);
//     root->left = new node(2);
//     root->right = new node(3);
//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->right->right = new node(8);
//     root->left->right->left = new node(6);
//     root->left->right->right = new node(7);
//     root->right->right->right = new node(9);
//     root->right->right->right->left = new node(10);
//     root->right->right->right->right = new node(11);
//     root->right->right->right->left->left = new node(12);
//     root->right->right->right->left->right = new node(13);
//     root->right->right->right->left->right->right = new node(14);
//     vector<int> ans;
//     // cout << ans.size();
//     // solution s;
//     // s.leaf(root, ans);
//     leaf(root, ans);
//     // cout << ans.size() << endl;
//     for (int i = 0; i < ans.size(); i++)
//         cout << ans[i] << " ";
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> temp;

class node
{
public:
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        right = left = NULL;
    }
};
// void leaf(node *root, vector<int> &ans)
// {
//     if (!root)
//         return;
//     if (root->left == NULL && root->right == NULL)
//     {
//         ans.push_back(root->data);
//         return;
//     }
//     leaf(root->left, ans);
//     leaf(root->right, ans);
// }
// class solution
// {
// public:
//     vector<int> leafNodes(node *root)
//     {
//         vector<int> temp;
//         if (!root)
//             return temp;
//         if (root->left == NULL && root->right == NULL)
//         {
//             temp.push_back(root->data);
//             return temp;
//         }
//         leafNodes(root->left);
//         leafNodes(root->right);
//     }
// };
// vector<int> leaf(node *root)
// {
//     if (!root)
//         return temp;
//     if (root->left == NULL && root->right == NULL)
//     {
//         temp.push_back(root->data);
//         return temp;
//     }
//     leaf(root->left);
//     leaf(root->right);
// }

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(8);
    root->left->right->left = new node(6);
    root->left->right->right = new node(7);
    root->right->right->right = new node(9);
    root->right->right->right->left = new node(10);
    root->right->right->right->right = new node(11);
    root->right->right->right->left->left = new node(12);
    root->right->right->right->left->right = new node(13);
    root->right->right->right->left->right->right = new node(14);
    vector<int> ans;
    // leaf(root, ans);
    // for (int i = 0; i < ans.size(); i++)
    //     cout << ans[i] << " ";
    // solution s;
    // ans = s.leafNodes(root);
    // ans = leaf(root);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}