/**
 * @author zionhann
 * @date 2022-07-08
 * @title 108. Convert Sorted Array to Binary Search Tree
 * @from https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
 * @elapsed_time 45+min
 * 
 * @ref 
 * samoshka, "16 ms C++ solution," LeetCode, Sep. 19, 2015. 
 * [Online]. Available: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/discuss/35242/16-ms-C%2B%2B-solution
 */

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int middle = nums.size() / 2;
        TreeNode* head = new TreeNode(nums[middle]);
        
        head->left = build(nums, 0, middle);
        head->right = build(nums, middle+1, nums.size());
        return head;
    }
    TreeNode* build(vector<int>& nums, int start, int end) {
        if (start == end) {
            return nullptr;
        }
        int middle = start + (end-start) / 2;
        TreeNode* node = new TreeNode(nums[middle]);
        
        node->left = build(nums, start, middle);
        node->right = build(nums, middle+1, end);
        return node;
    }
};