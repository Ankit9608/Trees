// // // // // #include <iostream>
// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
// // // // // struct node
// // // // // {
// // // // //     int data;
// // // // //     node *left, *right;
// // // // //     node(int val)
// // // // //     {
// // // // //         data = val;
// // // // //         left = right = NULL;
// // // // //     }
// // // // // };
// // // // // bool symmetrical(node *root)
// // // // // {
// // // // //     if (!root)
// // // // //         return false;
// // // // //     stack<node *, pair<int, int>> s1;
// // // // //     stack<node *, pair<int, int>> s2;
// // // // //     node *left = root->left;

// // // // //     node *right = root->right;
// // // // // }

// // // // // int main()
// // // // // {
// // // // //     node *root = new node(1);
// // // // //     root->left = new node(2);
// // // // //     root->right = new node(2);
// // // // //     root->left->left = new node(3);
// // // // //     root->left->right = new node(4);
// // // // //     root->right->left = new node(3);
// // // // //     root->right->right = new node(4);
// // // // //     cout << symmetrical(root);
// // // // // }

// // // // #include <iostream>
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // struct node
// // // // {
// // // //     int data;
// // // //     node *left, *right;
// // // //     node(int val)
// // // //     {
// // // //         data = val;
// // // //         left = right = NULL;
// // // //     }
// // // // };

// // // // bool issymmetricalhelp(node *left, node *right)
// // // // {
// // // //     if (left == NULL || right == NULL)
// // // //     {
// // // //         return left == right;
// // // //     }
// // // //     if (left->data != right->data)
// // // //     {
// // // //         return false;
// // // //     }
// // // //     return issymmetricalhelp(left->left, right->right) && issymmetricalhelp(left->right, right->left);
// // // // }
// // // // bool issymmetrical(node *root)
// // // // {
// // // //     return root == NULL || issymmetricalhelp(root->left, root->right);
// // // // }

// // // // int main()
// // // // {
// // // //     node *root = new node(1);
// // // //     root->left = new node(2);
// // // //     root->right = new node(2);
// // // //     root->left->left = new node(3);
// // // //     root->left->right = new node(4);
// // // //     root->right->left = new node(4);
// // // //     // root->right->right = new node(3);
// // // //     cout << issymmetrical(root);
// // // // }

// // // #include <iostream>
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // struct node
// // // {
// // //     int data;
// // //     node *left;
// // //     node *right;
// // //     node(int val)
// // //     {
// // //         data = val;
// // //         left = right = NULL;
// // //     }
// // // };
// // // bool issymmehelp(node *left, node *right)
// // // {
// // //     if (left == NULL || right == NULL)
// // //     {
// // //         return left == right;
// // //     }
// // //     if (left->data != right->data)
// // //     {
// // //         return false;
// // //     }
// // //     return issymmehelp(left->left, right->right) && issymmehelp(left->right, right->left);
// // // }
// // // bool issymme(node *root)
// // // {
// // //     return root == NULL || issymmehelp(root->left, root->right);
// // // }
// // // int main()
// // // {
// // //     node *root = new node(1);
// // //     root->left = new node(2);
// // //     cout << issymme(root);
// // //     return 0;
// // // }

// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // struct node
// // {
// //     int data;
// //     node *left, *right;
// //     node(int val)
// //     {
// //         data = val;
// //         left = right = NULL;
// //     }
// // };
// // bool issymmetricalhelp(node *left, node *right)
// // {
// //     //  if(!root)return false;

// //     if (left == NULL || right == NULL)
// //         return left == right;
// //     if (left->data != right->data)
// //         return false;
// //     return issymmetricalhelp(left->left, right->right) && issymmetricalhelp(left->right, right->left);
// // }
// // bool issymetrical(node *root)
// // {
// //     if (!root)
// //         return false;
// //     return (root == NULL) || issymmetricalhelp(root->left, root->right);
// // }
// // int main()
// // {
// //     node *root = new node(1);
// //     root->left = new node(2);
// //     root->right = new node(2);
// //     cout << issymetrical(root);
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
//     Node->right = NULL;
//     Node->left = NULL;
//     return (Node);
// }
// bool help(node *left, node *right)
// {
//     if (left == NULL || right == NULL)
//         return left == right;
//     if (left->data != right->data)
//         return false;
//     return help(left->left, right->right) && help(left->right, right->left);
// }
// bool sym(node *root)
// {
//     if (!root)
//         return false;
//     return (root == NULL) || help(root->left, root->right);
// }
// int main()
// {

//     node *root = newnode(1);
//     root->left = newnode(2);
//     root->right = newnode(2);
//     cout << sym(root);
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
    Node->left = Node->right = NULL;
    return (Node);
}
bool help(node *left, node *right)
{
    if (left == NULL || right == NULL)
        return left == right;
    if (left->data != right->data)
        return false;
    return help(left->left, right->right) && help(left->right, right->left);
}
bool issymme(node *root)
{
    if (!root)
        return false;
    return (root == NULL) || help(root->left, root->right);
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(2);
    cout << issymme(root);
}
