#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
struct node *newNode(int val)
{
    node *Node = (struct node *)malloc(sizeof(struct node));
    Node->data = val;
    Node->right = Node->left = NULL;
    return (Node);
}
class solution
{
public:
    vector<vector<int>> vertical(node *root)
    {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<node *, pair<int, int>>> tode;
        tode.push({root, {0, 0}});
        while (!tode.empty())
        {
            auto a = tode.front();
            tode.pop();
            node *cur = a.first;
            int x = a.second.first;
            int y = a.second.second;
            nodes[x][y].insert(cur->data);
            if (cur->left)
            {
                tode.push({cur->left, {x - 1, y + 1}});
            }
            if (cur->right)
            {
                tode.push({cur->right, {x + 1, y + 1}});
            }
        }
        vector<vector<int>> ans;
        for (auto p : nodes)
        {
            vector<int> col;
            for (auto q : p.second)
            {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->right->left = newNode(2);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    vector<vector<int>> res;
    solution s;
    res = s.vertical(root);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}