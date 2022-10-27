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
// void leftview(node *root, int h, vector<int> &ans)
// {
//     if (!root)
//         return;
//     if (ans.size() == h)
//     {
//         ans.push_back(root->data);
//     }
//     if (root->left)
//         leftview(root->left, h + 1, ans);
//     if (root->right)
//         leftview(root->right, h + 1, ans);
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
//     vector<int> ans;
//     leftview(root, 0, ans);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

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
// void left(node *root, int h)
// {
//     if (!root)
//     {
//         return;
//     }

//     map<int, int> mp;
//     if (!mp[h])
//     {
//         mp[h] = root->data;
//     }
//     left(root->left, h - 1);
//     left(root->right, h + 1);
//     for (auto it : mp)
//     {
//         cout << it.second << " ";
//     }
// }
// int main()
// {
//     node *root = new node(1);
//     root->left = new node(2);
//     root->right = new node(3);
//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->right->left = new node(6);
//     root->right->right = new node(7);
//     left(root, 0);
//     return 0;
// }