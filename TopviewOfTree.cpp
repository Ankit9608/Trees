// // // programme to print the top view of the binary tree
// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // class node
// // {
// // public:
// //     int data;
// //     node *left, *right;
// //     node(int val)
// //     {
// //         data = val;
// //         left = right = NULL;
// //     }
// // };
// // vector<int> topview(node *root)
// // {
// //     vector<int> ans;
// //     if (root == NULL)
// //         return ans;
// //     map<int, int> mp;

// //     queue<pair<node *, int>> q;

// //     q.push({root, 0});
// //     while (!q.empty())
// //     {
// //         auto a = q.front();
// //         q.pop();
// //         node *Node = a.first;
// //         int line = a.second;
// //         if (mp.find(line) == mp.end())
// //             mp[line] = Node->data;
// //         if (Node->left)
// //             q.push({Node->left, line - 1});
// //         if (Node->right)
// //             q.push({Node->right, line + 1});
// //     }
// //     for (auto it : mp)
// //         ans.push_back(it.second);
// //     return ans;
// // }
// // int main()
// // {
// //     node *root = new node(1);
// //     root->left = new node(2);
// //     root->right = new node(3);
// //     root->left->left = new node(4);
// //     root->left->right = new node(5);
// //     root->right->left = new node(6);
// //     root->right->right = new node(7);
// //     vector<int> res = topview(root);
// //     for (int i = 0; i < res.size(); i++)
// //     {
// //         cout << res[i] << " ";
// //     }
// //     return 0;
// // }

// /* code for left skewed tree*/

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left, *right;
// };
// node *newnode(int val)
// {
//     class node *Node = (class node *)malloc(sizeof(node));
//     Node->data = val;
//     Node->left = NULL;
//     Node->right = NULL;
//     return (Node);
// }
// vector<int> topview(node *root)
// {
//     vector<int> ans;
//     if (root == NULL)
//         return ans;
//     map<int, int> mp;
//     queue<pair<int, node *>> q;
//     q.push({0, root});
//     while (!q.empty())
//     {
//         auto it = q.front();
//         q.pop();
//         int line = it.first;
//         node *a = it.second;
//         if (mp.find(line) == mp.end())
//             mp[line] = a->data;
//         if (a->left)
//             q.push({line - 1, a->left});
//         if (a->right)
//             q.push({line + 1, a->right});
//     }
//     for (auto z : mp)
//         ans.push_back(z.second);
//     return ans;
// }
// int main()
// {
//     node *root = newnode(1);
//     root->left = newnode(2);
//     root->left->left = newnode(3);
//     root->left->left->left = newnode(4);
//     root->left->left->left->left = newnode(5);
//     vector<int> res = topview(root);
//     for (int i = 0; i < res.size(); i++)
//     {
//         cout << res[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
vector<int> topview(node *root)
{
    vector<int> res;
    if (root == NULL)
        return res;
    map<int, int> mp;
    queue<pair<int, node *>> q;
    q.push({0, root});
    while (!q.empty())
    {
        auto a = q.front();
        q.pop();
        int line = a.first;
        node *z = a.second;
        if (mp.find(line) == mp.end())
            mp[line] = z->data;
        if (z->left)
            q.push({line - 1, z->left});
        if (z->right)
            q.push({line + 1, z->right});
    }
    for (auto it : mp)
    {
        res.push_back(it.second);
    }
    return res;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(8);
    root->left->right->right = new node(9);
    root->left->right->right->right = new node(10);
    root->left->left->right = new node(5);
    root->left->left->right->left = new node(6);
    root->left->left->right->left->left = new node(7);
    vector<int> ans;
    ans = topview(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}