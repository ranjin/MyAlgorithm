//
//  Test2.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/14.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "Test2.hpp"

class Test2{
private:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x): val(x), next(NULL){}
    };
public:
    ListNode* oddEventList(ListNode *head){
        if (head == NULL) {
            return NULL;
        }
        /**
         初始化：
         奇：head + odd
         偶：evenHead + even
         */
        
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenHead = even;
        while (even != NULL && even->next != NULL) {
            odd->next = even->next;
            odd = odd->next;
            
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};














































