//
//  DeleteNode.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/16.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "DeleteNode.hpp"
#include <iostream>

class DeleteNode{
private:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val (x), next(NULL){}
    };
    public:
    class Solution {
    public:
        ListNode* getKthFromEnd(ListNode* head, int k) {
            ListNode* fast = head;
            ListNode* low = head;
            while (fast != NULL) {
                fast = fast->next;
                if (k == 0) {
                    low = low->next;
                } else {
                    k--;
                }
            }
            return low;
        }
    };

};
