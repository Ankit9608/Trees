// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left, *right;
//     node(int val)
//     {
//         data = val;
//         left = right = NULL;
//     }
// };
// vector<int> bottomview(node *root)
// {
//     vector<int> temp;
//     if (root == NULL)
//         return temp;
//     map<int, int> mp;
//     queue<pair<int, node *>> q;
//     q.push({0, root});
//     while (!q.empty())
//     {
//         auto a = q.front();
//         q.pop();
//         int line = a.first;
//         node *z = a.second;
//         mp[line] = z->data;
//         if (z->left)
//             q.push({line - 1, z->left});
//         if (z->right)
//             q.push({line + 1, z->right});
//     }
//     for (auto it : mp)
//     {
//         temp.push_back(it.second);
//     }
// }

// int main()
// {
//     node *root = new node(1);
//     root->left = new node(2);
//     root->left->left = new node(4);
//     root->left->right = new node(8);
//     root->left->right->right = new node(9);
//     root->left->right->right->right = new node(10);
//     root->left->left->right = new node(5);
//     root->left->left->right->left = new node(6);
//     root->left->left->right->left->left = new node(7);
//     vector<int> ans = bottomview(root);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
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
        // cout << "Object is created\n";
        data = val;
        left = right = NULL;
    }
    ~node()
    {
        cout << "Object is deleted\n";
    }
};
vector<int> bottomview(node *root)
{
    vector<int> temp;
    if (!root)
        return temp;
    map<int, int> mp;
    queue<pair<int, node *>> q;
    q.push({0, root});
    while (!q.empty())
    {
        auto a = q.front();
        q.pop();
        int line = a.first;
        node *z = a.second;
        mp[line] = z->data;
        if (z->left)
            q.push({line - 1, z->left});
        if (z->right)
            q.push({line + 1, z->right});
    }
    for (auto s : mp)
    {
        temp.push_back(s.second);
    }
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
    vector<int> ans = bottomview(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}