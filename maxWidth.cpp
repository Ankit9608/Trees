// calculate the maximum width of the tree at a level
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
int width(node *root)
{
    if (!root)
    {
        return 0;
    }
    int ans = INT_MIN;

    queue<pair<node *, int>> q;
    q.push({root, 0});
    int leftmost, rightmost;
    while (!q.empty())
    {
        int size = q.size();
        int curmin = q.front().second;
        for (int i = 0; i < size; i++)
        {
            int curr_id = q.front().second - curmin;
            node *z = q.front().first;
            q.pop();
            if (i == 0)
                leftmost = curr_id;
            if (i == size - 1)
                rightmost = curr_id;
            if (z->left)
            {
                q.push({z->left, (curr_id * 2 + 1)});
            }
            if (z->right)
            {
                q.push({z->right, (curr_id * 2 + 2)});
            }
            ans = max(ans, (rightmost - leftmost + 1));
        }
    }
    return ans;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->left->left = new node(78);
    // root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // root->left->left->left = new node(8);
    // root->left->left->right = new node(9);
    // root->left->right->left = new node(10);
    // root->left->right->right = new node(11);
    root->right->left->left = new node(12);
    root->right->left->right = new node(13);
    root->right->right->left = new node(14);
    root->right->right->right = new node(15);
    cout << width(root) << endl;
    return 0;
}