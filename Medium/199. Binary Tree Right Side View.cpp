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
//Breadth-First Search
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        if (!root) {return ans;}

        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            TreeNode *newNode;
            for (int i=0; i<n; i++) {
                newNode = q.front();
                if (newNode->left) {q.push(newNode->left);}
                if (newNode->right) {q.push(newNode->right);}
                if (i == n-1) {ans.push_back(newNode->val);}
                q.pop();
            }
        }

        return ans;
        
    }
};
