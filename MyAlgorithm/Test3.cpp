//
//  Test3.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/21.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "Test3.hpp"
class Codec{
private:
    struct TreeNode{
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL){}
    };
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x): val(x), next(NULL){}
    };
    
public:
    bool isPalindrome(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head;
        if (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (slow != NULL) {
            slow = slow->next;
        }
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
    
    
    ListNode *reverse(ListNode *head){
        ListNode *pre = NULL;
        ListNode *cur = head;
        while (cur != NULL) {
            ListNode *t = head->next;
            cur->next = pre;
            pre = cur;
            cur = t;
        }
        return pre;
    }
    
    void BubbleSort(vector<int>& nums, int length){
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
    
    void QSort(int arr[], int low, int high){
        if (high <= low) {
            return;
        }
        int i = low;
        int j = high+1;
        int key = arr[low];
        while (true) {
            while (arr[++i] < key) {
                if (i == high) {
                    break;
                }
            }
            while (arr[--j] > key) {
                if (j == low) {
                    break;
                }
            }
            if (i >= j) {
                break;
            }
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
        QSort(arr, low, j-1);
        QSort(arr, j+1, high);
    }
};

