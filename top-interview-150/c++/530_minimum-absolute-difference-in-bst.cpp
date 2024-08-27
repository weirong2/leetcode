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
class Solution {
public:
    vector<int> tv{};
    int min_diff;

    void flat(TreeNode* root) {
        if (!root) return;
        if(root->val==(int)root->val) tv.push_back(root->val);
        flat(root->left);
        flat(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        flat(root);
        sort(tv.begin(), tv.end()); 
        //cout << "[";
        //for (auto v : tv)
        //    std::cout << v << " ";
        //cout << "]" << endl;
        int min_diff = tv[1]-tv[0];
        for (int i=1; i<tv.size()-1; i++) {
            min_diff = min(min_diff, tv[i+1] - tv[i]);
        }
        return min_diff;
    }
};
