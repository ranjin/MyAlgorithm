//
//  判断子序列.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/8/9.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "判断子序列.hpp"
class Solution{
public:
    /**
     双指针法,分别指向开头,开始向右移动。
     每次j++,如果相等则i++
     时间复杂度：O(n), n为t的长度
     */
//    bool isSubsequence(string s, string t){
//        int i = 0, j = 0;
//        while (i < s.size() && j < t.size()) {
//            if (s[i] == t[j]) {
//                i++;
//            }
//            j++;
//        }
//        return i == s.size();
//    }
    
    /**
     如果给你一系列字符串s1, s2...和字符串t,你需要判定每个字符串s是否为t的子序列
     
     这里处理每个s的时间复杂度仍然为O(n), 如果巧用
     */
    //查找左侧边界的二分查找
    int left_bound(vector<int>& nums, int target){
        if (nums.size() == 0) {
            return -1;
        }
        int left = 0;
        int right = (int)nums.size()-1;
        while (left <= right) {
            int mid = left+(left+right)/2;
            if (target == nums[mid]) {
                left = mid-1;
            }else if (target > nums[mid]){
                right = mid+1;
            }else if (target < nums[mid]){
                left = mid-1;
            }
        }
        return left;
    }
//    bool isSubSequence2(string s, string t){
//        int m = (int)s.length();
//        int n = (int)t.length();
//        int arr[];
//        //对t进行预处理
//        for (int i = 0; i < n; i++) {
//            char c = s.at(i);
//            if (arr[] == nullptr) {
//                <#statements#>
//            }
//            if (arr[c] == nullptr) {
//                <#statements#>
//            }
//        }
//    }
    
    int sum(int i){
        if (i == 1) {
            return 1;
        }
        return sum(i)+i;
        
    }
};
