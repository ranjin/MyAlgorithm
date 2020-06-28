//
//  LowestCommonAncestor.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/6/22.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "LowestCommonAncestor.hpp"

class Solution{
private:
    struct TreeNode{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL){}
    };
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q){
        if (root == NULL) {
            return NULL;
        }
        if (root == p || root == q) {
            return root;
        }
        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);
        if (left == NULL) {
            return right;
        }
        if (right == NULL) {
            return left;
        }
        if (left && right) {    //p和q在两侧
            return root;
        }
        return NULL;
    }
};
