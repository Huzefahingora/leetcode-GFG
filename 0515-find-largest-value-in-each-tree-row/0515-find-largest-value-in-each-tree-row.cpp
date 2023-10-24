/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
  vector < int >ans;
  void travel (TreeNode * root, int lvl)
  {
    if (!root)
      {
	return;
      }
    if (lvl < ans.size ())
      {
	if (root->val > ans[lvl])
	  {
	    ans[lvl] = root->val;
	  }
      }
    else
      {
	ans.push_back (root->val);
      }
    travel (root->left, lvl + 1);
    travel (root->right, lvl + 1);
  }
  vector < int >largestValues (TreeNode * root)
  {
    travel (root, 0);
    return ans;
  }
};
