void leaf(node *root, vector<int> &ans)
{
    if (!root)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }
    leaf(root->left, ans);
    leaf(root->right, ans);
}