// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left, *right;
// };
// node *newNode(int data)
// {
//     node *Node = new node();
//     Node->data = data;
//     Node->left = NULL;
//     Node->right = NULL;
//     return (Node);
// }
// int height_of_tree(node *node)
// {
//     if (node == NULL)
//     {
//         return 0;
//     }
//     int lheigth = height_of_tree(node->left);
//     int rheight = height_of_tree(node->right);
//     if (lheigth > rheight)
//     {
//         // cout << lheigth << endl;
//         return (lheigth + 1);
//     }
//     else
//     {
//         // cout << rheight << endl;
//         return (rheight + 1);
//     }
// }
// void currorder(node *root, int level)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     else if (level == 1)
//     {
//         cout << root->data << " ";
//     }
//     else
//     {
//         currorder(root->left, level - 1);
//         currorder(root->right, level - 1);
//     }
// }
// void levelorde(node *root)
// {
//     int height = height_of_tree(root);
//     for (int i = 1; i <= height; i++)
//     {
//         currorder(root, i);
//     }
// }

// using namespace std;
// int main()
// {
//     node *root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(5);
//     root->left->right = newNode(6);
//     levelorde(root);
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left, *right;
// };

// node *newNode(int val)
// {
//     node *Node = new node();
//     Node->data = val;
//     Node->left = NULL;
//     Node->right = NULL;
//     return (Node);
// }
// int height_of_tree(node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     int lheight = height_of_tree(root->left);
//     int rheight = height_of_tree(root->right);
//     if (lheight > rheight)
//     {
//         return lheight + 1;
//     }
//     else
//     {
//         return rheight + 1;
//     }
// }
// void currentorder(node *root, int height)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     else if (height == 1)
//     {
//         cout << root->data << endl;
//     }
//     else
//     {
//         currentorder(root->left, height - 1);
//         currentorder(root->right, height - 1);
//     }
// }
// void levelorder(node *root)
// {
//     int height = height_of_tree(root);
//     for (int i = 0; i <= height; i++)
//     {
//         currentorder(root, height);
//     }
// }

// int main()
// {
//     node *root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(5);
//     root->left->right = newNode(6);
//     levelorder(root);
//     return 0;
// }