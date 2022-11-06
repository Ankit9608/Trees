// // given a node  and the distance you have to find the nodes which are exactly k distance away from the
// // given node;
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
// void makeparent(unordered_map<node *, node *> un, node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         node *z = q.front();
//         q.pop();
//         if (z->left)
//         {
//             q.push(z->left);
//             un[z->left] = z;
//         }
//         if (z->right)
//         {
//             q.push(z->right);
//             un[z->right] = z;
//         }
//     }
// }
// vector<int> distance(node *root, node *givnode, int k)
// {
//     vector<int> temp;
//     // if (!root)
//     // {
//     //     return temp;
//     // }
//     unordered_map<node *, node *> un;
//     makeparent(un, root);
//     unordered_map<node *, bool> vis;
//     queue<node *> q;
//     q.push(givnode);
//     vis[givnode] = true;
//     int distance = 0;
//     while (!q.empty())
//     {
//         int size = q.size();
//         if (distance++ == k)
//         {
//             break;
//         }
//         for (int i = 0; i < size; i++)
//         {
//             node *z = q.front();
//             q.pop();
//             if (z->left && !vis[z->left])
//             {
//                 q.push(z->left);
//                 vis[z->left] = true;
//             }
//             if (z->right && !vis[z->right])
//             {
//                 q.push(z->right);
//                 vis[z->right] = true;
//             }
//             if (un[z] && !vis[un[z]])
//             {
//                 q.push(un[z]);
//                 vis[un[z]] = true;
//             }
//         }
//     }
//     while (!q.empty())
//     {
//         node *z = q.front();
//         q.pop();
//         temp.push_back(z->data);
//     }
//     return temp;
// }
// int main()
// {
//     node *root = new node(1);
//     root->left = new node(2);
//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->left->right->left = new node(6);
//     root->left->right->right = new node(7);
//     vector<int> ans = distance(root, root->left, 2);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
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
void makepar(node *root, unordered_map<node *, node *> un)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *z = q.front();
        q.pop();
        if (z->left)
        {
            q.push(z->left);
            un[z->left] = z;
        }
        if (z->right)
        {
            q.push(z->right);
            un[z->right] = z;
        }
    }
}
vector<int> distace(node *root, node *given, int k)
{
    queue<node *> q;
    unordered_map<node *, node *> un;
    makepar(root, un);
    unordered_map<node *, bool> vis;
    q.push(given);
    vis[given] = true;
    int distance = 0;
    while (!q.empty())
    {
        int size = q.size();
        if (distance++ == k)
        {
            break;
        }
        for (int i = 0; i < size; i++)
        {
            node *z = q.front();
            q.pop();
            if (z->left && !vis[z->left])
            {
                vis[z->left] = true;
                q.push(z->left);
            }
            if (z->right && !vis[z->right])
            {
                q.push(z->right);
                vis[z->right] = true;
            }
            if (un[z] && !vis[un[z]])
            {
                q.push(un[z]);
                vis[un[z]] = true;
            }
        }
    }
    vector<int> temp;
    while (!q.empty())
    {
        node *z = q.front();
        q.pop();
        temp.push_back(z->data);
    }
    return temp;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(6);
    root->left->right->right = new node(7);
    root->right = new node(3);
    root->right->right = new node(8);
    vector<int> ans = distace(root, root->left, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}