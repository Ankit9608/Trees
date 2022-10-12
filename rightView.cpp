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
// vector<vector<int>> levelorder(node *root)
// {
//     vector<vector<int>> result;
//     if (!root)
//         return result;
//     queue<node *> q;
//     q.push(root);
//     while (!q.empty())

//     {
//         int size = q.size();

//         vector<int> temp(size);
//         for (int i = 0; i < size; i++)
//         {
//             node *z = q.front();
//             q.pop();

//             temp.push_back(z->data);
//             if (z->left)
//                 q.push(z->left);
//             if (z->right)
//                 q.push(z->right);
//         }
//         result.push_back(temp);
//     }
//     return result;
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
//     vector<vector<int>> ans = levelorder(root);
//     // for (int i = 0; i < ans.size(); i++)
//     // {
//     //     for (int j = 0; j < ans[i].size(); j++)
//     //     {
//     //         cout << ans[i][j] << " ";
//     //     }
//     // }
//     for (auto &i : ans)
//     {
//         for (auto &j : i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
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
void recursion(node *root, int h, vector<int> &temp)
{
    if (!root)
        return;
    if (h == temp.size())
        temp.push_back(root->data);
    if (root->right)
        recursion(root->right, h + 1, temp);
    if (root->left)
        recursion(root->left, h + 1, temp);
}
vector<int> rightview(node *root)
{
    vector<int> temp;
    recursion(root, 0, temp);
    return temp;
}

// void rightview2(node *root, int h, vector<int> &ans)
// {
//     if (!root)
//         return;
//     if (ans.size() == h)
//     {
//         ans.push_back(root->data);
//     }

//     if (root->right)
//         rightview(root->right, h + 1, ans);
//     if (root->left)
//         rightview(root->left, h + 1, ans);
//     return;
// }
using namespace std;
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
    vector<int> ans = rightview(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    // vector<int> ans;
    // rightview2(root, 0, ans);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    return 0;
}