//
//  ReverseList.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/13.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "ReverseList.hpp"
class ReverseList{
private:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(nullptr){}
    };
public:
    ListNode *reverseList(ListNode *head){
        ListNode *cur = NULL;
        ListNode *pre = head;
        //定义两个指针：pre和cur；pre在前，cur在后
        
        //让cur的next指针指向pre
        
        //两个指针同时往前移动一个位置
        while (pre != NULL) {   //当pre为null的时候，cur到达最后一个
            ListNode *t = pre->next;
            pre->next = cur;
            cur = pre;
            pre = t;
        }
        return cur;//这里的cur变为了头结点，t为null
    }
};
    
