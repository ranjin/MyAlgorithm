//
//  Test.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/7/5.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "Test.hpp"
class Solution{
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL){}
    };
public:
    vector<int> sortArrayByParity(vector<int>& A){
        int i = 0;
        int j = (int)A.size() - 1;
        while (i < j) {
            while (A[i] % 2 == 0 && i < j) {
                i++;
            }
            while (A[j] % 2 == 1 && i < j) {
                j--;
            }
            swap(A[i], A[j]);
        }
        return A;
    }
    
//    int lengthOfLongestSubstring(string s) {
//        int left = 0;
//        int right = 0;
//        unordered_map<char, int> window;
//        int res = 0;    //记录最长长度
//        while (right < s.size()) {
//            char c1 = s[right];
//            window[c1]++;
//            right++;
//            //如果window中出现重复字符
//            //开始移动left缩小窗口
//            while (window[c1] > 1) {
//                char c2 = s[left];
//                window[c2]--;
//                left++;
//            }
//            //每次移动right增大窗口时更新res,而不是在移动left缩小窗口时更新
//            res = max(res, right - left);
//        }
//        return res;
//    }
//
//
//    void reverse(vector<int>& nums){
//        int left = 0;
//        int right = (int)nums.size()-1;
//        while (left < right) {
//            int temp = nums[left];
//            nums[left] = nums[right];
//            nums[right] = temp;
//            left++;
//            right--;
//        }
//    }
//
//    vector<int> twoSum(vector<int>& nums, int target){
//        int left = 0;
//        int right = (int)nums.size()-1;
//        while (left < right) {
//            int sum = nums[left] + nums[right];
//            if (sum == target) {
//                return {left, right};
//            }else if (sum > target){
//                right--;
//            }else if (sum < target){
//                left++;
//            }
//        }
//        return {-1, -1};
//    }
//    ListNode* getKthFromEnd(ListNode* head, int k) {
//        ListNode *slow = head;
//        ListNode *fast = head;
//        while (k-- > 0) {
//            fast = fast->next;
//        }
//        while (fast != NULL) {
//            fast = fast->next;
//            slow = slow->next;
//        }
//        return slow;
//    }
//    ListNode *middleNode(ListNode *head){
//        ListNode *slow = head;
//        ListNode *fast = head;
//        while (fast != NULL && fast->next != NULL) {
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//        return slow;
//    }
    
//    ListNode *detectCycle(ListNode *head){
//        ListNode *fast = head;
//        ListNode *slow = head;
//        while (fast != NULL && fast->next != NULL) {
//            fast = fast->next->next;
//            slow = slow->next;
//            if (slow == fast) {
//                break;
//            }
//        }
//        slow = head;
//        while (slow != fast) {
//            fast = fast->next;
//            slow = slow->next;
//        }
//        return slow;
//    }
//    bool hasCycle(ListNode *head){
//        ListNode *slow = head;
//        ListNode *fast = head;
//        while (fast != NULL && fast->next != NULL) {
//            fast = fast->next->next;
//            slow = slow->next;
//            if (fast == slow) {
//                return true;
//            }
//        }
//        return false;
//    }
};
