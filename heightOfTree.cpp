// // // // #include <iostream>
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // class node
// // // // {
// // // // public:
// // // //     int data;
// // // //     node *left, *right;
// // // //     node(int val)
// // // //     {
// // // //         data = val;
// // // //         left = right = NULL;
// // // //     }
// // // // };
// // // // int height(node *root)
// // // // {
// // // //     if (!root)
// // // //     {
// // // //         return 0;
// // // //     }
// // // //     int lh = height(root->left);
// // // //     int rh = height(root->right);
// // // //     if (lh > rh)
// // // //         return lh + 1;
// // // //     else
// // // //         rh + 1;
// // // //     return rh + lh;
// // // // }
// // // // int main()
// // // // {
// // // //     node *root = new node(1);
// // // //     root->left = new node(2);
// // // //     root->right = new node(3);
// // // //     root->left->left = new node(4);
// // // //     root->left->right = new node(5);
// // // //     root->right->left = new node(6);
// // // //     root->right->right = new node(7);
// // // //     cout << height(root);
// // // //     return 0;
// // // // }

// // // #include <iostream>
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // struct node
// // // {
// // //     int data;
// // //     node *left, *right;
// // //     node(int val)
// // //     {
// // //         data = val;
// // //         left = right = NULL;
// // //     }
// // // };
// // // int height(node *root)
// // // {
// // //     if (!root)
// // //     {
// // //         return 0;
// // //     }
// // //     int lh = height(root->left);
// // //     int rh = height(root->right);
// // //     return max(lh, rh) + 1;
// // // }
// // // int diameter(node *root)
// // // {
// // //     if (!root)
// // //     {
// // //         return 0;
// // //     }
// // //     int lh = height(root->left);
// // //     int rh = height(root->right);
// // //     int curr = lh + rh + 1;
// // //     int ldia = diameter(root->left);
// // //     int rdia = diameter(root->right);
// // //     return max(curr, max(rdia, ldia));
// // // }
// // // int main()
// // // {
// // //     node *root = new node(1);
// // //     root->left = new node(2);
// // //     root->right = new node(3);
// // //     root->left->left = new node(4);
// // //     root->left->right = new node(5);
// // //     root->right->left = new node(6);
// // //     root->right->right = new node(7);

// // //     // cout << height(root);
// // //     cout << diameter(root);
// // //     return 0;
// // // }
// // // O(n^2)

// // // optimal solution ->
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
// // int diameter(node *root, int *height)
// // {
// //     if (!root)
// //     {
// //         *height = 0;
// //         return 0;
// //     }
// //     int lh = 0, rh = 0;
// //     int ldiameter = diameter(root->left, &lh);
// //     int rdiameter = diameter(root->right, &rh);
// //     int cur = lh + rh + 1;
// //     *height = max(lh, rh) + 1;
// //     return max(cur, max(ldiameter, rdiameter));
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
// //     int height = 0;
// //     cout << diameter(root, &height);
// //     return 0;
// // }

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
// int diameter(node *root, int *height)
// {
//     if (!root)
//     {
//         *height = 0;
//         return 0;
//     }
//     int lh = 0, rh = 0;
//     int ldiameter = diameter(root->left, &lh);
//     int rdiameter = diameter(root->right, &rh);
//     int cur = lh + rh + 1;
//     *height = max(lh, rh) + 1;
//     return max(cur, max(ldiameter, rdiameter));
// }
// int main()
// {
//     node *root = new node(1);
//     root->left = new node(2);
//     root->left->left = new node(3);
//     root->right = new node(4);
//     int height = 0;
//     cout << diameter(root, &height) << endl;
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
int diameter(node *root, int *height)
{
    if (!root)
    {
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ldiameter = diameter(root->left, &lh);
    int rdiameter = diameter(root->right, &rh);
    int cur = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(cur, max(ldiameter, rdiameter));
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->right = new node(4);
    root->right->left = new node(5);
    int height = 0;
    cout << diameter(root, &height) << endl;
    return 0;
}