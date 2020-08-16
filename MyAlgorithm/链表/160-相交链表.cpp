//
//  160-相交链表.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/8/13.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "160-相交链表.hpp"
class Solution{
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL){}
    };
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        ListNode *curA = headA;
        ListNode *curB = headB;
        while (curA != curB) {
            curA = (curA == NULL) ? headB : curA->next;
            curB = (curB == NULL) ? headA : curB->next;
        }
        return curA;
    }
};
