//
//  ReversePartList.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/6/17.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "ReversePartList.hpp"
class ReversePartList{
private:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(nullptr){}
    };
public:
    //1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8  m到n。从4到6
    ListNode *reversePartList(ListNode *head, int m, int n){
        if (m == n) {
            return head;
        }
        //哑结点指向头结点
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
         
        //第m-1个结点 pre 注意这里的i的取值范围，很重要
        ListNode *pre = dummy;
        for (int i = 0; i < m-1; i++) {
            pre = pre->next;
        }
        ListNode *cur = pre->next;  //头插法 pre的位置不变
        for (int i = m ; i < n; i++) {
            ListNode *t = pre->next;
            cur->next = t->next;
            t->next = pre->next;
            pre->next = t;
        }
        return dummy->next;
    }
};

