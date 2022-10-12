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
//     node *Node = (struct node *)malloc(sizeof(node));
//     Node->data = val;
//     Node->left = Node->right = NULL;
//     return (Node);
// }
// void traversal(node *root, vector<int> &pre, vector<int> &in, vector<int> &post)
// {
//     stack<pair<node *, int>> st;
//     st.push({root, 1});
//     if (root == NULL)
//         return;
//     while (!st.empty())
//     {
//         auto it = st.top();
//         st.pop();
//         if (it.second == 1)
//         {
//             pre.push_back(it.first->data);
//             it.second++;
//             st.push(it);
//             if (it.first->left != NULL)
//             {
//                 st.push({it.first->left, 1});
//             }
//         }

//         else if (it.second == 2)
//         {
//             in.push_back(it.first->data);
//             it.second++;
//             st.push(it);
//             if (it.first->right != NULL)
//             {
//                 st.push({it.first->right, 1});
//             }
//         }
//         else
//         {
//             post.push_back(it.first->data);
//         }
//     }
// }
// int main()
// {
//     node *root = newnode(1);
//     root->left = newnode(2);
//     root->right = newnode(3);
//     root->left->left = newnode(4);
//     root->left->right = newnode(5);
//     root->right->left = newnode(6);
//     root->right->right = newnode(7);
//     vector<int> pre, in, post;
//     traversal(root, pre, in, post);
//     cout << "The preorder traversal is\n";
//     for (auto nodeval : pre)
//         cout << nodeval << " ";
//     cout << endl;
//     cout << "The inorder traversal is\n";
//     for (auto nodeval : in)
//         cout << nodeval << " ";
//     cout << endl;
//     cout << "The postorder is\n";
//     for (auto i : post)
//         cout << i << " ";
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     char data;
//     node *right, *left;
// };
// struct node *newnode(char alpha)
// {
//     node *Node = (struct node *)malloc(sizeof(node));
//     Node->data = alpha;
//     Node->left = Node->right = NULL;
//     return (Node);
// }
// void traversal(node *root, vector<char> &pre, vector<char> &in, vector<char> &post)
// {
//     stack<pair<node *, int>> st;
//     st.push({root, 1});
//     if (root == NULL)
//     {
//         return;
//     }

//     while (!st.empty())
//     {
//         auto it = st.top();
//         st.pop();
//         if (it.second == 1)
//         {
//             pre.push_back(it.first->data);
//             it.second++;
//             st.push(it);
//             if (it.first->left != NULL)
//             {
//                 st.push({it.first->left, 1});
//             }
//         }
//         else if (it.second == 2)
//         {
//             in.push_back(it.first->data);
//             it.second++;
//             st.push(it);
//             if (it.first->right != NULL)
//             {
//                 st.push({it.first->right, 1});
//             }
//         }
//         else
//         {
//             post.push_back(it.first->data);
//         }
//     }
// }
// int main()
// {
//     node *root = newnode('a');
//     root->left = newnode('b');
//     root->right = newnode('c');
//     root->left->left = newnode('d');
//     root->left->right = newnode('e');
//     root->right->left = newnode('f');
//     root->right->right = newnode('g');
//     vector<char> pre, in, post;
//     traversal(root, pre, in, post);
//     cout << "The preorder traversal is]\n";
//     for (auto i : pre)
//         cout << i << " ";
//     cout << endl;
//     cout << "The inorder traversal is \n";
//     for (auto i : in)
//         cout << i << " ";
//     cout << endl;
//     cout << "The post order traversal is\n";
//     for (auto i : post)
//         cout << i << " ";
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
        right = NULL;
        left = NULL;
    }

} int main()
{
}
