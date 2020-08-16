//
//  83-删除排序链表中的重复元素.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/8/13.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "83-删除排序链表中的重复元素.hpp"

class Solution {
    
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x) , next(NULL){}
};
    
public:
    ListNode *deleteDuplicates(ListNode *head){
        if (head == NULL) {
            return NULL;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast != NULL) {
            if (slow->val != fast->val) {
                slow = slow->next;
                slow->next = fast;
            }
            fast = fast->next;
        }
        slow->next = NULL;
        return head;
    }
};
