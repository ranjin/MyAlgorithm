//
//  MergeTwoLists.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/15.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "MergeTwoLists.hpp"
class MergeTwoLists{
private:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(): val(0), next(nullptr){}
        ListNode(int x, ListNode *next): val(x), next(next){}
    };
public:
    
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2){
        ListNode *preHead = nullptr;
        ListNode *prev = preHead;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val > l2->val) {
                prev->next = l2;
                l2 = l2->next;
            }else{
                prev->next = l1;
                l1 = l1->next;
            }
            prev = prev->next;
        }
        prev->next = l1 == nullptr ? l1 : l2;
        return preHead->next;
    }
//    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2){
//        if (l1 == NULL || l2 == NULL) {
//            return l1 == NULL ? l2 : l1;
//        }
//        if (l1->val > l2->val) {
//            l2->next = mergeTwoLists(l1, l2->next);
//        }else{
//            l1->next = mergeTwoLists(l1->next, l2);
//        }
//        return l1;
//    }
//    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2){
////        ListNode *preHead = new ListNode(-1);
//        ListNode *preHead = nullptr;
//        ListNode *prev = preHead;
//        while (l1 != nullptr && l2 != nullptr) {
//            if (l1->val < l2->val) {
//                prev->next = l1;
//                l1 = l1->next;
//            }else{
//                prev->next = l2;
//                l2 = l2->next;
//            }
//            prev = prev->next;
//        }
//        prev->next = l1 == nullptr ? l2 : l1;
//        return preHead->next;
//    }
};
