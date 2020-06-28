//
//  MyLinkedList.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/6/12.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "MyLinkedList.hpp"

class MyLinkedList {
private:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(nullptr){}
    };
    ListNode *head;
public:
    MyLinkedList():head(nullptr){}
    
    /**
     链表的查找：
     获得链表的第index个结点的值
     
     从头结点开始遍历，时间复杂度O(n)
     */
    int get(int index){
        int i = 0;
        ListNode *p = head;
        while (p && i < index) {
            p = p->next;
            i++;
        }
        if (p) {
            return p->val;
        }else{
            return -1;
        }
    }
    /**
     添加：在链表头部插一个值为val的结点
     */
    void addHead(int val){
        ListNode *p = new ListNode(val);
        p->next = head;
        head = p;   //更换头结点
    }
    
    /**
     插入：在链表尾部添加一个值为val的结点
     */
    void addToTail(int val){
        ListNode *p = new ListNode(val);
        //链表为空，直接将新结点作为头结点
        if (head == nullptr) {
            head = p;
            return;
        }
        ListNode *q = head;
        while (q->next) {
            //遍历直到q的next结点为空
            q = q->next;
        }
        q->next = p;
    }
    
    /**
     插入： 在索引为index的结点之前插入值为val的结点
     */
    void addAtIndex(int index, int val){
        ListNode *node = new ListNode(val);
        //index小于等于0，相当于插入头结点
        if (index <= 0) {
                node->next = head;
            head = node;
            return;
        }
        //
        int i = 0;
        ListNode *p = head;
        while (p && i < index-1) {
            p=p->next;
            ++i;
        }
        if (p) {
            //p为索引结点的前驱结点.这里最好是通过画图理解
            node->next = p->next;
            p->next = node;
        }
    }
    
    /**
     删除： 删除索引为index的结点
     */
    void deleteAtIndex(int index){
        //index为0，直接删除head结点
        if (index == 0 && head != nullptr) {
            ListNode *del = head;
            head = head->next;
            delete del;
            return;
        }
        int i = 0;
        ListNode *p = head;
        //找到索引index结点的前驱结点index-1
        while (p && i<index-1) {
            p = p->next;
            ++i;
        }
        //index超过范围，删除失效
        if (!p) {
            return;
        }
        if (p->next) {
            ListNode *del = p->next;
            p->next = del->next;
            delete del;
        }
    }
};
