//
//  判断回文链表.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/8.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "判断回文链表.hpp"

class Solution{
private:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x): val(x), next(NULL){}
    };
public:
    bool isPalindrome(ListNode *head){
        //1. 通过双指针找到链表中点
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        //如果fast为null，说明链表结点数为奇数。slow再往后移一个。
        if (fast != NULL) {
            slow = slow->next;
        }
        
        //从slow开始反转后面的链表
        ListNode *left = head;
        ListNode *right = reverse(slow);
        
        //判断回文，从两端开始往中间
        while (right != NULL) {
            if (left->val != right->val) {
                return false;
            }
            left = left->next;
            right = right->next;
        }
        return true;
    }
    
    //反转链表部分代码
    ListNode *reverse(ListNode *head){
        ListNode *pre = NULL;
        ListNode *cur = head;
        while (cur != NULL) {
            ListNode *t = cur->next;
            cur->next = pre;
            pre = cur;
            cur = t;
        }
        return pre;
    }
};




























