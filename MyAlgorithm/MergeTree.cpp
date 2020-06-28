//
//  MergeTree.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/1.
//  Copyright © 2020 ThePixel. All rights reserved.
//

//合并二叉树，相同位置节点的相加。位置保持不变
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <iostream>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution{
public:
    TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2){
        if (t1 == nullptr && t2 == nullptr) {
            return nullptr;
        }
        if (t1 == nullptr) {
            return t2;
        }
        if (t2 == nullptr) {
            return t1;
        }else{
            t1->val += t2->val;
            t1->left = mergeTrees(t1->left, t2->left);
            t1->right = mergeTrees(t1->right, t2->right);
            return t1;
        }
    }
};
