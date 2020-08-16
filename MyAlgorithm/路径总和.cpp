//
//  路径总和.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/8/9.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "路径总和.hpp"
class Solution{
    struct TreeNode{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr){}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
        TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left(left), right(right){}
    };
public:
    int count(TreeNode *node, int sum){
        if (node == nullptr) {
            return 0;
        }
        //自己能不能独当一面，作为一条单独的路径呢?
//        int isMe = (node->val == sum ? 1 : 0);
        
        //左边的小老弟，你那能凑几个sum-node->val
        int leftBrother = count(node->left, sum - node->val);
        int rightBrother = count(node->right, sum - node->val);
        //我这能凑这么多
        return (node->val == sum) + leftBrother + rightBrother;
    }
    
    int pathSum(TreeNode *root, int sum){
        if (root == nullptr) {
            return 0;
        }
        //自己为开头的路径数
        int pathImLeading = count(root, sum);
        
        //左边路径总数(相信他能算出来)
        int leftPathSum = count(root->left, sum);
        
        int rightPathSum = count(root->right, sum);
        return pathImLeading + leftPathSum + rightPathSum;
    }
};
