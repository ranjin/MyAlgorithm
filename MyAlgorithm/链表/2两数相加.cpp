//
//  2两数相加.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/28.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "2两数相加.hpp"
class Solution{
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x): val(x), next(NULL){}
    };
    
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
        if (l1 == NULL) {
            return l2;
        }
        if (l2 == NULL) {
            return l1;
        }
        ListNode *dummyNode = new ListNode(0);
        ListNode *last = dummyNode;
        int carry = 0;
        while (l1 != NULL || l2 != NULL) {
            int v1 = 0;
            int v2 = 0;
            if (l1 != NULL) {
                v1 = l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                v2 = l2->val;
                l2 = l2->next;
            }
            
            int sum = v1 + v2 + carry;
            carry = sum / 10;
            last->next = new ListNode(sum%10);
            last = last->next;
        }
        if (carry > 0) {
            last->next = new ListNode(carry);
        }
        return dummyNode->next;
    };
}
