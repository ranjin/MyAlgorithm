//
//  RemoveNthFromEnd.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/13.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "RemoveNthFromEnd.hpp"

class RemoveNthFromEnd{
private:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(nullptr){}
    };
    
public:
    ListNode *removeNthFromEnd(ListNode *head, int n){
        ListNode *slow = head;
        ListNode *fast = head;
        int i = 0;
        while (i < n) {
            fast = fast->next;
            ++i;
        }
        if (fast != NULL) {
            //如果不是删除第一个结点
            //这里已经相隔n个结点
            if (fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
            slow->next = slow->next->next;
        }else{
            head = head->next;
        }
        return head;
    };
};
