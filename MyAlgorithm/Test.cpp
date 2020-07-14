//
//  Test.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/2.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "Test.hpp"



class Test{
private:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(nullptr){}
    };
    
public:
    void bubble_sort(vector<int>& nums, int len){
        int i, j;
        for (i = 0; i < nums.size()-1; i++) {
            for (j = 0; j < nums.size()-i-1; j++) {
                if (nums[j] > nums[j+1]) {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
    }
    bool isPalindrome(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head;
        if (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fast != NULL) {
            //链表个数为奇数
            slow = slow->next;
        }
        //从slow开始反转后面的链表
        ListNode *left = head;
        ListNode *right = reverse(slow);
        while (right != NULL) {
            if (left->val != right->val) {
                return false;
            }
            left = left->next;
            right = right->next;
        }
        return true;
    }
    //反转链表
    ListNode *reverse(ListNode *head){
        ListNode *pre = NULL;
        ListNode *cur = head;
        while (cur != NULL) {
            ListNode *t = cur->next;
            cur->next = pre;
            pre = cur;
            cur = t;
        }
        return pre;
    }
//public:
//    vector<int> twoSum(vector<int>& nums, int target){
//        sort(nums.begin(), nums.end());
//        int left = 0;
//        int right = (int)nums.size() - 1;
//        while (left < right) {
//            int sum = nums[left] + nums[right];
//            if (sum < target) {
//                left++;
//            }else if (sum > target){
//                right--;
//            }else if (sum == target){
//                return {nums[left], nums[right]};
//            }
//        }
//        return {-1, -1};
//    }
//public:
//    ListNode reverse(ListNode head) {
//        if (head.next == null) return head;
//        ListNode last = reverse(head.next);
//        head.next.next = head;
//        head.next = null;
//        return last;
//    }
//
//}
/**
 双端队列的基本操作
 class deque {
     // 在队头插入元素 n
     void push_front(int n);
 
     // 在队尾插入元素 n
     void push_back(int n);
 
     // 在队头删除元素
     void pop_front();
 
     // 在队尾删除元素
     void pop_back();
 
     // 返回队头元素
     int front();
 
     // 返回队尾元素
     int back();
 }
 */
class MonotonicQueue{
private:
    deque<int> data;    //双端队列
public:
    /**
     单调队列的push方法：在队尾添加元素，但是需要把前面比新元素小的元素都删掉
     */
    void push(int n){
        //data.back():返回队尾元素
        while (!data.empty() && n > data.back()) {
            //在队尾删除元素
            data.pop_back();
        }
        
        //在队尾插入元素
        data.push_back(n);
    }
    
    //如果每个元素加入时都这样操作，单调队列中的元素大小会保持一个单调递减的顺序，因此max()可以这样写
    int max(){
        return data.front();
    }
    
    //删除队头元素
    void pop(int n){
        if (!data.empty() && data.front() == n) {
            data.pop_front();
        }
    }
};

vector<int> maxSlidingWindow(vector<int>& nums, int k){
    MonotonicQueue window;
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        if (i < k-1) {  //先填满窗口的前k-1
            window.push(nums[i]);
        }else{  //窗口向前滑动
            window.push(nums[i]);
            res.push_back(window.max());
            window.pop(nums[i-k+1]);
        }
    }
    return res;
}




















