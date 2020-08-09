//
//  75_颜色分类.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/15.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "75_颜色分类.hpp"
class Solution{
public:
    void sortColors(vector<int>& nums){
        /**
         思路：三指针思想
         红色指针用来扫描，紫色指针标记2，绿色指针用来标记0
         红色指针往右：
         遇到0: 跟绿色指针交换，绿色指针++， 红色指针++
         遇到1: 跳过，红色指针++
         遇到2: 跟紫色指针交换，紫色指针--， 再次对红色指针的值进行判断
         */
        int i = 0;                          //红色指针
        int l = 0;                          //绿色指针
        int r = (int)nums.size() - 1;       //紫色指针
        while (r >= i) {
            if (nums[i] == 0) {
                swap(nums[i], nums[l]);
                i++;
                l++;
            }else if (nums[i] == 1){
                i++;
            }else if (nums[i] == 2){
                swap(nums[i], nums[r]);
                r--;
            }
        }
    }
};
