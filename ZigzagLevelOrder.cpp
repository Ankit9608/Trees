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
class solution
{
public:
    vector<vector<int>> zigzac(node *root)
    {
        vector<vector<int>> result;
        if (root == NULL)
            return result;
        queue<node *> q;
        q.push(root);
        bool lefttoright = true;

        while (!q.empty())
        {
            int size = q.size();
            vector<int> row(size);
            for (int i = 0; i < size; i++)
            {
                node *Node = q.front();
                q.pop();
                int index = (lefttoright) ? i : ((size - i) - 1);
                row[index] = Node->data;
                if (Node->left != NULL)
                    q.push(Node->left);
                if (Node->right != NULL)
                    q.push(Node->right);
            }
            // cout << lefttoright << endl;
            lefttoright = (!lefttoright);
            // for (int i = 0; i < size; i++)
            //     cout << row[i] << " ";
            // cout << endl;
            // if (!lefttoright)
            // {
            //     reverse(row.begin(), row.end());
            // }
            // for (int i = 0; i < size; i++)
            // {
            //     cout << row[i] << " ";
            // }
            // cout << endl;
            result.push_back(row);
        }
        return result;
    }
};
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    vector<vector<int>> a;
    solution s;
    a = s.zigzac(root);
    bool lock = true;

    // for (int i = 0; i < a.size(); i++)

    // {
    //     if (lock)
    //     {
    //         for (int j = 0; j < a[i].size(); j++)
    //         {
    //             cout << "a"
    //                  << " ";
    //             cout << a[i][j] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (int j = a[i].size() - 1; j >= 0; j--)
    //         {
    //             cout << "b"
    //                  << " ";
    //             cout << a[i][j] << " ";
    //         }
    //     }
    // cout << "hello" << endl;
    //     lock = !(lock);
    //     cout << lock << endl;
    //     cout << endl;
    // }
    // for (auto &i : a)
    // {
    //     for (auto &j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < a.size(); i++)
    {
        vector<int> b = a[i];
        if (lock)
        {
            cout << "hello" << endl;
            for (int j = 0; j < b.size(); j++)
            {
                cout << b[j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < b.size(); j++)
            {
                cout << b[j] << " ";
            }
            cout << endl;
            // cout << "bye" << endl;
            // cout << "size=" << b.size() << endl;
            // cout << "b[0]=" << b[0] << endl;
            // cout << "size of 2-1=" << b[2 - 1] << " " << endl;
            // for (int j = b.size() - 1; j >= 0; j--)
            // {
            //     cout << b[j] << " ";
            // }
            // cout << endl;
        }
        lock = (!lock);
    }
    return 0;
}

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
// // struct node *newnode(int val)
// // {
// //     struct node *Node = (struct node *)malloc(sizeof(node));
// //     Node->data = val;
// //     Node->left = Node->right = NULL;
// //     return (Node);
// // // }
// // class solution
// // {
// // public:
// //     vector<vector<int>> zigzac(node *root)
// //     {
// //         vector<vector<int>> result;
// //         if (root == NULL)
// //             return result;
// //         queue<node *> q;
// //         q.push(root);
// //         bool leftToright = true;
// //         while (!q.empty())
// //         {
// //             vector<int> row;
// //             int size = q.size();
// //             for (int i = 0; i < size; i++)
// //             {
// //                 node *a = q.front();
// //                 q.pop();
// //                 int index = (leftToright) ? i : (size - i - 1);
// //                 row[index] = a->data;
// //                 if (a->left != NULL)
// //                     q.push(a->left);
// //                 if (a->right != NULL)
// //                     q.push(a->right);
// //             }
// //             leftToright = !(leftToright);
// //             result.push_back(row);
// //         }
// //         return result;
// //     }
// // };
// void zigzac(node *root)
// {
//     if (root == NULL)
//         return;
//     queue<node *> q;
//     q.push(root);
//     bool flag = true;

//     while (!q.empty())
//     {
//         int size = q.size();
//         vector<int> row(size);
//         for (int i = 0; i < size; i++)
//         {
//             node *a = q.front();
//             q.pop();
//             row.push_back(a->data);
//             if (a->left != NULL)
//                 q.push(a->left);
//             if (a->right != NULL)
//                 q.push(a->right);
//         }
//         if (!flag)
//         {
//             for (int i = size - 1; i >= 0; i--)
//             {
//                 cout << row[i] << " ";
//             }
//             cout << endl;
//         }
//         else
//         {
//             for (int i = 0; i < size; i++)
//             {
//                 cout << row[i] << " ";
//             }
//             cout << endl;
//         }
//         flag = (!flag);
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
//     zigzac(root);
//     // vector<vector<int>> b;
//     // solution s;
//     // b = s.zigzac(root);
//     // for (int i = 0; i < b.size(); i++)
//     // {
//     //     for (int j = 0; j < b[i].size(); j++)
//     //     {
//     //         cout << b[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     return 0;
// }