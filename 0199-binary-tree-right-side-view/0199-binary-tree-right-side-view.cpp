class Solution {
public:
    vector<int> ans;

    void travel(TreeNode* root, int depth) {
        if (root == NULL)
            return;

        if (ans.size() == depth)
            ans.push_back(root->val);

        travel(root->right, depth + 1);
        travel(root->left, depth + 1);
    }

    vector<int> rightSideView(TreeNode* root) {
        travel(root, 0);
        return ans;
    }
};
