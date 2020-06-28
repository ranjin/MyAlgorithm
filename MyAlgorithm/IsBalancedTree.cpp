//
//  IsBalancedTree.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/1.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <iostream>
/**
 判断是否是平衡二叉树：一个二叉树每个节点的左右两个子树的高度差的绝对值不超过1
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution{
public:
    bool isBalanced(TreeNode *root){
        return box(root) != -1;
    }
    int box(TreeNode *root){
        if (!root) {
            return 0;
        }
        int l = box(root->left);
        if (l == -1) {
            return -1;
        }
        int r = box(root->right);
        if (r == -1) {
            return -1;
        }
        return 1;
//        return abs(l-r) < 2 ? max(l, r) + 1: -1;
    }
};
